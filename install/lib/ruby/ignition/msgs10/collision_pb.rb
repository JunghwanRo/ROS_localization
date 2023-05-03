# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/collision.proto

require 'google/protobuf'

require 'gz/msgs/pose_pb'
require 'gz/msgs/geometry_pb'
require 'gz/msgs/surface_pb'
require 'gz/msgs/visual_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Collision" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :id, :uint32, 2
    optional :name, :string, 3
    optional :laser_retro, :double, 4
    optional :max_contacts, :double, 5
    optional :pose, :message, 6, "gz.msgs.Pose"
    optional :geometry, :message, 7, "gz.msgs.Geometry"
    optional :surface, :message, 8, "gz.msgs.Surface"
    repeated :visual, :message, 9, "gz.msgs.Visual"
  end
end

module Gz
  module Msgs
    Collision = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Collision").msgclass
  end
end
