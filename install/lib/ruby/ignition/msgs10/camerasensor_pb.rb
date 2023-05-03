# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/camerasensor.proto

require 'google/protobuf'

require 'gz/msgs/distortion_pb'
require 'gz/msgs/double_pb'
require 'gz/msgs/header_pb'
require 'gz/msgs/image_pb'
require 'gz/msgs/lens_pb'
require 'gz/msgs/sensor_noise_pb'
require 'gz/msgs/vector2d_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.CameraSensor" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :horizontal_fov, :double, 2
    optional :image_size, :message, 3, "gz.msgs.Vector2d"
    optional :image_format, :string, 4
    optional :near_clip, :double, 5
    optional :far_clip, :double, 6
    optional :save_enabled, :bool, 7
    optional :save_path, :string, 8
    optional :distortion, :message, 9, "gz.msgs.Distortion"
    optional :image_noise, :message, 10, "gz.msgs.SensorNoise"
    optional :depth_near_clip, :message, 11, "gz.msgs.Double"
    optional :depth_far_clip, :message, 12, "gz.msgs.Double"
    optional :bounding_box_type, :enum, 13, "gz.msgs.CameraSensor.BoundingBoxType"
    optional :segmentation_type, :enum, 14, "gz.msgs.CameraSensor.SegmentationType"
    optional :lens, :message, 15, "gz.msgs.Lens"
    optional :triggered, :bool, 16
    optional :triggered_topic, :string, 17
    optional :anti_aliasing, :int32, 18
    optional :visibility_mask, :uint32, 19
    optional :is_depth_camera, :bool, 20
    optional :pixel_format, :enum, 21, "gz.msgs.PixelFormatType"
  end
  add_enum "gz.msgs.CameraSensor.BoundingBoxType" do
    value :NO_BOUNDING_BOX, 0
    value :FULL_BOX_2D, 1
    value :VISIBLE_BOX_2D, 2
    value :BOX_3D, 3
  end
  add_enum "gz.msgs.CameraSensor.SegmentationType" do
    value :NO_SEGMENTATION, 0
    value :SEMANTIC, 1
    value :PANOPTIC, 2
  end
end

module Gz
  module Msgs
    CameraSensor = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.CameraSensor").msgclass
    CameraSensor::BoundingBoxType = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.CameraSensor.BoundingBoxType").enummodule
    CameraSensor::SegmentationType = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.CameraSensor.SegmentationType").enummodule
  end
end
