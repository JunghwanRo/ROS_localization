# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: gz/msgs/double_v.proto

require 'google/protobuf'

Google::Protobuf::DescriptorPool.generated_pool.build do
  add_message "gz.msgs.Double_V" do
    repeated :data, :double, 1
  end
end

module Gz
  module Msgs
    Double_V = Google::Protobuf::DescriptorPool.generated_pool.lookup("gz.msgs.Double_V").msgclass
  end
end
