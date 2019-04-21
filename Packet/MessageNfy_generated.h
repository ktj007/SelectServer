// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_MESSAGENFY_PACKETS_H_
#define FLATBUFFERS_GENERATED_MESSAGENFY_PACKETS_H_

#include "flatbuffers/flatbuffers.h"

namespace packets {

struct Messagenfy;

struct Messagenfy FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_USERID = 4,
    VT_USERNAME = 6,
    VT_MESSAGE = 8
  };
  int32_t userId() const {
    return GetField<int32_t>(VT_USERID, 0);
  }
  const flatbuffers::String *userName() const {
    return GetPointer<const flatbuffers::String *>(VT_USERNAME);
  }
  const flatbuffers::String *message() const {
    return GetPointer<const flatbuffers::String *>(VT_MESSAGE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_USERID) &&
           VerifyOffset(verifier, VT_USERNAME) &&
           verifier.VerifyString(userName()) &&
           VerifyOffset(verifier, VT_MESSAGE) &&
           verifier.VerifyString(message()) &&
           verifier.EndTable();
  }
};

struct MessagenfyBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_userId(int32_t userId) {
    fbb_.AddElement<int32_t>(Messagenfy::VT_USERID, userId, 0);
  }
  void add_userName(flatbuffers::Offset<flatbuffers::String> userName) {
    fbb_.AddOffset(Messagenfy::VT_USERNAME, userName);
  }
  void add_message(flatbuffers::Offset<flatbuffers::String> message) {
    fbb_.AddOffset(Messagenfy::VT_MESSAGE, message);
  }
  explicit MessagenfyBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  MessagenfyBuilder &operator=(const MessagenfyBuilder &);
  flatbuffers::Offset<Messagenfy> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Messagenfy>(end);
    return o;
  }
};

inline flatbuffers::Offset<Messagenfy> CreateMessagenfy(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t userId = 0,
    flatbuffers::Offset<flatbuffers::String> userName = 0,
    flatbuffers::Offset<flatbuffers::String> message = 0) {
  MessagenfyBuilder builder_(_fbb);
  builder_.add_message(message);
  builder_.add_userName(userName);
  builder_.add_userId(userId);
  return builder_.Finish();
}

inline flatbuffers::Offset<Messagenfy> CreateMessagenfyDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t userId = 0,
    const char *userName = nullptr,
    const char *message = nullptr) {
  return packets::CreateMessagenfy(
      _fbb,
      userId,
      userName ? _fbb.CreateString(userName) : 0,
      message ? _fbb.CreateString(message) : 0);
}

inline const packets::Messagenfy *GetMessagenfy(const void *buf) {
  return flatbuffers::GetRoot<packets::Messagenfy>(buf);
}

inline const packets::Messagenfy *GetSizePrefixedMessagenfy(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<packets::Messagenfy>(buf);
}

inline bool VerifyMessagenfyBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<packets::Messagenfy>(nullptr);
}

inline bool VerifySizePrefixedMessagenfyBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<packets::Messagenfy>(nullptr);
}

inline void FinishMessagenfyBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<packets::Messagenfy> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedMessagenfyBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<packets::Messagenfy> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace packets

#endif  // FLATBUFFERS_GENERATED_MESSAGENFY_PACKETS_H_