# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/cmd_vel2d.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.CmdVel2D" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :velocity, :double, 2
    optional :theta, :double, 3
  end
end

module Gz
  module Msgs
    CmdVel2D = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.CmdVel2D").msgclass
  end
end
