# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/sim_event.proto

require 'google/protobuf'

require 'gz/msgs/world_stats_pb'
require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.SimEvent" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :id, :uint32, 2
    optional :type, :string, 3
    optional :name, :string, 4
    optional :world_statistics, :message, 5, "gz.msgs.WorldStatistics"
    optional :data, :string, 6
  end
end

module Gz
  module Msgs
    SimEvent = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.SimEvent").msgclass
  end
end
