# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/sensor_noise.proto

require 'google/protobuf'

require 'gz/msgs/header_pb'
Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.SensorNoise" do
    optional :header, :message, 1, "gz.msgs.Header"
    optional :type, :enum, 2, "gz.msgs.SensorNoise.Type"
    optional :mean, :double, 3
    optional :stddev, :double, 4
    optional :bias_mean, :double, 5
    optional :bias_stddev, :double, 6
    optional :precision, :double, 7
    optional :dynamic_bias_stddev, :double, 8
    optional :dynamic_bias_correlation_time, :double, 9
  end
  add_enum "gz.msgs.SensorNoise.Type" do
    value :NONE, 0
    value :GAUSSIAN, 2
    value :GAUSSIAN_QUANTIZED, 3
  end
end

module Gz
  module Msgs
    SensorNoise = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.SensorNoise").msgclass
    SensorNoise::Type = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.SensorNoise.Type").enummodule
  end
end