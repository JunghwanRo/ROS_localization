// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/world_stats.proto

#include "gz/msgs/world_stats.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
#include "gz/msgs/Factory.hh"
GZ_REGISTER_STATIC_MSG("gz_msgs.WorldStatistics", WorldStatistics)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_LogPlaybackStatistics;
}  // namespace protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto
namespace protobuf_gz_2fmsgs_2ftime_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2ftime_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Time;
}  // namespace protobuf_gz_2fmsgs_2ftime_2eproto
namespace gz {
namespace msgs {
class WorldStatisticsDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<WorldStatistics>
      _instance;
} _WorldStatistics_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fworld_5fstats_2eproto {
static void InitDefaultsWorldStatistics() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_WorldStatistics_default_instance_;
    new (ptr) ::gz::msgs::WorldStatistics();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::WorldStatistics::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<3> scc_info_WorldStatistics =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 3, InitDefaultsWorldStatistics}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2ftime_2eproto::scc_info_Time.base,
      &protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto::scc_info_LogPlaybackStatistics.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_WorldStatistics.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, sim_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, pause_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, real_time_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, paused_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, iterations_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, model_count_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, log_playback_stats_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, real_time_factor_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, step_size_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::WorldStatistics, stepping_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::WorldStatistics)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_WorldStatistics_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/world_stats.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\031gz/msgs/world_stats.proto\022\007gz.msgs\032 gz"
      "/msgs/log_playback_stats.proto\032\022gz/msgs/"
      "time.proto\032\024gz/msgs/header.proto\"\333\002\n\017Wor"
      "ldStatistics\022\037\n\006header\030\001 \001(\0132\017.gz.msgs.H"
      "eader\022\037\n\010sim_time\030\002 \001(\0132\r.gz.msgs.Time\022!"
      "\n\npause_time\030\003 \001(\0132\r.gz.msgs.Time\022 \n\trea"
      "l_time\030\004 \001(\0132\r.gz.msgs.Time\022\016\n\006paused\030\005 "
      "\001(\010\022\022\n\niterations\030\006 \001(\004\022\023\n\013model_count\030\007"
      " \001(\005\022:\n\022log_playback_stats\030\010 \001(\0132\036.gz.ms"
      "gs.LogPlaybackStatistics\022\030\n\020real_time_fa"
      "ctor\030\t \001(\001\022 \n\tstep_size\030\n \001(\0132\r.gz.msgs."
      "Time\022\020\n\010stepping\030\013 \001(\010B\037\n\013com.gz.msgsB\020W"
      "orldStatsProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 503);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/world_stats.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2flog_5fplayback_5fstats_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2ftime_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fheader_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_gz_2fmsgs_2fworld_5fstats_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void WorldStatistics::InitAsDefaultInstance() {
  ::gz::msgs::_WorldStatistics_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_WorldStatistics_default_instance_._instance.get_mutable()->sim_time_ = const_cast< ::gz::msgs::Time*>(
      ::gz::msgs::Time::internal_default_instance());
  ::gz::msgs::_WorldStatistics_default_instance_._instance.get_mutable()->pause_time_ = const_cast< ::gz::msgs::Time*>(
      ::gz::msgs::Time::internal_default_instance());
  ::gz::msgs::_WorldStatistics_default_instance_._instance.get_mutable()->real_time_ = const_cast< ::gz::msgs::Time*>(
      ::gz::msgs::Time::internal_default_instance());
  ::gz::msgs::_WorldStatistics_default_instance_._instance.get_mutable()->log_playback_stats_ = const_cast< ::gz::msgs::LogPlaybackStatistics*>(
      ::gz::msgs::LogPlaybackStatistics::internal_default_instance());
  ::gz::msgs::_WorldStatistics_default_instance_._instance.get_mutable()->step_size_ = const_cast< ::gz::msgs::Time*>(
      ::gz::msgs::Time::internal_default_instance());
}
void WorldStatistics::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void WorldStatistics::clear_sim_time() {
  if (GetArenaNoVirtual() == NULL && sim_time_ != NULL) {
    delete sim_time_;
  }
  sim_time_ = NULL;
}
void WorldStatistics::clear_pause_time() {
  if (GetArenaNoVirtual() == NULL && pause_time_ != NULL) {
    delete pause_time_;
  }
  pause_time_ = NULL;
}
void WorldStatistics::clear_real_time() {
  if (GetArenaNoVirtual() == NULL && real_time_ != NULL) {
    delete real_time_;
  }
  real_time_ = NULL;
}
void WorldStatistics::clear_log_playback_stats() {
  if (GetArenaNoVirtual() == NULL && log_playback_stats_ != NULL) {
    delete log_playback_stats_;
  }
  log_playback_stats_ = NULL;
}
void WorldStatistics::clear_step_size() {
  if (GetArenaNoVirtual() == NULL && step_size_ != NULL) {
    delete step_size_;
  }
  step_size_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WorldStatistics::kHeaderFieldNumber;
const int WorldStatistics::kSimTimeFieldNumber;
const int WorldStatistics::kPauseTimeFieldNumber;
const int WorldStatistics::kRealTimeFieldNumber;
const int WorldStatistics::kPausedFieldNumber;
const int WorldStatistics::kIterationsFieldNumber;
const int WorldStatistics::kModelCountFieldNumber;
const int WorldStatistics::kLogPlaybackStatsFieldNumber;
const int WorldStatistics::kRealTimeFactorFieldNumber;
const int WorldStatistics::kStepSizeFieldNumber;
const int WorldStatistics::kSteppingFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

WorldStatistics::WorldStatistics()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fworld_5fstats_2eproto::scc_info_WorldStatistics.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.WorldStatistics)
}
WorldStatistics::WorldStatistics(const WorldStatistics& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_sim_time()) {
    sim_time_ = new ::gz::msgs::Time(*from.sim_time_);
  } else {
    sim_time_ = NULL;
  }
  if (from.has_pause_time()) {
    pause_time_ = new ::gz::msgs::Time(*from.pause_time_);
  } else {
    pause_time_ = NULL;
  }
  if (from.has_real_time()) {
    real_time_ = new ::gz::msgs::Time(*from.real_time_);
  } else {
    real_time_ = NULL;
  }
  if (from.has_log_playback_stats()) {
    log_playback_stats_ = new ::gz::msgs::LogPlaybackStatistics(*from.log_playback_stats_);
  } else {
    log_playback_stats_ = NULL;
  }
  if (from.has_step_size()) {
    step_size_ = new ::gz::msgs::Time(*from.step_size_);
  } else {
    step_size_ = NULL;
  }
  ::memcpy(&iterations_, &from.iterations_,
    static_cast<size_t>(reinterpret_cast<char*>(&real_time_factor_) -
    reinterpret_cast<char*>(&iterations_)) + sizeof(real_time_factor_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.WorldStatistics)
}

void WorldStatistics::SharedCtor() {
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&real_time_factor_) -
      reinterpret_cast<char*>(&header_)) + sizeof(real_time_factor_));
}

WorldStatistics::~WorldStatistics() {
  // @@protoc_insertion_point(destructor:gz.msgs.WorldStatistics)
  SharedDtor();
}

void WorldStatistics::SharedDtor() {
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete sim_time_;
  if (this != internal_default_instance()) delete pause_time_;
  if (this != internal_default_instance()) delete real_time_;
  if (this != internal_default_instance()) delete log_playback_stats_;
  if (this != internal_default_instance()) delete step_size_;
}

void WorldStatistics::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* WorldStatistics::descriptor() {
  ::protobuf_gz_2fmsgs_2fworld_5fstats_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fworld_5fstats_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const WorldStatistics& WorldStatistics::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fworld_5fstats_2eproto::scc_info_WorldStatistics.base);
  return *internal_default_instance();
}


void WorldStatistics::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.WorldStatistics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && sim_time_ != NULL) {
    delete sim_time_;
  }
  sim_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && pause_time_ != NULL) {
    delete pause_time_;
  }
  pause_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && real_time_ != NULL) {
    delete real_time_;
  }
  real_time_ = NULL;
  if (GetArenaNoVirtual() == NULL && log_playback_stats_ != NULL) {
    delete log_playback_stats_;
  }
  log_playback_stats_ = NULL;
  if (GetArenaNoVirtual() == NULL && step_size_ != NULL) {
    delete step_size_;
  }
  step_size_ = NULL;
  ::memset(&iterations_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&real_time_factor_) -
      reinterpret_cast<char*>(&iterations_)) + sizeof(real_time_factor_));
  _internal_metadata_.Clear();
}

bool WorldStatistics::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.WorldStatistics)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .gz.msgs.Header header = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_header()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Time sim_time = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_sim_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Time pause_time = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pause_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Time real_time = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_real_time()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool paused = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(40u /* 40 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &paused_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 iterations = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(48u /* 48 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &iterations_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 model_count = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(56u /* 56 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &model_count_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.LogPlaybackStatistics log_playback_stats = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_log_playback_stats()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double real_time_factor = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(73u /* 73 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &real_time_factor_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Time step_size = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_step_size()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool stepping = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &stepping_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:gz.msgs.WorldStatistics)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.WorldStatistics)
  return false;
#undef DO_
}

void WorldStatistics::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.WorldStatistics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // .gz.msgs.Time sim_time = 2;
  if (this->has_sim_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->_internal_sim_time(), output);
  }

  // .gz.msgs.Time pause_time = 3;
  if (this->has_pause_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->_internal_pause_time(), output);
  }

  // .gz.msgs.Time real_time = 4;
  if (this->has_real_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_real_time(), output);
  }

  // bool paused = 5;
  if (this->paused() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->paused(), output);
  }

  // uint64 iterations = 6;
  if (this->iterations() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(6, this->iterations(), output);
  }

  // int32 model_count = 7;
  if (this->model_count() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->model_count(), output);
  }

  // .gz.msgs.LogPlaybackStatistics log_playback_stats = 8;
  if (this->has_log_playback_stats()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->_internal_log_playback_stats(), output);
  }

  // double real_time_factor = 9;
  if (this->real_time_factor() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(9, this->real_time_factor(), output);
  }

  // .gz.msgs.Time step_size = 10;
  if (this->has_step_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, this->_internal_step_size(), output);
  }

  // bool stepping = 11;
  if (this->stepping() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->stepping(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.WorldStatistics)
}

::google::protobuf::uint8* WorldStatistics::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.WorldStatistics)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // .gz.msgs.Time sim_time = 2;
  if (this->has_sim_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->_internal_sim_time(), deterministic, target);
  }

  // .gz.msgs.Time pause_time = 3;
  if (this->has_pause_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->_internal_pause_time(), deterministic, target);
  }

  // .gz.msgs.Time real_time = 4;
  if (this->has_real_time()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_real_time(), deterministic, target);
  }

  // bool paused = 5;
  if (this->paused() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->paused(), target);
  }

  // uint64 iterations = 6;
  if (this->iterations() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(6, this->iterations(), target);
  }

  // int32 model_count = 7;
  if (this->model_count() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->model_count(), target);
  }

  // .gz.msgs.LogPlaybackStatistics log_playback_stats = 8;
  if (this->has_log_playback_stats()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        8, this->_internal_log_playback_stats(), deterministic, target);
  }

  // double real_time_factor = 9;
  if (this->real_time_factor() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(9, this->real_time_factor(), target);
  }

  // .gz.msgs.Time step_size = 10;
  if (this->has_step_size()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        10, this->_internal_step_size(), deterministic, target);
  }

  // bool stepping = 11;
  if (this->stepping() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(11, this->stepping(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.WorldStatistics)
  return target;
}

size_t WorldStatistics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.WorldStatistics)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.Time sim_time = 2;
  if (this->has_sim_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *sim_time_);
  }

  // .gz.msgs.Time pause_time = 3;
  if (this->has_pause_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pause_time_);
  }

  // .gz.msgs.Time real_time = 4;
  if (this->has_real_time()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *real_time_);
  }

  // .gz.msgs.LogPlaybackStatistics log_playback_stats = 8;
  if (this->has_log_playback_stats()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *log_playback_stats_);
  }

  // .gz.msgs.Time step_size = 10;
  if (this->has_step_size()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *step_size_);
  }

  // uint64 iterations = 6;
  if (this->iterations() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->iterations());
  }

  // int32 model_count = 7;
  if (this->model_count() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->model_count());
  }

  // bool paused = 5;
  if (this->paused() != 0) {
    total_size += 1 + 1;
  }

  // bool stepping = 11;
  if (this->stepping() != 0) {
    total_size += 1 + 1;
  }

  // double real_time_factor = 9;
  if (this->real_time_factor() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WorldStatistics::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.WorldStatistics)
  GOOGLE_DCHECK_NE(&from, this);
  const WorldStatistics* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const WorldStatistics>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.WorldStatistics)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.WorldStatistics)
    MergeFrom(*source);
  }
}

void WorldStatistics::MergeFrom(const WorldStatistics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.WorldStatistics)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_sim_time()) {
    mutable_sim_time()->::gz::msgs::Time::MergeFrom(from.sim_time());
  }
  if (from.has_pause_time()) {
    mutable_pause_time()->::gz::msgs::Time::MergeFrom(from.pause_time());
  }
  if (from.has_real_time()) {
    mutable_real_time()->::gz::msgs::Time::MergeFrom(from.real_time());
  }
  if (from.has_log_playback_stats()) {
    mutable_log_playback_stats()->::gz::msgs::LogPlaybackStatistics::MergeFrom(from.log_playback_stats());
  }
  if (from.has_step_size()) {
    mutable_step_size()->::gz::msgs::Time::MergeFrom(from.step_size());
  }
  if (from.iterations() != 0) {
    set_iterations(from.iterations());
  }
  if (from.model_count() != 0) {
    set_model_count(from.model_count());
  }
  if (from.paused() != 0) {
    set_paused(from.paused());
  }
  if (from.stepping() != 0) {
    set_stepping(from.stepping());
  }
  if (from.real_time_factor() != 0) {
    set_real_time_factor(from.real_time_factor());
  }
}

void WorldStatistics::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.WorldStatistics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void WorldStatistics::CopyFrom(const WorldStatistics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.WorldStatistics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool WorldStatistics::IsInitialized() const {
  return true;
}

void WorldStatistics::Swap(WorldStatistics* other) {
  if (other == this) return;
  InternalSwap(other);
}
void WorldStatistics::InternalSwap(WorldStatistics* other) {
  using std::swap;
  swap(header_, other->header_);
  swap(sim_time_, other->sim_time_);
  swap(pause_time_, other->pause_time_);
  swap(real_time_, other->real_time_);
  swap(log_playback_stats_, other->log_playback_stats_);
  swap(step_size_, other->step_size_);
  swap(iterations_, other->iterations_);
  swap(model_count_, other->model_count_);
  swap(paused_, other->paused_);
  swap(stepping_, other->stepping_);
  swap(real_time_factor_, other->real_time_factor_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata WorldStatistics::GetMetadata() const {
  protobuf_gz_2fmsgs_2fworld_5fstats_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fworld_5fstats_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::WorldStatistics* Arena::CreateMaybeMessage< ::gz::msgs::WorldStatistics >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::WorldStatistics >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
