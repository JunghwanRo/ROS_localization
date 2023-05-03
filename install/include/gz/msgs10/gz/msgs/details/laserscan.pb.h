// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/laserscan.proto

#ifndef PROTOBUF_INCLUDED_gz_2fmsgs_2flaserscan_2eproto
#define PROTOBUF_INCLUDED_gz_2fmsgs_2flaserscan_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "gz/msgs/pose.pb.h"
#include "gz/msgs/header.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2flaserscan_2eproto IGNITION_MSGS_VISIBLE

namespace protobuf_gz_2fmsgs_2flaserscan_2eproto {
// Internal implementation detail -- do not use these members.
struct IGNITION_MSGS_VISIBLE TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void IGNITION_MSGS_VISIBLE AddDescriptors();
}  // namespace protobuf_gz_2fmsgs_2flaserscan_2eproto
namespace gz {
namespace msgs {
class LaserScan;
class LaserScanDefaultTypeInternal;
IGNITION_MSGS_VISIBLE extern LaserScanDefaultTypeInternal _LaserScan_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> IGNITION_MSGS_VISIBLE ::gz::msgs::LaserScan* Arena::CreateMaybeMessage<::gz::msgs::LaserScan>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace gz {
namespace msgs {

// ===================================================================

class IGNITION_MSGS_VISIBLE LaserScan : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:gz.msgs.LaserScan) */ {
 public:
  LaserScan();
  virtual ~LaserScan();

  LaserScan(const LaserScan& from);

  inline LaserScan& operator=(const LaserScan& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LaserScan(LaserScan&& from) noexcept
    : LaserScan() {
    *this = ::std::move(from);
  }

  inline LaserScan& operator=(LaserScan&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const LaserScan& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LaserScan* internal_default_instance() {
    return reinterpret_cast<const LaserScan*>(
               &_LaserScan_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(LaserScan* other);
  friend void swap(LaserScan& a, LaserScan& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LaserScan* New() const final {
    return CreateMaybeMessage<LaserScan>(NULL);
  }

  LaserScan* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LaserScan>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LaserScan& from);
  void MergeFrom(const LaserScan& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LaserScan* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated double ranges = 14;
  int ranges_size() const;
  void clear_ranges();
  static const int kRangesFieldNumber = 14;
  double ranges(int index) const;
  void set_ranges(int index, double value);
  void add_ranges(double value);
  const ::google::protobuf::RepeatedField< double >&
      ranges() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_ranges();

  // repeated double intensities = 15;
  int intensities_size() const;
  void clear_intensities();
  static const int kIntensitiesFieldNumber = 15;
  double intensities(int index) const;
  void set_intensities(int index, double value);
  void add_intensities(double value);
  const ::google::protobuf::RepeatedField< double >&
      intensities() const;
  ::google::protobuf::RepeatedField< double >*
      mutable_intensities();

  // string frame = 2;
  void clear_frame();
  static const int kFrameFieldNumber = 2;
  const ::std::string& frame() const;
  void set_frame(const ::std::string& value);
  #if LANG_CXX11
  void set_frame(::std::string&& value);
  #endif
  void set_frame(const char* value);
  void set_frame(const char* value, size_t size);
  ::std::string* mutable_frame();
  ::std::string* release_frame();
  void set_allocated_frame(::std::string* frame);

  // .gz.msgs.Header header = 1;
  bool has_header() const;
  void clear_header();
  static const int kHeaderFieldNumber = 1;
  private:
  const ::gz::msgs::Header& _internal_header() const;
  public:
  const ::gz::msgs::Header& header() const;
  ::gz::msgs::Header* release_header();
  ::gz::msgs::Header* mutable_header();
  void set_allocated_header(::gz::msgs::Header* header);

  // .gz.msgs.Pose world_pose = 3;
  bool has_world_pose() const;
  void clear_world_pose();
  static const int kWorldPoseFieldNumber = 3;
  private:
  const ::gz::msgs::Pose& _internal_world_pose() const;
  public:
  const ::gz::msgs::Pose& world_pose() const;
  ::gz::msgs::Pose* release_world_pose();
  ::gz::msgs::Pose* mutable_world_pose();
  void set_allocated_world_pose(::gz::msgs::Pose* world_pose);

  // double angle_min = 4;
  void clear_angle_min();
  static const int kAngleMinFieldNumber = 4;
  double angle_min() const;
  void set_angle_min(double value);

  // double angle_max = 5;
  void clear_angle_max();
  static const int kAngleMaxFieldNumber = 5;
  double angle_max() const;
  void set_angle_max(double value);

  // double angle_step = 6;
  void clear_angle_step();
  static const int kAngleStepFieldNumber = 6;
  double angle_step() const;
  void set_angle_step(double value);

  // double range_min = 7;
  void clear_range_min();
  static const int kRangeMinFieldNumber = 7;
  double range_min() const;
  void set_range_min(double value);

  // double range_max = 8;
  void clear_range_max();
  static const int kRangeMaxFieldNumber = 8;
  double range_max() const;
  void set_range_max(double value);

  // double vertical_angle_min = 10;
  void clear_vertical_angle_min();
  static const int kVerticalAngleMinFieldNumber = 10;
  double vertical_angle_min() const;
  void set_vertical_angle_min(double value);

  // double vertical_angle_max = 11;
  void clear_vertical_angle_max();
  static const int kVerticalAngleMaxFieldNumber = 11;
  double vertical_angle_max() const;
  void set_vertical_angle_max(double value);

  // uint32 count = 9;
  void clear_count();
  static const int kCountFieldNumber = 9;
  ::google::protobuf::uint32 count() const;
  void set_count(::google::protobuf::uint32 value);

  // uint32 vertical_count = 13;
  void clear_vertical_count();
  static const int kVerticalCountFieldNumber = 13;
  ::google::protobuf::uint32 vertical_count() const;
  void set_vertical_count(::google::protobuf::uint32 value);

  // double vertical_angle_step = 12;
  void clear_vertical_angle_step();
  static const int kVerticalAngleStepFieldNumber = 12;
  double vertical_angle_step() const;
  void set_vertical_angle_step(double value);

  // @@protoc_insertion_point(class_scope:gz.msgs.LaserScan)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< double > ranges_;
  mutable int _ranges_cached_byte_size_;
  ::google::protobuf::RepeatedField< double > intensities_;
  mutable int _intensities_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr frame_;
  ::gz::msgs::Header* header_;
  ::gz::msgs::Pose* world_pose_;
  double angle_min_;
  double angle_max_;
  double angle_step_;
  double range_min_;
  double range_max_;
  double vertical_angle_min_;
  double vertical_angle_max_;
  ::google::protobuf::uint32 count_;
  ::google::protobuf::uint32 vertical_count_;
  double vertical_angle_step_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_gz_2fmsgs_2flaserscan_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LaserScan

// .gz.msgs.Header header = 1;
inline bool LaserScan::has_header() const {
  return this != internal_default_instance() && header_ != NULL;
}
inline const ::gz::msgs::Header& LaserScan::_internal_header() const {
  return *header_;
}
inline const ::gz::msgs::Header& LaserScan::header() const {
  const ::gz::msgs::Header* p = header_;
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.header)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Header*>(
      &::gz::msgs::_Header_default_instance_);
}
inline ::gz::msgs::Header* LaserScan::release_header() {
  // @@protoc_insertion_point(field_release:gz.msgs.LaserScan.header)
  
  ::gz::msgs::Header* temp = header_;
  header_ = NULL;
  return temp;
}
inline ::gz::msgs::Header* LaserScan::mutable_header() {
  
  if (header_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.LaserScan.header)
  return header_;
}
inline void LaserScan::set_allocated_header(::gz::msgs::Header* header) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(header_);
  }
  if (header) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      header = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LaserScan.header)
}

// string frame = 2;
inline void LaserScan::clear_frame() {
  frame_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LaserScan::frame() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.frame)
  return frame_.GetNoArena();
}
inline void LaserScan::set_frame(const ::std::string& value) {
  
  frame_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.frame)
}
#if LANG_CXX11
inline void LaserScan::set_frame(::std::string&& value) {
  
  frame_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:gz.msgs.LaserScan.frame)
}
#endif
inline void LaserScan::set_frame(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  frame_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:gz.msgs.LaserScan.frame)
}
inline void LaserScan::set_frame(const char* value, size_t size) {
  
  frame_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:gz.msgs.LaserScan.frame)
}
inline ::std::string* LaserScan::mutable_frame() {
  
  // @@protoc_insertion_point(field_mutable:gz.msgs.LaserScan.frame)
  return frame_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LaserScan::release_frame() {
  // @@protoc_insertion_point(field_release:gz.msgs.LaserScan.frame)
  
  return frame_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LaserScan::set_allocated_frame(::std::string* frame) {
  if (frame != NULL) {
    
  } else {
    
  }
  frame_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), frame);
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LaserScan.frame)
}

// .gz.msgs.Pose world_pose = 3;
inline bool LaserScan::has_world_pose() const {
  return this != internal_default_instance() && world_pose_ != NULL;
}
inline const ::gz::msgs::Pose& LaserScan::_internal_world_pose() const {
  return *world_pose_;
}
inline const ::gz::msgs::Pose& LaserScan::world_pose() const {
  const ::gz::msgs::Pose* p = world_pose_;
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.world_pose)
  return p != NULL ? *p : *reinterpret_cast<const ::gz::msgs::Pose*>(
      &::gz::msgs::_Pose_default_instance_);
}
inline ::gz::msgs::Pose* LaserScan::release_world_pose() {
  // @@protoc_insertion_point(field_release:gz.msgs.LaserScan.world_pose)
  
  ::gz::msgs::Pose* temp = world_pose_;
  world_pose_ = NULL;
  return temp;
}
inline ::gz::msgs::Pose* LaserScan::mutable_world_pose() {
  
  if (world_pose_ == NULL) {
    auto* p = CreateMaybeMessage<::gz::msgs::Pose>(GetArenaNoVirtual());
    world_pose_ = p;
  }
  // @@protoc_insertion_point(field_mutable:gz.msgs.LaserScan.world_pose)
  return world_pose_;
}
inline void LaserScan::set_allocated_world_pose(::gz::msgs::Pose* world_pose) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(world_pose_);
  }
  if (world_pose) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      world_pose = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, world_pose, submessage_arena);
    }
    
  } else {
    
  }
  world_pose_ = world_pose;
  // @@protoc_insertion_point(field_set_allocated:gz.msgs.LaserScan.world_pose)
}

// double angle_min = 4;
inline void LaserScan::clear_angle_min() {
  angle_min_ = 0;
}
inline double LaserScan::angle_min() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.angle_min)
  return angle_min_;
}
inline void LaserScan::set_angle_min(double value) {
  
  angle_min_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.angle_min)
}

// double angle_max = 5;
inline void LaserScan::clear_angle_max() {
  angle_max_ = 0;
}
inline double LaserScan::angle_max() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.angle_max)
  return angle_max_;
}
inline void LaserScan::set_angle_max(double value) {
  
  angle_max_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.angle_max)
}

// double angle_step = 6;
inline void LaserScan::clear_angle_step() {
  angle_step_ = 0;
}
inline double LaserScan::angle_step() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.angle_step)
  return angle_step_;
}
inline void LaserScan::set_angle_step(double value) {
  
  angle_step_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.angle_step)
}

// double range_min = 7;
inline void LaserScan::clear_range_min() {
  range_min_ = 0;
}
inline double LaserScan::range_min() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.range_min)
  return range_min_;
}
inline void LaserScan::set_range_min(double value) {
  
  range_min_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.range_min)
}

// double range_max = 8;
inline void LaserScan::clear_range_max() {
  range_max_ = 0;
}
inline double LaserScan::range_max() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.range_max)
  return range_max_;
}
inline void LaserScan::set_range_max(double value) {
  
  range_max_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.range_max)
}

// uint32 count = 9;
inline void LaserScan::clear_count() {
  count_ = 0u;
}
inline ::google::protobuf::uint32 LaserScan::count() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.count)
  return count_;
}
inline void LaserScan::set_count(::google::protobuf::uint32 value) {
  
  count_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.count)
}

// double vertical_angle_min = 10;
inline void LaserScan::clear_vertical_angle_min() {
  vertical_angle_min_ = 0;
}
inline double LaserScan::vertical_angle_min() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.vertical_angle_min)
  return vertical_angle_min_;
}
inline void LaserScan::set_vertical_angle_min(double value) {
  
  vertical_angle_min_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.vertical_angle_min)
}

// double vertical_angle_max = 11;
inline void LaserScan::clear_vertical_angle_max() {
  vertical_angle_max_ = 0;
}
inline double LaserScan::vertical_angle_max() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.vertical_angle_max)
  return vertical_angle_max_;
}
inline void LaserScan::set_vertical_angle_max(double value) {
  
  vertical_angle_max_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.vertical_angle_max)
}

// double vertical_angle_step = 12;
inline void LaserScan::clear_vertical_angle_step() {
  vertical_angle_step_ = 0;
}
inline double LaserScan::vertical_angle_step() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.vertical_angle_step)
  return vertical_angle_step_;
}
inline void LaserScan::set_vertical_angle_step(double value) {
  
  vertical_angle_step_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.vertical_angle_step)
}

// uint32 vertical_count = 13;
inline void LaserScan::clear_vertical_count() {
  vertical_count_ = 0u;
}
inline ::google::protobuf::uint32 LaserScan::vertical_count() const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.vertical_count)
  return vertical_count_;
}
inline void LaserScan::set_vertical_count(::google::protobuf::uint32 value) {
  
  vertical_count_ = value;
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.vertical_count)
}

// repeated double ranges = 14;
inline int LaserScan::ranges_size() const {
  return ranges_.size();
}
inline void LaserScan::clear_ranges() {
  ranges_.Clear();
}
inline double LaserScan::ranges(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.ranges)
  return ranges_.Get(index);
}
inline void LaserScan::set_ranges(int index, double value) {
  ranges_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.ranges)
}
inline void LaserScan::add_ranges(double value) {
  ranges_.Add(value);
  // @@protoc_insertion_point(field_add:gz.msgs.LaserScan.ranges)
}
inline const ::google::protobuf::RepeatedField< double >&
LaserScan::ranges() const {
  // @@protoc_insertion_point(field_list:gz.msgs.LaserScan.ranges)
  return ranges_;
}
inline ::google::protobuf::RepeatedField< double >*
LaserScan::mutable_ranges() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.LaserScan.ranges)
  return &ranges_;
}

// repeated double intensities = 15;
inline int LaserScan::intensities_size() const {
  return intensities_.size();
}
inline void LaserScan::clear_intensities() {
  intensities_.Clear();
}
inline double LaserScan::intensities(int index) const {
  // @@protoc_insertion_point(field_get:gz.msgs.LaserScan.intensities)
  return intensities_.Get(index);
}
inline void LaserScan::set_intensities(int index, double value) {
  intensities_.Set(index, value);
  // @@protoc_insertion_point(field_set:gz.msgs.LaserScan.intensities)
}
inline void LaserScan::add_intensities(double value) {
  intensities_.Add(value);
  // @@protoc_insertion_point(field_add:gz.msgs.LaserScan.intensities)
}
inline const ::google::protobuf::RepeatedField< double >&
LaserScan::intensities() const {
  // @@protoc_insertion_point(field_list:gz.msgs.LaserScan.intensities)
  return intensities_;
}
inline ::google::protobuf::RepeatedField< double >*
LaserScan::mutable_intensities() {
  // @@protoc_insertion_point(field_mutable_list:gz.msgs.LaserScan.intensities)
  return &intensities_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace msgs
}  // namespace gz

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_gz_2fmsgs_2flaserscan_2eproto
