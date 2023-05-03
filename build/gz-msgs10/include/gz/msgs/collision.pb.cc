// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gz/msgs/collision.proto

#include "gz/msgs/collision.pb.h"

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
GZ_REGISTER_STATIC_MSG("gz_msgs.Collision", Collision)
// @@protoc_insertion_point(includes)

namespace protobuf_gz_2fmsgs_2fgeometry_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fgeometry_2eproto ::google::protobuf::internal::SCCInfo<13> scc_info_Geometry;
}  // namespace protobuf_gz_2fmsgs_2fgeometry_2eproto
namespace protobuf_gz_2fmsgs_2fheader_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fheader_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Header;
}  // namespace protobuf_gz_2fmsgs_2fheader_2eproto
namespace protobuf_gz_2fmsgs_2fpose_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fpose_2eproto ::google::protobuf::internal::SCCInfo<3> scc_info_Pose;
}  // namespace protobuf_gz_2fmsgs_2fpose_2eproto
namespace protobuf_gz_2fmsgs_2fsurface_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fsurface_2eproto ::google::protobuf::internal::SCCInfo<2> scc_info_Surface;
}  // namespace protobuf_gz_2fmsgs_2fsurface_2eproto
namespace protobuf_gz_2fmsgs_2fvisual_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_gz_2fmsgs_2fvisual_2eproto ::google::protobuf::internal::SCCInfo<7> scc_info_Visual;
}  // namespace protobuf_gz_2fmsgs_2fvisual_2eproto
namespace gz {
namespace msgs {
class CollisionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Collision>
      _instance;
} _Collision_default_instance_;
}  // namespace msgs
}  // namespace gz
namespace protobuf_gz_2fmsgs_2fcollision_2eproto {
static void InitDefaultsCollision() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::gz::msgs::_Collision_default_instance_;
    new (ptr) ::gz::msgs::Collision();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::gz::msgs::Collision::InitAsDefaultInstance();
}

IGNITION_MSGS_VISIBLE ::google::protobuf::internal::SCCInfo<5> scc_info_Collision =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 5, InitDefaultsCollision}, {
      &protobuf_gz_2fmsgs_2fheader_2eproto::scc_info_Header.base,
      &protobuf_gz_2fmsgs_2fpose_2eproto::scc_info_Pose.base,
      &protobuf_gz_2fmsgs_2fgeometry_2eproto::scc_info_Geometry.base,
      &protobuf_gz_2fmsgs_2fsurface_2eproto::scc_info_Surface.base,
      &protobuf_gz_2fmsgs_2fvisual_2eproto::scc_info_Visual.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_Collision.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Collision, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Collision, header_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Collision, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Collision, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Collision, laser_retro_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Collision, max_contacts_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Collision, pose_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Collision, geometry_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Collision, surface_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::gz::msgs::Collision, visual_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::gz::msgs::Collision)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::gz::msgs::_Collision_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "gz/msgs/collision.proto", schemas, file_default_instances, TableStruct::offsets,
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
      "\n\027gz/msgs/collision.proto\022\007gz.msgs\032\022gz/m"
      "sgs/pose.proto\032\026gz/msgs/geometry.proto\032\025"
      "gz/msgs/surface.proto\032\024gz/msgs/visual.pr"
      "oto\032\024gz/msgs/header.proto\"\367\001\n\tCollision\022"
      "\037\n\006header\030\001 \001(\0132\017.gz.msgs.Header\022\n\n\002id\030\002"
      " \001(\r\022\014\n\004name\030\003 \001(\t\022\023\n\013laser_retro\030\004 \001(\001\022"
      "\024\n\014max_contacts\030\005 \001(\001\022\033\n\004pose\030\006 \001(\0132\r.gz"
      ".msgs.Pose\022#\n\010geometry\030\007 \001(\0132\021.gz.msgs.G"
      "eometry\022!\n\007surface\030\010 \001(\0132\020.gz.msgs.Surfa"
      "ce\022\037\n\006visual\030\t \003(\0132\017.gz.msgs.VisualB\036\n\013c"
      "om.gz.msgsB\017CollisionProtosb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 435);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "gz/msgs/collision.proto", &protobuf_RegisterTypes);
  ::protobuf_gz_2fmsgs_2fpose_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fgeometry_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fsurface_2eproto::AddDescriptors();
  ::protobuf_gz_2fmsgs_2fvisual_2eproto::AddDescriptors();
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
}  // namespace protobuf_gz_2fmsgs_2fcollision_2eproto
namespace gz {
namespace msgs {

// ===================================================================

void Collision::InitAsDefaultInstance() {
  ::gz::msgs::_Collision_default_instance_._instance.get_mutable()->header_ = const_cast< ::gz::msgs::Header*>(
      ::gz::msgs::Header::internal_default_instance());
  ::gz::msgs::_Collision_default_instance_._instance.get_mutable()->pose_ = const_cast< ::gz::msgs::Pose*>(
      ::gz::msgs::Pose::internal_default_instance());
  ::gz::msgs::_Collision_default_instance_._instance.get_mutable()->geometry_ = const_cast< ::gz::msgs::Geometry*>(
      ::gz::msgs::Geometry::internal_default_instance());
  ::gz::msgs::_Collision_default_instance_._instance.get_mutable()->surface_ = const_cast< ::gz::msgs::Surface*>(
      ::gz::msgs::Surface::internal_default_instance());
}
void Collision::clear_header() {
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
}
void Collision::clear_pose() {
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
}
void Collision::clear_geometry() {
  if (GetArenaNoVirtual() == NULL && geometry_ != NULL) {
    delete geometry_;
  }
  geometry_ = NULL;
}
void Collision::clear_surface() {
  if (GetArenaNoVirtual() == NULL && surface_ != NULL) {
    delete surface_;
  }
  surface_ = NULL;
}
void Collision::clear_visual() {
  visual_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Collision::kHeaderFieldNumber;
const int Collision::kIdFieldNumber;
const int Collision::kNameFieldNumber;
const int Collision::kLaserRetroFieldNumber;
const int Collision::kMaxContactsFieldNumber;
const int Collision::kPoseFieldNumber;
const int Collision::kGeometryFieldNumber;
const int Collision::kSurfaceFieldNumber;
const int Collision::kVisualFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Collision::Collision()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_gz_2fmsgs_2fcollision_2eproto::scc_info_Collision.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:gz.msgs.Collision)
}
Collision::Collision(const Collision& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      visual_(from.visual_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_header()) {
    header_ = new ::gz::msgs::Header(*from.header_);
  } else {
    header_ = NULL;
  }
  if (from.has_pose()) {
    pose_ = new ::gz::msgs::Pose(*from.pose_);
  } else {
    pose_ = NULL;
  }
  if (from.has_geometry()) {
    geometry_ = new ::gz::msgs::Geometry(*from.geometry_);
  } else {
    geometry_ = NULL;
  }
  if (from.has_surface()) {
    surface_ = new ::gz::msgs::Surface(*from.surface_);
  } else {
    surface_ = NULL;
  }
  ::memcpy(&laser_retro_, &from.laser_retro_,
    static_cast<size_t>(reinterpret_cast<char*>(&id_) -
    reinterpret_cast<char*>(&laser_retro_)) + sizeof(id_));
  // @@protoc_insertion_point(copy_constructor:gz.msgs.Collision)
}

void Collision::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&header_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&header_)) + sizeof(id_));
}

Collision::~Collision() {
  // @@protoc_insertion_point(destructor:gz.msgs.Collision)
  SharedDtor();
}

void Collision::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete header_;
  if (this != internal_default_instance()) delete pose_;
  if (this != internal_default_instance()) delete geometry_;
  if (this != internal_default_instance()) delete surface_;
}

void Collision::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* Collision::descriptor() {
  ::protobuf_gz_2fmsgs_2fcollision_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fcollision_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Collision& Collision::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_gz_2fmsgs_2fcollision_2eproto::scc_info_Collision.base);
  return *internal_default_instance();
}


void Collision::Clear() {
// @@protoc_insertion_point(message_clear_start:gz.msgs.Collision)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  visual_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && header_ != NULL) {
    delete header_;
  }
  header_ = NULL;
  if (GetArenaNoVirtual() == NULL && pose_ != NULL) {
    delete pose_;
  }
  pose_ = NULL;
  if (GetArenaNoVirtual() == NULL && geometry_ != NULL) {
    delete geometry_;
  }
  geometry_ = NULL;
  if (GetArenaNoVirtual() == NULL && surface_ != NULL) {
    delete surface_;
  }
  surface_ = NULL;
  ::memset(&laser_retro_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&id_) -
      reinterpret_cast<char*>(&laser_retro_)) + sizeof(id_));
  _internal_metadata_.Clear();
}

bool Collision::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:gz.msgs.Collision)
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

      // uint32 id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "gz.msgs.Collision.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double laser_retro = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(33u /* 33 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &laser_retro_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // double max_contacts = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(41u /* 41 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_contacts_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Pose pose = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_pose()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Geometry geometry = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_geometry()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .gz.msgs.Surface surface = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_surface()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .gz.msgs.Visual visual = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_visual()));
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
  // @@protoc_insertion_point(parse_success:gz.msgs.Collision)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:gz.msgs.Collision)
  return false;
#undef DO_
}

void Collision::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:gz.msgs.Collision)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_header(), output);
  }

  // uint32 id = 2;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->id(), output);
  }

  // string name = 3;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Collision.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->name(), output);
  }

  // double laser_retro = 4;
  if (this->laser_retro() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->laser_retro(), output);
  }

  // double max_contacts = 5;
  if (this->max_contacts() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->max_contacts(), output);
  }

  // .gz.msgs.Pose pose = 6;
  if (this->has_pose()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->_internal_pose(), output);
  }

  // .gz.msgs.Geometry geometry = 7;
  if (this->has_geometry()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->_internal_geometry(), output);
  }

  // .gz.msgs.Surface surface = 8;
  if (this->has_surface()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->_internal_surface(), output);
  }

  // repeated .gz.msgs.Visual visual = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->visual_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9,
      this->visual(static_cast<int>(i)),
      output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:gz.msgs.Collision)
}

::google::protobuf::uint8* Collision::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:gz.msgs.Collision)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_header(), deterministic, target);
  }

  // uint32 id = 2;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->id(), target);
  }

  // string name = 3;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "gz.msgs.Collision.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->name(), target);
  }

  // double laser_retro = 4;
  if (this->laser_retro() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->laser_retro(), target);
  }

  // double max_contacts = 5;
  if (this->max_contacts() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->max_contacts(), target);
  }

  // .gz.msgs.Pose pose = 6;
  if (this->has_pose()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        6, this->_internal_pose(), deterministic, target);
  }

  // .gz.msgs.Geometry geometry = 7;
  if (this->has_geometry()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        7, this->_internal_geometry(), deterministic, target);
  }

  // .gz.msgs.Surface surface = 8;
  if (this->has_surface()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        8, this->_internal_surface(), deterministic, target);
  }

  // repeated .gz.msgs.Visual visual = 9;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->visual_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        9, this->visual(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:gz.msgs.Collision)
  return target;
}

size_t Collision::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:gz.msgs.Collision)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .gz.msgs.Visual visual = 9;
  {
    unsigned int count = static_cast<unsigned int>(this->visual_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->visual(static_cast<int>(i)));
    }
  }

  // string name = 3;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // .gz.msgs.Header header = 1;
  if (this->has_header()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *header_);
  }

  // .gz.msgs.Pose pose = 6;
  if (this->has_pose()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *pose_);
  }

  // .gz.msgs.Geometry geometry = 7;
  if (this->has_geometry()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *geometry_);
  }

  // .gz.msgs.Surface surface = 8;
  if (this->has_surface()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *surface_);
  }

  // double laser_retro = 4;
  if (this->laser_retro() != 0) {
    total_size += 1 + 8;
  }

  // double max_contacts = 5;
  if (this->max_contacts() != 0) {
    total_size += 1 + 8;
  }

  // uint32 id = 2;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->id());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Collision::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:gz.msgs.Collision)
  GOOGLE_DCHECK_NE(&from, this);
  const Collision* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Collision>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:gz.msgs.Collision)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:gz.msgs.Collision)
    MergeFrom(*source);
  }
}

void Collision::MergeFrom(const Collision& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:gz.msgs.Collision)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  visual_.MergeFrom(from.visual_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.has_header()) {
    mutable_header()->::gz::msgs::Header::MergeFrom(from.header());
  }
  if (from.has_pose()) {
    mutable_pose()->::gz::msgs::Pose::MergeFrom(from.pose());
  }
  if (from.has_geometry()) {
    mutable_geometry()->::gz::msgs::Geometry::MergeFrom(from.geometry());
  }
  if (from.has_surface()) {
    mutable_surface()->::gz::msgs::Surface::MergeFrom(from.surface());
  }
  if (from.laser_retro() != 0) {
    set_laser_retro(from.laser_retro());
  }
  if (from.max_contacts() != 0) {
    set_max_contacts(from.max_contacts());
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
}

void Collision::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:gz.msgs.Collision)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Collision::CopyFrom(const Collision& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:gz.msgs.Collision)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Collision::IsInitialized() const {
  return true;
}

void Collision::Swap(Collision* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Collision::InternalSwap(Collision* other) {
  using std::swap;
  CastToBase(&visual_)->InternalSwap(CastToBase(&other->visual_));
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(header_, other->header_);
  swap(pose_, other->pose_);
  swap(geometry_, other->geometry_);
  swap(surface_, other->surface_);
  swap(laser_retro_, other->laser_retro_);
  swap(max_contacts_, other->max_contacts_);
  swap(id_, other->id_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata Collision::GetMetadata() const {
  protobuf_gz_2fmsgs_2fcollision_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_gz_2fmsgs_2fcollision_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace msgs
}  // namespace gz
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::gz::msgs::Collision* Arena::CreateMaybeMessage< ::gz::msgs::Collision >(Arena* arena) {
  return Arena::CreateInternal< ::gz::msgs::Collision >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
