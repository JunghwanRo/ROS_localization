// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/video_record.proto

#include "gz/msgs/video_record.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.VideoRecord", VideoRecord)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace gz {
namespace msgs {
class VideoRecordDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VideoRecord>
      _instance;
} _VideoRecord_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto {
static void InitDefaultsVideoRecord() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_VideoRecord_default_instance_;
    new (ptr) ::gz::msgs::VideoRecord();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::VideoRecord::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<1> scc_info_VideoRecord =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsVideoRecord}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_VideoRecord.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::VideoRecord, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::VideoRecord, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::VideoRecord, start_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::VideoRecord, stop_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::VideoRecord, format_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::VideoRecord, save_filename_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::VideoRecord)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_VideoRecord_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/video_record.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\032gz/msgs/video_record.proto\022\007gz.msgs\032\024g"
      "z/msgs/header.proto\"r\n\013VideoRecord\022\037\n\006he"
      "ader\030\001 \001(\0132\017.gz.msgs.Header\022\r\n\005start\030\002 \001"
      "(\010\022\014\n\004stop\030\003 \001(\010\022\016\n\006format\030\004 \001(\t\022\025\n\rsave"
      "_filename\030\005 \001(\tB \n\013com.gz.msgsB\021VideoRec"
      "ordProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 217);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/video_record.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void VideoRecord::InitAsDefaultInstance() {
  ::gz::msgs::_VideoRecord_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
}
void VideoRecord::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VideoRecord::kHeaderFieldNumber;
const int VideoRecord::kStartFieldNumber;
const int VideoRecord::kStopFieldNumber;
const int VideoRecord::kFormatFieldNumber;
const int VideoRecord::kSaveFilenameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VideoRecord::VideoRecord()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto::scc_info_VideoRecord.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.VideoRecord)
}
VideoRecord::VideoRecord(const VideoRecord& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  format_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.format().size() > 0) {
    format_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.format_);
  }
  save_filename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.save_filename().size() > 0) {
    save_filename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.save_filename_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  ::memcpy(&start_, &from.start_,
    static_cast<size_t>(reinterpret_cast<char*>(&stop_) -
    reinterpret_cast<char*>(&start_)) + sizeof(stop_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.VideoRecord)
}

void VideoRecord::SharedCtor() {
  format_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  save_filename_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&stop_) -
      reinterpret_cast<char*>(&header_)) + sizeof(stop_));
}

VideoRecord::~VideoRecord() {
  // @@protoc_insertion_point(destructor:gz.msgs.VideoRecord)
  SharedDtor();
}

void VideoRecord::SharedDtor() {
  format_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  save_filename_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
}

void VideoRecord::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* VideoRecord::descriptor() {
  ::protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VideoRecord& VideoRecord::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto::scc_info_VideoRecord.base);
  return *internal_default_instance();
}


void VideoRecord::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.VideoRecord)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  format_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  save_filename_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  ::memset(&start_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&stop_) -
      reinterpret_cast<char*>(&start_)) + sizeof(stop_));
  _internal_metadata_.Clear();
}

bool VideoRecord::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.VideoRecord)
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

      // bool start = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &start_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool stop = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &stop_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string format = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_format()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->format().data(), static_cast<int>(this->format().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.VideoRecord.format"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string save_filename = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_save_filename()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->save_filename().data(), static_cast<int>(this->save_filename().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.VideoRecord.save_filename"));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.VideoRecord)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.VideoRecord)
  return false;
#undef DO_
}

void VideoRecord::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.VideoRecord)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // bool start = 2;
  if (this->start() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->start(), output);
  }

  // bool stop = 3;
  if (this->stop() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->stop(), output);
  }

  // string format = 4;
  if (this->format().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->format().data(), static_cast<int>(this->format().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.VideoRecord.format");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->format(), output);
  }

  // string save_filename = 5;
  if (this->save_filename().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->save_filename().data(), static_cast<int>(this->save_filename().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.VideoRecord.save_filename");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->save_filename(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.VideoRecord)
}

::google::protobuf::uint8* VideoRecord::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.VideoRecord)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // bool start = 2;
  if (this->start() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->start(), target);
  }

  // bool stop = 3;
  if (this->stop() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->stop(), target);
  }

  // string format = 4;
  if (this->format().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->format().data(), static_cast<int>(this->format().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.VideoRecord.format");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->format(), target);
  }

  // string save_filename = 5;
  if (this->save_filename().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->save_filename().data(), static_cast<int>(this->save_filename().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.VideoRecord.save_filename");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->save_filename(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.VideoRecord)
  return target;
}

size_t VideoRecord::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.VideoRecord)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string format = 4;
  if (this->format().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->format());
  }

  // string save_filename = 5;
  if (this->save_filename().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->save_filename());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // bool start = 2;
  if (this->start() != 0) {
    total_size += 1 + 1;
  }

  // bool stop = 3;
  if (this->stop() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void VideoRecord::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.VideoRecord)
  GOOGLE_DCHECK_NE(&from, this);
  const VideoRecord* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VideoRecord>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.VideoRecord)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.VideoRecord)
    MergeFrom(*source);
  }
}

void VideoRecord::MergeFrom(const VideoRecord& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.VideoRecord)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.format().size() > 0) {

    format_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.format_);
  }
  if (from.save_filename().size() > 0) {

    save_filename_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.save_filename_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.start() != 0) {
    set_start(from.start());
  }
  if (from.stop() != 0) {
    set_stop(from.stop());
  }
}

void VideoRecord::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.VideoRecord)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VideoRecord::CopyFrom(const VideoRecord& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.VideoRecord)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VideoRecord::IsInitialized() const {
  return true;
}

void VideoRecord::Swap(VideoRecord* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VideoRecord::InternalSwap(VideoRecord* other) {
  using std::swap;
  format_.Swap(&other->format_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  save_filename_.Swap(&other->save_filename_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(start_, other->start_);
  swap(stop_, other->stop_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata VideoRecord::GetMetadata() const {
  protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fvideo_5frecord_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::VideoRecord* Arena::CreateMaybeMessage< ::gz::msgs::VideoRecord >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::VideoRecord >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)