# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/request.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Request" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :id, :int32, 2
    optional :request, :string, 3
    optional :data, :string, 4
    optional :dbl_data, :double, 5
  end
end

module Gz
  module Msgs
    Request = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Request").msgclass
  end
end
