# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/julia/workspace/src/gz-plugin

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/julia/workspace/build/gz-plugin2

# Include any dependencies generated for this target.
include loader/src/cmd/CMakeFiles/gz-plugin.dir/depend.make

# Include the progress variables for this target.
include loader/src/cmd/CMakeFiles/gz-plugin.dir/progress.make

# Include the compile flags for this target's objects.
include loader/src/cmd/CMakeFiles/gz-plugin.dir/flags.make

loader/src/cmd/CMakeFiles/gz-plugin.dir/plugin_main.cc.o: loader/src/cmd/CMakeFiles/gz-plugin.dir/flags.make
loader/src/cmd/CMakeFiles/gz-plugin.dir/plugin_main.cc.o: /home/julia/workspace/src/gz-plugin/loader/src/cmd/plugin_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julia/workspace/build/gz-plugin2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object loader/src/cmd/CMakeFiles/gz-plugin.dir/plugin_main.cc.o"
	cd /home/julia/workspace/build/gz-plugin2/loader/src/cmd && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gz-plugin.dir/plugin_main.cc.o -c /home/julia/workspace/src/gz-plugin/loader/src/cmd/plugin_main.cc

loader/src/cmd/CMakeFiles/gz-plugin.dir/plugin_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gz-plugin.dir/plugin_main.cc.i"
	cd /home/julia/workspace/build/gz-plugin2/loader/src/cmd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julia/workspace/src/gz-plugin/loader/src/cmd/plugin_main.cc > CMakeFiles/gz-plugin.dir/plugin_main.cc.i

loader/src/cmd/CMakeFiles/gz-plugin.dir/plugin_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gz-plugin.dir/plugin_main.cc.s"
	cd /home/julia/workspace/build/gz-plugin2/loader/src/cmd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julia/workspace/src/gz-plugin/loader/src/cmd/plugin_main.cc -o CMakeFiles/gz-plugin.dir/plugin_main.cc.s

# Object files for target gz-plugin
gz__plugin_OBJECTS = \
"CMakeFiles/gz-plugin.dir/plugin_main.cc.o"

# External object files for target gz-plugin
gz__plugin_EXTERNAL_OBJECTS =

bin/gz-plugin: loader/src/cmd/CMakeFiles/gz-plugin.dir/plugin_main.cc.o
bin/gz-plugin: loader/src/cmd/CMakeFiles/gz-plugin.dir/build.make
bin/gz-plugin: lib/libgz.a
bin/gz-plugin: lib/libgz-plugin2-loader.so.2.0.1
bin/gz-plugin: lib/libgz-plugin2.so.2.0.1
bin/gz-plugin: /home/julia/workspace/install/lib/libgz-utils2.so.2.0.0
bin/gz-plugin: loader/src/cmd/CMakeFiles/gz-plugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/julia/workspace/build/gz-plugin2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/gz-plugin"
	cd /home/julia/workspace/build/gz-plugin2/loader/src/cmd && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gz-plugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
loader/src/cmd/CMakeFiles/gz-plugin.dir/build: bin/gz-plugin

.PHONY : loader/src/cmd/CMakeFiles/gz-plugin.dir/build

loader/src/cmd/CMakeFiles/gz-plugin.dir/clean:
	cd /home/julia/workspace/build/gz-plugin2/loader/src/cmd && $(CMAKE_COMMAND) -P CMakeFiles/gz-plugin.dir/cmake_clean.cmake
.PHONY : loader/src/cmd/CMakeFiles/gz-plugin.dir/clean

loader/src/cmd/CMakeFiles/gz-plugin.dir/depend:
	cd /home/julia/workspace/build/gz-plugin2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julia/workspace/src/gz-plugin /home/julia/workspace/src/gz-plugin/loader/src/cmd /home/julia/workspace/build/gz-plugin2 /home/julia/workspace/build/gz-plugin2/loader/src/cmd /home/julia/workspace/build/gz-plugin2/loader/src/cmd/CMakeFiles/gz-plugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : loader/src/cmd/CMakeFiles/gz-plugin.dir/depend
