# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/joint_trajectory.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
require 'gz/msgs/joint_trajectory_point_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.JointTrajectory" do
    optional :header, :message, 1, "gz.msgs.Header"
    repeated :joint_names, :string, 2
    repeated :points, :message, 3, "gz.msgs.JointTrajectoryPoint"
  end
end

module Gz
  module Msgs
    JointTrajectory = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.JointTrajectory").msgclass
  end
end
