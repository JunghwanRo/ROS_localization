# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/pose_animation.proto

require 'google/protobuf'

require 'gz/msgs/pose_pb'
require 'gz/msgs/time_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.PoseAnimation" do
    optional :model_name, :string, 1
    optional :model_id, :uint32, 2
    repeated :pose, :message, 3, "gz.msgs.Pose"
    repeated :time, :message, 4, "gz.msgs.Time"
  end
end

module Gz
  module Msgs
    PoseAnimation = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.PoseAnimation").msgclass
  end
end
