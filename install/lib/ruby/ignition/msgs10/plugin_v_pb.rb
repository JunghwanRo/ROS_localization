# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/plugin_v.proto

require 'google/protobuf'

require 'gz/msgs/plugin_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Plugin_V" do
    optional :header, :message, 1, "gz.msgs.Header"
    repeated :plugins, :message, 2, "gz.msgs.Plugin"
  end
end

module Gz
  module Msgs
    Plugin_V = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Plugin_V").msgclass
  end
end
