# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/int64.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Int64" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :data, :int64, 2
  end
end

module Gz
  module Msgs
    Int64 = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Int64").msgclass
  end
end
