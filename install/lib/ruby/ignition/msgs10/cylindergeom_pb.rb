# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/cylindergeom.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.CylinderGeom" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :radius, :double, 2
    optional :length, :double, 3
  end
end

module Gz
  module Msgs
    CylinderGeom = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.CylinderGeom").msgclass
  end
end
