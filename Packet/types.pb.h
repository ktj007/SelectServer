// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: types.proto

#ifndef PROTOBUF_types_2eproto__INCLUDED
#define PROTOBUF_types_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace packets {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_types_2eproto();
void protobuf_AssignDesc_types_2eproto();
void protobuf_ShutdownFile_types_2eproto();


enum PacketCode {
  LOGIN_REQ = 0,
  LOGIN_ACK = 1,
  MESSAGE_REQ = 2,
  MESSAGE_NFY = 3,
  PacketCode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  PacketCode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool PacketCode_IsValid(int value);
const PacketCode PacketCode_MIN = LOGIN_REQ;
const PacketCode PacketCode_MAX = MESSAGE_NFY;
const int PacketCode_ARRAYSIZE = PacketCode_MAX + 1;

const ::google::protobuf::EnumDescriptor* PacketCode_descriptor();
inline const ::std::string& PacketCode_Name(PacketCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    PacketCode_descriptor(), value);
}
inline bool PacketCode_Parse(
    const ::std::string& name, PacketCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PacketCode>(
    PacketCode_descriptor(), name, value);
}
enum ResultType {
  RESULT_SUCCESS = 0,
  RESULT_FAILED = 1,
  ResultType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  ResultType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool ResultType_IsValid(int value);
const ResultType ResultType_MIN = RESULT_SUCCESS;
const ResultType ResultType_MAX = RESULT_FAILED;
const int ResultType_ARRAYSIZE = ResultType_MAX + 1;

const ::google::protobuf::EnumDescriptor* ResultType_descriptor();
inline const ::std::string& ResultType_Name(ResultType value) {
  return ::google::protobuf::internal::NameOfEnum(
    ResultType_descriptor(), value);
}
inline bool ResultType_Parse(
    const ::std::string& name, ResultType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ResultType>(
    ResultType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace packets

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::packets::PacketCode> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::packets::PacketCode>() {
  return ::packets::PacketCode_descriptor();
}
template <> struct is_proto_enum< ::packets::ResultType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::packets::ResultType>() {
  return ::packets::ResultType_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_types_2eproto__INCLUDED