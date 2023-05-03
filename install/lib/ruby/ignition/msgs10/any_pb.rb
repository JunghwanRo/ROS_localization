# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/any.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
require 'gz/msgs/color_pb'
require 'gz/msgs/pose_pb'
require 'gz/msgs/quaternion_pb'
require 'gz/msgs/time_pb'
require 'gz/msgs/vector3d_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Any" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :type, :enum, 2, "gz.msgs.Any.ValueType"
    oneof :value do
      optional :double_value, :double, 3
      optional :int_value, :int32, 4
      optional :string_value, :string, 5
      optional :bool_value, :bool, 6
      optional :vector3d_value, :message, 7, "gz.msgs.Vector3d"
      optional :color_value, :message, 8, "gz.msgs.Color"
      optional :pose3d_value, :message, 9, "gz.msgs.Pose"
      optional :quaternion_value, :message, 10, "gz.msgs.Quaternion"
      optional :time_value, :message, 11, "gz.msgs.Time"
    end
  end
  add_enum "gz.msgs.Any.ValueType" do
    value :NONE, 0
    value :DOUBLE, 1
    value :INT32, 2
    value :STRING, 3
    value :BOOLEAN, 4
    value :VECTOR3D, 5
    value :COLOR, 6
    value :POSE3D, 7
    value :QUATERNIOND, 8
    value :TIME, 9
  end
end

module Gz
  module Msgs
    Any = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Any").msgclass
    Any::ValueType = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Any.ValueType").enummodule
  end
end
