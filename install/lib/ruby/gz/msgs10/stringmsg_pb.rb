# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/stringmsg.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.StringMsg" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :data, :string, 2
  end
end

module Gz
  module Msgs
    StringMsg = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.StringMsg").msgclass
  end
end
