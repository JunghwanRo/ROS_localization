# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/log_control.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.LogControl" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :start, :bool, 2
    optional :stop, :bool, 3
    optional :paused, :bool, 4
    optional :base_path, :string, 5
    optional :encoding, :string, 6
    optional :record_resources, :string, 7
  end
end

module Gz
  module Msgs
    LogControl = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.LogControl").msgclass
  end
end
