// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_LLRX_H_
#define FLATBUFFERS_GENERATED_LLRX_H_

#include "flatbuffers/flatbuffers.h"

struct Llrx;

struct Entity;

struct Llrx FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_AMOUNT = 4,
    VT_NAME = 6,
    VT_ENTITIES = 8
  };
  int32_t amount() const {
    return GetField<int32_t>(VT_AMOUNT, 0);
  }
  const flatbuffers::String *name() const {
    return GetPointer<const flatbuffers::String *>(VT_NAME);
  }
  const flatbuffers::Vector<flatbuffers::Offset<Entity>> *entities() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<Entity>> *>(VT_ENTITIES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_AMOUNT) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.Verify(name()) &&
           VerifyOffset(verifier, VT_ENTITIES) &&
           verifier.Verify(entities()) &&
           verifier.VerifyVectorOfTables(entities()) &&
           verifier.EndTable();
  }
};

struct LlrxBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_amount(int32_t amount) {
    fbb_.AddElement<int32_t>(Llrx::VT_AMOUNT, amount, 0);
  }
  void add_name(flatbuffers::Offset<flatbuffers::String> name) {
    fbb_.AddOffset(Llrx::VT_NAME, name);
  }
  void add_entities(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Entity>>> entities) {
    fbb_.AddOffset(Llrx::VT_ENTITIES, entities);
  }
  explicit LlrxBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  LlrxBuilder &operator=(const LlrxBuilder &);
  flatbuffers::Offset<Llrx> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Llrx>(end);
    return o;
  }
};

inline flatbuffers::Offset<Llrx> CreateLlrx(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t amount = 0,
    flatbuffers::Offset<flatbuffers::String> name = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<Entity>>> entities = 0) {
  LlrxBuilder builder_(_fbb);
  builder_.add_entities(entities);
  builder_.add_name(name);
  builder_.add_amount(amount);
  return builder_.Finish();
}

inline flatbuffers::Offset<Llrx> CreateLlrxDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t amount = 0,
    const char *name = nullptr,
    const std::vector<flatbuffers::Offset<Entity>> *entities = nullptr) {
  return CreateLlrx(
      _fbb,
      amount,
      name ? _fbb.CreateString(name) : 0,
      entities ? _fbb.CreateVector<flatbuffers::Offset<Entity>>(*entities) : 0);
}

struct Entity FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_NOTE = 4,
    VT_TIME = 6,
    VT_DELTA = 8
  };
  int16_t note() const {
    return GetField<int16_t>(VT_NOTE, 0);
  }
  float time() const {
    return GetField<float>(VT_TIME, 0.0f);
  }
  float delta() const {
    return GetField<float>(VT_DELTA, 0.0f);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int16_t>(verifier, VT_NOTE) &&
           VerifyField<float>(verifier, VT_TIME) &&
           VerifyField<float>(verifier, VT_DELTA) &&
           verifier.EndTable();
  }
};

struct EntityBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_note(int16_t note) {
    fbb_.AddElement<int16_t>(Entity::VT_NOTE, note, 0);
  }
  void add_time(float time) {
    fbb_.AddElement<float>(Entity::VT_TIME, time, 0.0f);
  }
  void add_delta(float delta) {
    fbb_.AddElement<float>(Entity::VT_DELTA, delta, 0.0f);
  }
  explicit EntityBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  EntityBuilder &operator=(const EntityBuilder &);
  flatbuffers::Offset<Entity> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<Entity>(end);
    return o;
  }
};

inline flatbuffers::Offset<Entity> CreateEntity(
    flatbuffers::FlatBufferBuilder &_fbb,
    int16_t note = 0,
    float time = 0.0f,
    float delta = 0.0f) {
  EntityBuilder builder_(_fbb);
  builder_.add_delta(delta);
  builder_.add_time(time);
  builder_.add_note(note);
  return builder_.Finish();
}

inline const Llrx *GetLlrx(const void *buf) {
  return flatbuffers::GetRoot<Llrx>(buf);
}

inline bool VerifyLlrxBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<Llrx>(nullptr);
}

inline void FinishLlrxBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<Llrx> root) {
  fbb.Finish(root);
}

#endif  // FLATBUFFERS_GENERATED_LLRX_H_