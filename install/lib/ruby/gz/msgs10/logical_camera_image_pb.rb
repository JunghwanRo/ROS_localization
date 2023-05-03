# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/logical_camera_image.proto

require 'google/protobuf'

require 'gz/msgs/pose_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.LogicalCameraImage" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :pose, :message, 2, "gz.msgs.Pose"
    repeated :model, :message, 3, "gz.msgs.LogicalCameraImage.Model"
  end
  add_message "gz.msgs.LogicalCameraImage.Model" do
    optional :name, :string, 1
    optional :pose, :message, 2, "gz.msgs.Pose"
  end
end

module Gz
  module Msgs
    LogicalCameraImage = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.LogicalCameraImage").msgclass
    LogicalCameraImage::Model = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.LogicalCameraImage.Model").msgclass
  end
end
