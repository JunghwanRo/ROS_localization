# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/vector2d.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Vector2d" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :x, :double, 2
    optional :y, :double, 3
  end
end

module Gz
  module Msgs
    Vector2d = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Vector2d").msgclass
  end
end