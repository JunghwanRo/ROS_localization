// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/navsat.proto

#include "gz/msgs/navsat.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.NavSat", NavSat)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class NavSatDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<NavSat>
      _instance;
} _NavSat_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fnavsat_2eproto {
static void InitDefaultsNavSat() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_NavSat_default_instance_;
    new (ptr) ::gz::msgs::NavSat();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::NavSat::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_NavSat =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsNavSat}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_NavSat.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSat, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSat, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSat, latitude_deg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSat, longitude_deg_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSat, altitude_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSat, velocity_east_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSat, velocity_north_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSat, velocity_up_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::NavSat, frame_id_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::NavSat)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_NavSat_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/navsat.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\024gz/msgs/navsat.proto\022\007gz.msgs\032\024gz/msgs"
      "/header.proto\"\276\001\n\006NavSat\022\037\n\006header\030\001 \001(\013"
      "2\017.gz.msgs.Header\022\024\n\014latitude_deg\030\002 \001(\001\022"
      "\025\n\rlongitude_deg\030\003 \001(\001\022\020\n\010altitude\030\004 \001(\001"
      "\022\025\n\rvelocity_east\030\005 \001(\001\022\026\n\016velocity_nort"
      "h\030\006 \001(\001\022\023\n\013velocity_up\030\007 \001(\001\022\020\n\010frame_id"
      "\030\010 \001(\tB\033\n\013com.gz.msgsB\014NavSatProtosb\006pro"
      "to3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 283);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/navsat.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fnavsat_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void NavSat::InitAsDefaultInstance() {
  ::gz::msgs::_NavSat_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void NavSat::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int NavSat::kHeaderFieldNumber;
const int NavSat::kLatitudeDegFieldNumber;
const int NavSat::kLongitudeDegFieldNumber;
const int NavSat::kAltitudeFieldNumber;
const int NavSat::kVelocityEastFieldNumber;
const int NavSat::kVelocityNorthFieldNumber;
const int NavSat::kVelocityUpFieldNumber;
const int NavSat::kFrameIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

NavSat::NavSat()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fnavsat_2eproto::scc_info_NavSat.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.NavSat)
}
NavSat::NavSat(const NavSat& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  frame_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.frame_id().size() > 0) {
    frame_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.frame_id_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  ::memcpy(&latitude_deg_, &from.latitude_deg_,
    static_cast<size_t>(reinterpret_cast<char*>(&velocity_up_) -
    reinterpret_cast<char*>(&latitude_deg_)) + sizeof(velocity_up_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.NavSat)
}

void NavSat::SharedCtor() {
  frame_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&velocity_up_) -
      reinterpret_cast<char*>(&header_)) + sizeof(velocity_up_));
}

NavSat::~NavSat() {
  // @@protoc_insertion_point(destructor:gz.msgs.NavSat)
  SharedDtor();
}

void NavSat::SharedDtor() {
  frame_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void NavSat::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* NavSat::descriptor() {
  ::protobuf_gz_2fmsgs_2fnavsat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fnavsat_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const NavSat& NavSat::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fnavsat_2eproto::scc_info_NavSat.base);
  return *internal_default_instance();
}


void NavSat::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.NavSat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  frame_id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  ::memset(&latitude_deg_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&velocity_up_) -
      reinterpret_cast<char*>(&latitude_deg_)) + sizeof(velocity_up_));
  _internal_metadata_.Clear();
}

bool NavSat::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.NavSat)
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

      // double latitude_deg = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u /* 17 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &latitude_deg_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double longitude_deg = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u /* 25 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &longitude_deg_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double altitude = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &altitude_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double velocity_east = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_east_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double velocity_north = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(49u /* 49 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_north_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double velocity_up = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(57u /* 57 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &velocity_up_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string frame_id = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_frame_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->frame_id().data(), static_cast<int>(this->frame_id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.NavSat.frame_id"));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.NavSat)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.NavSat)
  return false;
#undef DO_
}

void NavSat::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.NavSat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // double latitude_deg = 2;
  if (this->latitude_deg() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->latitude_deg(), output);
  }

  // double longitude_deg = 3;
  if (this->longitude_deg() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->longitude_deg(), output);
  }

  // double altitude = 4;
  if (this->altitude() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->altitude(), output);
  }

  // double velocity_east = 5;
  if (this->velocity_east() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->velocity_east(), output);
  }

  // double velocity_north = 6;
  if (this->velocity_north() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->velocity_north(), output);
  }

  // double velocity_up = 7;
  if (this->velocity_up() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(7, this->velocity_up(), output);
  }

  // string frame_id = 8;
  if (this->frame_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->frame_id().data(), static_cast<int>(this->frame_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.NavSat.frame_id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      8, this->frame_id(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.NavSat)
}

::google::protobuf::uint8* NavSat::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.NavSat)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // double latitude_deg = 2;
  if (this->latitude_deg() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->latitude_deg(), target);
  }

  // double longitude_deg = 3;
  if (this->longitude_deg() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->longitude_deg(), target);
  }

  // double altitude = 4;
  if (this->altitude() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->altitude(), target);
  }

  // double velocity_east = 5;
  if (this->velocity_east() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->velocity_east(), target);
  }

  // double velocity_north = 6;
  if (this->velocity_north() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->velocity_north(), target);
  }

  // double velocity_up = 7;
  if (this->velocity_up() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(7, this->velocity_up(), target);
  }

  // string frame_id = 8;
  if (this->frame_id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->frame_id().data(), static_cast<int>(this->frame_id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.NavSat.frame_id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->frame_id(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.NavSat)
  return target;
}

size_t NavSat::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.NavSat)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string frame_id = 8;
  if (this->frame_id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->frame_id());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // double latitude_deg = 2;
  if (this->latitude_deg() != 0) {
    total_size += 1 + 8;
  }

  // double longitude_deg = 3;
  if (this->longitude_deg() != 0) {
    total_size += 1 + 8;
  }

  // double altitude = 4;
  if (this->altitude() != 0) {
    total_size += 1 + 8;
  }

  // double velocity_east = 5;
  if (this->velocity_east() != 0) {
    total_size += 1 + 8;
  }

  // double velocity_north = 6;
  if (this->velocity_north() != 0) {
    total_size += 1 + 8;
  }

  // double velocity_up = 7;
  if (this->velocity_up() != 0) {
    total_size += 1 + 8;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void NavSat::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.NavSat)
  GOOGLE_DCHECK_NE(&from, this);
  const NavSat* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const NavSat>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.NavSat)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.NavSat)
    MergeFrom(*source);
  }
}

void NavSat::MergeFrom(const NavSat& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.NavSat)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.frame_id().size() > 0) {

    frame_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.frame_id_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.latitude_deg() != 0) {
    set_latitude_deg(from.latitude_deg());
  }
  if (from.longitude_deg() != 0) {
    set_longitude_deg(from.longitude_deg());
  }
  if (from.altitude() != 0) {
    set_altitude(from.altitude());
  }
  if (from.velocity_east() != 0) {
    set_velocity_east(from.velocity_east());
  }
  if (from.velocity_north() != 0) {
    set_velocity_north(from.velocity_north());
  }
  if (from.velocity_up() != 0) {
    set_velocity_up(from.velocity_up());
  }
}

void NavSat::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.NavSat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NavSat::CopyFrom(const NavSat& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.NavSat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NavSat::IsInitialized() const {
  return true;
}

void NavSat::Swap(NavSat* other) {
  if (other == this) return;
  InternalSwap(other);
}
void NavSat::InternalSwap(NavSat* other) {
  using std::swap;
  frame_id_.Swap(&other->frame_id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(latitude_deg_, other->latitude_deg_);
  swap(longitude_deg_, other->longitude_deg_);
  swap(altitude_, other->altitude_);
  swap(velocity_east_, other->velocity_east_);
  swap(velocity_north_, other->velocity_north_);
  swap(velocity_up_, other->velocity_up_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata NavSat::GetMetadata() const {
  protobuf_gz_2fmsgs_2fnavsat_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fnavsat_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::NavSat* Arena::CreateMaybeMessage< ::gz::msgs::NavSat >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::NavSat >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
