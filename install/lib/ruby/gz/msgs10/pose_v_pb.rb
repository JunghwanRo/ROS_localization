# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/pose_v.proto

require 'google/protobuf'

require 'gz/msgs/pose_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Pose_V" do
    optional :header, :message, 1, "gz.msgs.Header"
    repeated :pose, :message, 2, "gz.msgs.Pose"
  end
end

module Gz
  module Msgs
    Pose_V = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Pose_V").msgclass
  end
end
