# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/link_data.proto

require 'google/protobuf'

require 'gz/msgs/vector3d_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.LinkData" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :name, :string, 2
    optional :linear_velocity, :message, 3, "gz.msgs.Vector3d"
    optional :angular_velocity, :message, 4, "gz.msgs.Vector3d"
  end
end

module Gz
  module Msgs
    LinkData = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.LinkData").msgclass
  end
end
