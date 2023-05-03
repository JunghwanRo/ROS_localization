# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/dvl_tracking_target.proto

require 'google/protobuf'

require 'gz/msgs/dvl_kinematic_estimate_pb'
require 'gz/msgs/dvl_range_estimate_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.DVLTrackingTarget" do
    optional :type, :enum, 1, "gz.msgs.DVLTrackingTarget.TargetType"
    optional :range, :message, 2, "gz.msgs.DVLRangeEstimate"
    optional :position, :message, 3, "gz.msgs.DVLKinematicEstimate"
  end
  add_enum "gz.msgs.DVLTrackingTarget.TargetType" do
    value :DVL_TARGET_UNSPECIFIED, 0
    value :DVL_TARGET_BOTTOM, 1
    value :DVL_TARGET_WATER_MASS, 2
  end
end

module Gz
  module Msgs
    DVLTrackingTarget = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.DVLTrackingTarget").msgclass
    DVLTrackingTarget::TargetType = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.DVLTrackingTarget.TargetType").enummodule
  end
end
