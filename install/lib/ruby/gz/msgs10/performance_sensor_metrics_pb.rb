# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/performance_sensor_metrics.proto

require 'google/protobuf'

require 'gz/msgs/double_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.PerformanceSensorMetrics" do
    optional :name, :string, 1
    optional :real_update_rate, :double, 2
    optional :sim_update_rate, :double, 3
    optional :nominal_update_rate, :double, 4
    optional :fps_optional, :message, 5, "gz.msgs.Double"
  end
end

module Gz
  module Msgs
    PerformanceSensorMetrics = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.PerformanceSensorMetrics").msgclass
  end
end
