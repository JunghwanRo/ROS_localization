# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/annotated_axis_aligned_2d_box_v.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
require 'gz/msgs/annotated_axis_aligned_2d_box_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.AnnotatedAxisAligned2DBox_V" do
    optional :header, :message, 1, "gz.msgs.Header"
    repeated :annotated_box, :message, 2, "gz.msgs.AnnotatedAxisAligned2DBox"
  end
end

module Gz
  module Msgs
    AnnotatedAxisAligned2DBox_V = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.AnnotatedAxisAligned2DBox_V").msgclass
  end
end
