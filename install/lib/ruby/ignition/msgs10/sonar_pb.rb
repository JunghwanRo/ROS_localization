# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/sonar.proto

require 'google/protobuf'

require 'gz/msgs/pose_pb'
require 'gz/msgs/vector3d_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Sonar" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :frame, :string, 2
    optional :world_pose, :message, 3, "gz.msgs.Pose"
    optional :range_min, :double, 4
    optional :range_max, :double, 5
    optional :radius, :double, 6
    optional :range, :double, 7
    optional :geometry, :string, 8
    optional :contact, :message, 9, "gz.msgs.Vector3d"
  end
end

module Gz
  module Msgs
    Sonar = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Sonar").msgclass
  end
end
