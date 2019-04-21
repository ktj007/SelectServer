// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#ifndef PROTOBUF_test_2eproto__INCLUDED
#define PROTOBUF_test_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "types.pb.h"
// @@protoc_insertion_point(includes)

namespace packets {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_test_2eproto();
void protobuf_AssignDesc_test_2eproto();
void protobuf_ShutdownFile_test_2eproto();

class LoginAck;
class LoginReq;
class MessageNfy;
class MessageReq;

// ===================================================================

class LoginReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:packets.LoginReq) */ {
 public:
  LoginReq();
  virtual ~LoginReq();

  LoginReq(const LoginReq& from);

  inline LoginReq& operator=(const LoginReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginReq& default_instance();

  void Swap(LoginReq* other);

  // implements Message ----------------------------------------------

  inline LoginReq* New() const { return New(NULL); }

  LoginReq* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginReq& from);
  void MergeFrom(const LoginReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LoginReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string ID = 1;
  void clear_id();
  static const int kIDFieldNumber = 1;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional string Pass = 2;
  void clear_pass();
  static const int kPassFieldNumber = 2;
  const ::std::string& pass() const;
  void set_pass(const ::std::string& value);
  void set_pass(const char* value);
  void set_pass(const char* value, size_t size);
  ::std::string* mutable_pass();
  ::std::string* release_pass();
  void set_allocated_pass(::std::string* pass);

  // @@protoc_insertion_point(class_scope:packets.LoginReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::google::protobuf::internal::ArenaStringPtr pass_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static LoginReq* default_instance_;
};
// -------------------------------------------------------------------

class LoginAck : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:packets.LoginAck) */ {
 public:
  LoginAck();
  virtual ~LoginAck();

  LoginAck(const LoginAck& from);

  inline LoginAck& operator=(const LoginAck& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LoginAck& default_instance();

  void Swap(LoginAck* other);

  // implements Message ----------------------------------------------

  inline LoginAck* New() const { return New(NULL); }

  LoginAck* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LoginAck& from);
  void MergeFrom(const LoginAck& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(LoginAck* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 UserID = 1;
  void clear_userid();
  static const int kUserIDFieldNumber = 1;
  ::google::protobuf::int64 userid() const;
  void set_userid(::google::protobuf::int64 value);

  // optional .packets.ResultType Result = 2;
  void clear_result();
  static const int kResultFieldNumber = 2;
  ::packets::ResultType result() const;
  void set_result(::packets::ResultType value);

  // @@protoc_insertion_point(class_scope:packets.LoginAck)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 userid_;
  int result_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static LoginAck* default_instance_;
};
// -------------------------------------------------------------------

class MessageReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:packets.MessageReq) */ {
 public:
  MessageReq();
  virtual ~MessageReq();

  MessageReq(const MessageReq& from);

  inline MessageReq& operator=(const MessageReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MessageReq& default_instance();

  void Swap(MessageReq* other);

  // implements Message ----------------------------------------------

  inline MessageReq* New() const { return New(NULL); }

  MessageReq* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageReq& from);
  void MergeFrom(const MessageReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MessageReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 UserID = 1;
  void clear_userid();
  static const int kUserIDFieldNumber = 1;
  ::google::protobuf::int64 userid() const;
  void set_userid(::google::protobuf::int64 value);

  // optional string Message = 2;
  void clear_message();
  static const int kMessageFieldNumber = 2;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:packets.MessageReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 userid_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static MessageReq* default_instance_;
};
// -------------------------------------------------------------------

class MessageNfy : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:packets.MessageNfy) */ {
 public:
  MessageNfy();
  virtual ~MessageNfy();

  MessageNfy(const MessageNfy& from);

  inline MessageNfy& operator=(const MessageNfy& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MessageNfy& default_instance();

  void Swap(MessageNfy* other);

  // implements Message ----------------------------------------------

  inline MessageNfy* New() const { return New(NULL); }

  MessageNfy* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MessageNfy& from);
  void MergeFrom(const MessageNfy& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(MessageNfy* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 UserID = 1;
  void clear_userid();
  static const int kUserIDFieldNumber = 1;
  ::google::protobuf::int64 userid() const;
  void set_userid(::google::protobuf::int64 value);

  // optional string UserName = 2;
  void clear_username();
  static const int kUserNameFieldNumber = 2;
  const ::std::string& username() const;
  void set_username(const ::std::string& value);
  void set_username(const char* value);
  void set_username(const char* value, size_t size);
  ::std::string* mutable_username();
  ::std::string* release_username();
  void set_allocated_username(::std::string* username);

  // optional string Message = 3;
  void clear_message();
  static const int kMessageFieldNumber = 3;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // @@protoc_insertion_point(class_scope:packets.MessageNfy)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 userid_;
  ::google::protobuf::internal::ArenaStringPtr username_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_test_2eproto();
  friend void protobuf_AssignDesc_test_2eproto();
  friend void protobuf_ShutdownFile_test_2eproto();

  void InitAsDefaultInstance();
  static MessageNfy* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LoginReq

// optional string ID = 1;
inline void LoginReq::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LoginReq::id() const {
  // @@protoc_insertion_point(field_get:packets.LoginReq.ID)
  return id_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_id(const ::std::string& value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:packets.LoginReq.ID)
}
inline void LoginReq::set_id(const char* value) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:packets.LoginReq.ID)
}
inline void LoginReq::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:packets.LoginReq.ID)
}
inline ::std::string* LoginReq::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:packets.LoginReq.ID)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LoginReq::release_id() {
  // @@protoc_insertion_point(field_release:packets.LoginReq.ID)
  
  return id_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:packets.LoginReq.ID)
}

// optional string Pass = 2;
inline void LoginReq::clear_pass() {
  pass_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LoginReq::pass() const {
  // @@protoc_insertion_point(field_get:packets.LoginReq.Pass)
  return pass_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_pass(const ::std::string& value) {
  
  pass_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:packets.LoginReq.Pass)
}
inline void LoginReq::set_pass(const char* value) {
  
  pass_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:packets.LoginReq.Pass)
}
inline void LoginReq::set_pass(const char* value, size_t size) {
  
  pass_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:packets.LoginReq.Pass)
}
inline ::std::string* LoginReq::mutable_pass() {
  
  // @@protoc_insertion_point(field_mutable:packets.LoginReq.Pass)
  return pass_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LoginReq::release_pass() {
  // @@protoc_insertion_point(field_release:packets.LoginReq.Pass)
  
  return pass_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LoginReq::set_allocated_pass(::std::string* pass) {
  if (pass != NULL) {
    
  } else {
    
  }
  pass_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pass);
  // @@protoc_insertion_point(field_set_allocated:packets.LoginReq.Pass)
}

// -------------------------------------------------------------------

// LoginAck

// optional int64 UserID = 1;
inline void LoginAck::clear_userid() {
  userid_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 LoginAck::userid() const {
  // @@protoc_insertion_point(field_get:packets.LoginAck.UserID)
  return userid_;
}
inline void LoginAck::set_userid(::google::protobuf::int64 value) {
  
  userid_ = value;
  // @@protoc_insertion_point(field_set:packets.LoginAck.UserID)
}

// optional .packets.ResultType Result = 2;
inline void LoginAck::clear_result() {
  result_ = 0;
}
inline ::packets::ResultType LoginAck::result() const {
  // @@protoc_insertion_point(field_get:packets.LoginAck.Result)
  return static_cast< ::packets::ResultType >(result_);
}
inline void LoginAck::set_result(::packets::ResultType value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:packets.LoginAck.Result)
}

// -------------------------------------------------------------------

// MessageReq

// optional int64 UserID = 1;
inline void MessageReq::clear_userid() {
  userid_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MessageReq::userid() const {
  // @@protoc_insertion_point(field_get:packets.MessageReq.UserID)
  return userid_;
}
inline void MessageReq::set_userid(::google::protobuf::int64 value) {
  
  userid_ = value;
  // @@protoc_insertion_point(field_set:packets.MessageReq.UserID)
}

// optional string Message = 2;
inline void MessageReq::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MessageReq::message() const {
  // @@protoc_insertion_point(field_get:packets.MessageReq.Message)
  return message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageReq::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:packets.MessageReq.Message)
}
inline void MessageReq::set_message(const char* value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:packets.MessageReq.Message)
}
inline void MessageReq::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:packets.MessageReq.Message)
}
inline ::std::string* MessageReq::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:packets.MessageReq.Message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageReq::release_message() {
  // @@protoc_insertion_point(field_release:packets.MessageReq.Message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageReq::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:packets.MessageReq.Message)
}

// -------------------------------------------------------------------

// MessageNfy

// optional int64 UserID = 1;
inline void MessageNfy::clear_userid() {
  userid_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 MessageNfy::userid() const {
  // @@protoc_insertion_point(field_get:packets.MessageNfy.UserID)
  return userid_;
}
inline void MessageNfy::set_userid(::google::protobuf::int64 value) {
  
  userid_ = value;
  // @@protoc_insertion_point(field_set:packets.MessageNfy.UserID)
}

// optional string UserName = 2;
inline void MessageNfy::clear_username() {
  username_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MessageNfy::username() const {
  // @@protoc_insertion_point(field_get:packets.MessageNfy.UserName)
  return username_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageNfy::set_username(const ::std::string& value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:packets.MessageNfy.UserName)
}
inline void MessageNfy::set_username(const char* value) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:packets.MessageNfy.UserName)
}
inline void MessageNfy::set_username(const char* value, size_t size) {
  
  username_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:packets.MessageNfy.UserName)
}
inline ::std::string* MessageNfy::mutable_username() {
  
  // @@protoc_insertion_point(field_mutable:packets.MessageNfy.UserName)
  return username_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageNfy::release_username() {
  // @@protoc_insertion_point(field_release:packets.MessageNfy.UserName)
  
  return username_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageNfy::set_allocated_username(::std::string* username) {
  if (username != NULL) {
    
  } else {
    
  }
  username_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), username);
  // @@protoc_insertion_point(field_set_allocated:packets.MessageNfy.UserName)
}

// optional string Message = 3;
inline void MessageNfy::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& MessageNfy::message() const {
  // @@protoc_insertion_point(field_get:packets.MessageNfy.Message)
  return message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageNfy::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:packets.MessageNfy.Message)
}
inline void MessageNfy::set_message(const char* value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:packets.MessageNfy.Message)
}
inline void MessageNfy::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:packets.MessageNfy.Message)
}
inline ::std::string* MessageNfy::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:packets.MessageNfy.Message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* MessageNfy::release_message() {
  // @@protoc_insertion_point(field_release:packets.MessageNfy.Message)
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void MessageNfy::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:packets.MessageNfy.Message)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace packets

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_test_2eproto__INCLUDED