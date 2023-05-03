# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/surface.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
require 'gz/msgs/friction_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Surface" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :friction, :message, 2, "gz.msgs.Friction"
    optional :restitution_coefficient, :double, 3
    optional :bounce_threshold, :double, 4
    optional :soft_cfm, :double, 5
    optional :soft_erp, :double, 6
    optional :kp, :double, 7
    optional :kd, :double, 8
    optional :max_vel, :double, 9
    optional :min_depth, :double, 10
    optional :collide_without_contact, :bool, 11
    optional :collide_without_contact_bitmask, :uint32, 12
    optional :collide_bitmask, :uint32, 13
    optional :elastic_modulus, :double, 14
  end
end

module Gz
  module Msgs
    Surface = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Surface").msgclass
  end
end
