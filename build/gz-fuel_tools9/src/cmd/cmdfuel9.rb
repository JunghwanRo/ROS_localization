#!/usr/bin/ruby

# Copyright (C) 2017 Open Source Robotics Foundation
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# We use 'dl' for Ruby <= 1.9.x and 'fiddle' for Ruby >= 2.0.x
if RUBY_VERSION.split('.')[0] < '2'
  require 'dl'
  require 'dl/import'
  include DL
else
  require 'fiddle'
  require 'fiddle/import'
  include Fiddle
end

require 'optparse'

# Constants.
LIBRARY_NAME = 'libgz-fuel_tools9.so'
LIBRARY_VERSION = '9.0.0'
MAX_PARALLEL_JOBS = 16

COMMON_OPTIONS =
  "  -c [--config] arg        Path to a configuration file.                 \n"\
  "  -h [--help]              Print this help message.                      \n"\
  "                                                                         \n"\
  "  --force-version <VERSION>  Use a specific library version.             \n"\
  "                                                                         \n"\
  "  --versions               Show the available versions.                  \n"\
  "                                                                         \n"\
  " HTTP Headers:                                                           \n"\
  "                                                                         \n"\
  "   The following information is in regards to user authentication via    \n"\
  "   the --header command line option.                                     \n"\
  "                                                                         \n"\
  "   Two types of credentials are supported on Gazebo Fuel, Private      \n"\
  "   Token and JSON Web Token(JWT). The Private Token method is prefered.  \n"\
  "   Private tokens can be created through your  user settings on          \n"\
  "   https://app.gazebosim.org. Example usage:                      \n"\
  "     1. Private token method:                                            \n"\
  "         --header 'Private-Token: <token>'                               \n"\
  "     2. JWT method:                                                      \n"\
  "         --header 'authorization: Bearer <JWT>'                          \n"


COMMANDS = { 'fuel' =>
  "Manage simulation resources.                                            \n"\
  "                                                                        \n"\
  "  gz fuel [action] [options]                                           \n"\
  "                                                                        \n"\
  "Available Actions:                                                      \n"\
  "  delete                   Delete resources                             \n"\
  "  download                 Download resources                           \n"\
  "  edit                     Edit a resource                              \n"\
  "  list                     List available resources                     \n"\
  "  meta                     Read and write resource metadata             \n"\
  "  upload                   Upload resources                             \n"\
  "  update                   Update resources                             \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n"\
  "  -v [ --verbose ] [arg]   Adjust the level of console output (0~4).    \n"\
  "                           The default verbosity is 1, use -v without   \n"\
  "                           arguments for level 3.                       \n" +
  COMMON_OPTIONS + "\n\n" +
  "Environment variables:                                                  \n"\
  "  GZ_FUEL_CACHE_PATH      Path to the cache where resources are        \n"\
  " downloaded to. Defaults to $HOME/.gz/fuel                        \n"
}

SUBCOMMANDS = {
 'delete' =>
  "Delete simulation resources                                             \n"\
  "                                                                        \n"\
  "  gz fuel delete [options]                                              \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n"\
  "  -u [--url] arg           URL of the server that should receive        \n"\
  "                           the model. If unspecified, the server will be\n"\
  "                           https://fuel.gazebosim.org.                  \n"\
  "  --header arg             Set an HTTP header, such as                  \n"\
  "                           --header 'Private-Token: <access_token>'.    \n" +
  COMMON_OPTIONS,

 'download' =>
  "Download simulation resources                                           \n"\
  "                                                                        \n"\
  "  gz fuel download [options]                                           \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n"\
  "  -u [--url] arg           Full resource URL, such as:                  \n"\
  "                           https://fuel.gazebosim.org/1.0/openrobotics/models/Ambulance\n"\
  "  --header arg             Set an HTTP header, such as                  \n"\
  "                           --header 'Private-Token: <access_token>'.    \n"\
  "  -j [--jobs] arg          Number of parallel downloads (default: 1,    \n"\
  "                           max: #{MAX_PARALLEL_JOBS}). \n"\
  "  -t [--type] arg          Limit what resource type (i.e. model, world) \n"\
  "                           to download from a collection. All resources \n"\
  "                           will be downloaded if unspecified. Ignored   \n"\
  "                           if not downloading collection.               \n"+
  COMMON_OPTIONS,

 'edit' =>
  "Edit a simulation resource                                              \n"\
  "                                                                        \n"\
  "  gz fuel edit [options]                                                \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n"\
  "  -m [--model] arg         Path to directory containing the model.      \n"\
  "  -u [--url] arg           URL of the server that should receive        \n"\
  "                           the model. If unspecified, the server will be\n"\
  "                           https://fuel.gazebosim.org.                  \n"\
  "  -p [--private]           Use this argument to make the model private. \n"\
  "  -b [--public]            Use this argument to make the model public.  \n"\
  "  --header arg             Set an HTTP header, such as                  \n"\
  "                           --header 'Private-Token: <access_token>'.    \n" +
  COMMON_OPTIONS,

  'list' =>
  "List simulation resources                                               \n"\
  "                                                                        \n"\
  "  gz fuel list [options]                                                \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n"\
  "  -t [--type] arg          Resource type (i.e. model, world). Required. \n"\
  "  -o [--owner] arg         Return only resources for given owner.       \n"\
  "  -u [--url] arg           URL of a server the resource comes from,     \n"\
  "                           if unspecified, it will be                   \n"\
  "                           https://fuel.gazebosim.org.                  \n"\
  "  -r [--raw]               Machine-friendly output.                     \n" +
  COMMON_OPTIONS,

  'meta' =>
  "Read and write resource metadata                                        \n"\
  "                                                                        \n"\
  "  gz fuel meta [options]                                               \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n"\
  "  --config2pbtxt arg       Convert a model.config file to a             \n"\
  "                           metadata.pbtxt.                              \n"+
  "  --pbtxt2config arg       Convert a metadata.pbtxt file to a           \n"\
  "                           model.confg.                                 \n"+
  COMMON_OPTIONS,

 'upload' =>
  "Upload simulation resources                                             \n"\
  "                                                                        \n"\
  "  gz fuel upload [options]                                              \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n"\
  "  -m [--model] arg         Path to directory containing a model, or     \n"\
  "                           multiple models each in a subdirectory.      \n"\
  "  -u [--url] arg           URL of the server that should receive        \n"\
  "                           the model. If unspecified, the server will be\n"\
  "                           https://fuel.gazebosim.org.                  \n"\
  "  -o [--owner] arg         Upload to the given owner, which can be an.  \n"\
  "                           organization. Default behavior is to upload  \n"\
  "                           to the user account associated with the      \n"\
  "                           private token specified in the header.       \n"\
  "  -p [--private]           Use this argument to make the model private. \n"\
  "                           Otherwise, the model will be public.         \n"\
  "  --header arg             Set an HTTP header, such as                  \n"\
  "                           --header 'Private-Token: <access_token>'.    \n" +
  COMMON_OPTIONS,

 'update' =>
  "Update all models and worlds in local cache                             \n"\
  "                                                                        \n"\
  "  gz fuel update [options]                                             \n"\
  "                                                                        \n"\
  "Available Options:                                                      \n"\
  "  --onlymodels             Use this argument to only update models.     \n"\
  "  --onlyworlds             Use this argument to only update worlds.     \n"\
  "  --header arg             Set an HTTP header, such as                  \n"\
  "                           --header 'Private-Token: <access_token>'.    \n" +
  COMMON_OPTIONS
}

#
# Class for the Gazebo Fuel command line tools.
#
class Cmd

  #
  # Return a structure describing the options.
  #
  def parse(args)
    options = {
      'verbose' => '1',
      'url' => '',
      'owner' => '',
      'raw' => 'false',
      'config' => '',
      'header' => '',
      'model' => '',
      'config2pbtxt' => '',
      'pbtxt2config' => '',
      'private' => '',
      'onlymodels' => '0',
      'onlyworlds' => '0'
    }

    usage = COMMANDS[args[0]]

    if !SUBCOMMANDS.key?(args[1])
      puts usage
      exit -1
    else
      usage = SUBCOMMANDS[args[1]]
    end

    opt_parser = OptionParser.new do |opts|
      opts.banner = usage

      opts.on('-h', '--help') do
        puts usage
        exit
      end
      opts.on('-u [URL]', '--url', String, 'Server URL') do |url|
        options['url'] = url
      end
      opts.on('-t [TYPE]', '--type', String, 'Resource type') do |type|
        options['type'] = type
      end
      opts.on('-o [OWNER]', '--owner', String, 'Resource owner') do |owner|
        options['owner'] = owner
      end
      opts.on('-c [CONFIG]', '--config', String, 'Configuration file') do |cfg|
        options['config'] = cfg
      end
      opts.on('-r', '--raw', 'Machine readable') do
        options['raw'] = 'true'
      end
      opts.on('-v [verbose]', '--verbose [verbose]', String,
          'Adjust level of console output') do |v|
        options['verbose'] = v || '3'
      end
      opts.on('--header [header]', String,
              'Add a header to the HTTP request.') do |h|
        options['header'] = h
      end
      opts.on('--model [model]', String, 'Model to upload.') do |m|
        options['model'] = m
      end
      opts.on('--config2pbtxt [config]',
              String, 'Convert config file.') do |c|
        options['config2pbtxt'] = c
      end
      opts.on('--pbtxt2config [pbtxt]',
              String, 'Convert pbtxt file.') do |c|
        options['pbtxt2config'] = c
      end
      opts.on('-p', '--private', 'Private resource') do
        options['private'] = 'true'
      end
      opts.on('-b', '--public', 'Public resource') do
        options['private'] = 'false'
      end
      opts.on('-j [JOBS]', '--jobs', String, 'Number of parallel downloads') do |jobs|
        options['jobs'] = jobs || 1
      end
      opts.on('--onlymodels', 'Only update models') do
        options['onlymodels'] = '1'
      end
      opts.on('--onlyworlds', 'Only update worlds') do
        options['onlyworlds'] = '1'
      end
    end # opt_parser do

    opt_parser.parse!(args)

    options['command'] = args[0]
    options['subcommand'] = args[1]

    # check required flags
    case options['subcommand']
    when 'delete'
      if options['url'] == ''
        puts "Missing resource URL (e.g. --url https://fuel.gazebosim.org/1.0/OpenRobotics/models/Ambulance)."
        exit(-1)
      end
    when 'download'
      if options['url'] == ''
        puts "Missing resource URL (e.g. --url https://fuel.gazebosim.org/1.0/OpenRobotics/models/Ambulance)."
        exit(-1)
      end

      if options.key?('jobs')
        begin
          options['jobs_int'] = Integer(options['jobs'])
          if (options['jobs_int'] > MAX_PARALLEL_JOBS)
            puts "The specified number of jobs #{options['jobs_int']} exceeds the maximum of #{MAX_PARALLEL_JOBS}"
            exit(-1)
          end
        rescue
          puts "The provided 'jobs' parameter #{options['jobs']} is not an integer"
          exit(-1)
        end
      else
        options['jobs_int'] = 1
      end

      if options.key?('type')
        if options['type'] != 'model' and options['type'] != 'world'
          puts "Invalid resource type, use 'model' or 'world'."
          exit(-1)
        end
      end
    when 'list'
      # Resource type
      if !options.key?('type')
        puts "Missing resource type (e.g. --type model)."
        exit(-1)
      end
      if options['type'] != 'model' and options['type'] != 'world'
        puts "Invalid resource type, use 'model' or 'world'."
        exit(-1)
      end
    when 'upload'
      if options['model'] == ''
        puts "Missing model path."
        exit(-1)
      end
      if options['url'] == ''
        puts "Missing URL (e.g. --url https://fuel.gazebosim.org)."
        exit(-1)
      end
    when 'edit'
      if options['url'] == ''
        puts "Missing resource URL (e.g. --url https://fuel.gazebosim.org/1.0/OpenRobotics/models/Ambulance)."
        exit(-1)
      end
    end

    options
  end # parse()

  def execute(args)
    options = parse(args)

    # Read the plugin that handles the command.
    plugin = LIBRARY_NAME
    conf_version = LIBRARY_VERSION

    begin
      Importer.dlload plugin
    rescue DLError
      puts "Library error: [#{plugin}] not found."
      exit(-1)
    end

    # Read the library version.
    Importer.extern 'char* gzVersion()'
    begin
      plugin_version = Importer.gzVersion.to_s
    rescue DLError
        puts "Library error: Problem running 'gzVersion()' from #{plugin}."
        exit(-1)
    end

    # Sanity check: Verify that the version of the yaml file matches the version
    # of the library that we are using.
    unless plugin_version.eql? conf_version
      puts "Error: Version mismatch. Your configuration file version is
            [#{conf_version}] but #{plugin} version is [#{plugin_version}]."
      exit(-1)
    end

    begin

      # Global configurations
      if options.key?('verbose')
        Importer.extern 'void cmdVerbosity(const char *)'
        Importer.cmdVerbosity(options['verbose'])
      end

      case options['subcommand']
      when 'delete'
        Importer.extern 'int deleteUrl(const char *, const char *)'
        if not Importer.deleteUrl(options['url'], options['header'])
          exit(-1)
        end
      when 'download'
        Importer.extern 'int downloadUrl(const char *, const  char *, const char *, const char *, unsigned int)'
        if not Importer.downloadUrl(options['url'], options['config'],
            options['header'], options['type'], options['jobs_int'])
          exit(-1)
        end
      when 'edit'
        Importer.extern 'int editUrl(const char *, const char *, const char *, const char *)'
        if not Importer.editUrl(options['url'], options['header'],
            options['private'], options['model'])
          exit(-1)
        end
      when 'list'
        if options['type'] == 'model'
          Importer.extern 'int listModels(const char *, const char *, const char *, const char *)'
          if not Importer.listModels(options['url'],
                                     options['owner'],
                                     options['raw'],
                                     options['config'])
            exit(-1)
          end
        elsif options['type'] == 'world'
          Importer.extern 'int listWorlds(const char *, const char *, const char *, const char *)'
          if not Importer.listWorlds(options['url'],
                                     options['owner'],
                                     options['raw'],
                                     options['config'])
            exit(-1)
          end
        end
      when 'meta'
        if options.key?('config2pbtxt') && !options['config2pbtxt'].empty?
          Importer.extern 'int config2Pbtxt(const char *)'
          if not Importer.config2Pbtxt(options['config2pbtxt'])
            exit(-1)
          end
        elsif options.key?('pbtxt2config') && !options['pbtxt2config'].empty?
          Importer.extern 'int pbtxt2Config(const char *)'
          if not Importer.pbtxt2Config(options['pbtxt2config'])
            exit(-1)
          end
        end
      when 'upload'
        Importer.extern 'int upload(const char *, const char *, const char *, const char *, const char *)'
        if not Importer.upload(options['model'],
                               options['url'],
                               options['header'],
                               options['private'],
                               options['owner'])
          exit(-1)
        end
      when 'update'
        Importer.extern 'int update(const char *, const char *, const char *)'
        if not Importer.update(options['onlymodels'],
                               options['onlyworlds'],
                               options['header'])
          exit(-1)
        end
      end
    rescue
      puts "Library error: Problem running [#{options['subcommand']}]() "\
           "from libgz-fuel_tools9.so."
    end # begin
  end # execute
end # class
