# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/serialized_map.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
require 'gz/msgs/world_stats_pb'
require 'gz/msgs/serialized_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.SerializedEntityMap" do
    optional :id, :uint64, 1
    map :components, :int64, :message, 2, "gz.msgs.SerializedComponent"
    optional :remove, :bool, 3
  end
  add_message "gz.msgs.SerializedStateMap" do
    optional :header, :message, 1, "gz.msgs.Header"
    map :entities, :uint64, :message, 2, "gz.msgs.SerializedEntityMap"
    optional :has_one_time_component_changes, :bool, 3
  end
  add_message "gz.msgs.SerializedStepMap" do
    optional :stats, :message, 1, "gz.msgs.WorldStatistics"
    optional :state, :message, 2, "gz.msgs.SerializedStateMap"
  end
end

module Gz
  module Msgs
    SerializedEntityMap = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.SerializedEntityMap").msgclass
    SerializedStateMap = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.SerializedStateMap").msgclass
    SerializedStepMap = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.SerializedStepMap").msgclass
  end
end