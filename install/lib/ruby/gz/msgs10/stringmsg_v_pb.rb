# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/stringmsg_v.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.StringMsg_V" do
    optional :header, :message, 1, "gz.msgs.Header"
    repeated :data, :string, 2
  end
end

module Gz
  module Msgs
    StringMsg_V = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.StringMsg_V").msgclass
  end
end
