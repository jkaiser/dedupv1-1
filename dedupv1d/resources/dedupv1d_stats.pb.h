// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dedupv1d_stats.proto

#ifndef PROTOBUF_dedupv1d_5fstats_2eproto__INCLUDED
#define PROTOBUF_dedupv1d_5fstats_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_dedupv1d_5fstats_2eproto();
void protobuf_AssignDesc_dedupv1d_5fstats_2eproto();
void protobuf_ShutdownFile_dedupv1d_5fstats_2eproto();

class CommandHandlerStatsData;
class CommandHandlerOpcodeStatsData;
class CommandHandlerTaskMgmtStatsData;
class CommandHandlerErrorStatsData;
class Dedupv1dStatsData;

// ===================================================================

class CommandHandlerStatsData : public ::google::protobuf::Message {
 public:
  CommandHandlerStatsData();
  virtual ~CommandHandlerStatsData();
  
  CommandHandlerStatsData(const CommandHandlerStatsData& from);
  
  inline CommandHandlerStatsData& operator=(const CommandHandlerStatsData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CommandHandlerStatsData& default_instance();
  
  void Swap(CommandHandlerStatsData* other);
  
  // implements Message ----------------------------------------------
  
  CommandHandlerStatsData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CommandHandlerStatsData& from);
  void MergeFrom(const CommandHandlerStatsData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional uint64 scsi_command_count = 1;
  inline bool has_scsi_command_count() const;
  inline void clear_scsi_command_count();
  static const int kScsiCommandCountFieldNumber = 1;
  inline ::google::protobuf::uint64 scsi_command_count() const;
  inline void set_scsi_command_count(::google::protobuf::uint64 value);
  
  // repeated .CommandHandlerOpcodeStatsData opcode_stats = 2;
  inline int opcode_stats_size() const;
  inline void clear_opcode_stats();
  static const int kOpcodeStatsFieldNumber = 2;
  inline const ::CommandHandlerOpcodeStatsData& opcode_stats(int index) const;
  inline ::CommandHandlerOpcodeStatsData* mutable_opcode_stats(int index);
  inline ::CommandHandlerOpcodeStatsData* add_opcode_stats();
  inline const ::google::protobuf::RepeatedPtrField< ::CommandHandlerOpcodeStatsData >&
      opcode_stats() const;
  inline ::google::protobuf::RepeatedPtrField< ::CommandHandlerOpcodeStatsData >*
      mutable_opcode_stats();
  
  // repeated .CommandHandlerTaskMgmtStatsData task_mgmt_stats = 3;
  inline int task_mgmt_stats_size() const;
  inline void clear_task_mgmt_stats();
  static const int kTaskMgmtStatsFieldNumber = 3;
  inline const ::CommandHandlerTaskMgmtStatsData& task_mgmt_stats(int index) const;
  inline ::CommandHandlerTaskMgmtStatsData* mutable_task_mgmt_stats(int index);
  inline ::CommandHandlerTaskMgmtStatsData* add_task_mgmt_stats();
  inline const ::google::protobuf::RepeatedPtrField< ::CommandHandlerTaskMgmtStatsData >&
      task_mgmt_stats() const;
  inline ::google::protobuf::RepeatedPtrField< ::CommandHandlerTaskMgmtStatsData >*
      mutable_task_mgmt_stats();
  
  // repeated .CommandHandlerErrorStatsData error_stats = 4;
  inline int error_stats_size() const;
  inline void clear_error_stats();
  static const int kErrorStatsFieldNumber = 4;
  inline const ::CommandHandlerErrorStatsData& error_stats(int index) const;
  inline ::CommandHandlerErrorStatsData* mutable_error_stats(int index);
  inline ::CommandHandlerErrorStatsData* add_error_stats();
  inline const ::google::protobuf::RepeatedPtrField< ::CommandHandlerErrorStatsData >&
      error_stats() const;
  inline ::google::protobuf::RepeatedPtrField< ::CommandHandlerErrorStatsData >*
      mutable_error_stats();
  
  // optional uint64 sector_read_count = 5;
  inline bool has_sector_read_count() const;
  inline void clear_sector_read_count();
  static const int kSectorReadCountFieldNumber = 5;
  inline ::google::protobuf::uint64 sector_read_count() const;
  inline void set_sector_read_count(::google::protobuf::uint64 value);
  
  // optional uint64 sector_write_count = 6;
  inline bool has_sector_write_count() const;
  inline void clear_sector_write_count();
  static const int kSectorWriteCountFieldNumber = 6;
  inline ::google::protobuf::uint64 sector_write_count() const;
  inline void set_sector_write_count(::google::protobuf::uint64 value);
  
  // optional uint64 retry_count = 7;
  inline bool has_retry_count() const;
  inline void clear_retry_count();
  static const int kRetryCountFieldNumber = 7;
  inline ::google::protobuf::uint64 retry_count() const;
  inline void set_retry_count(::google::protobuf::uint64 value);
  
  // @@protoc_insertion_point(class_scope:CommandHandlerStatsData)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::uint64 scsi_command_count_;
  ::google::protobuf::RepeatedPtrField< ::CommandHandlerOpcodeStatsData > opcode_stats_;
  ::google::protobuf::RepeatedPtrField< ::CommandHandlerTaskMgmtStatsData > task_mgmt_stats_;
  ::google::protobuf::RepeatedPtrField< ::CommandHandlerErrorStatsData > error_stats_;
  ::google::protobuf::uint64 sector_read_count_;
  ::google::protobuf::uint64 sector_write_count_;
  ::google::protobuf::uint64 retry_count_;
  friend void  protobuf_AddDesc_dedupv1d_5fstats_2eproto();
  friend void protobuf_AssignDesc_dedupv1d_5fstats_2eproto();
  friend void protobuf_ShutdownFile_dedupv1d_5fstats_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static CommandHandlerStatsData* default_instance_;
};
// -------------------------------------------------------------------

class CommandHandlerOpcodeStatsData : public ::google::protobuf::Message {
 public:
  CommandHandlerOpcodeStatsData();
  virtual ~CommandHandlerOpcodeStatsData();
  
  CommandHandlerOpcodeStatsData(const CommandHandlerOpcodeStatsData& from);
  
  inline CommandHandlerOpcodeStatsData& operator=(const CommandHandlerOpcodeStatsData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CommandHandlerOpcodeStatsData& default_instance();
  
  void Swap(CommandHandlerOpcodeStatsData* other);
  
  // implements Message ----------------------------------------------
  
  CommandHandlerOpcodeStatsData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CommandHandlerOpcodeStatsData& from);
  void MergeFrom(const CommandHandlerOpcodeStatsData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 opcode = 1;
  inline bool has_opcode() const;
  inline void clear_opcode();
  static const int kOpcodeFieldNumber = 1;
  inline ::google::protobuf::int32 opcode() const;
  inline void set_opcode(::google::protobuf::int32 value);
  
  // optional uint64 count = 2;
  inline bool has_count() const;
  inline void clear_count();
  static const int kCountFieldNumber = 2;
  inline ::google::protobuf::uint64 count() const;
  inline void set_count(::google::protobuf::uint64 value);
  
  // @@protoc_insertion_point(class_scope:CommandHandlerOpcodeStatsData)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 opcode_;
  ::google::protobuf::uint64 count_;
  friend void  protobuf_AddDesc_dedupv1d_5fstats_2eproto();
  friend void protobuf_AssignDesc_dedupv1d_5fstats_2eproto();
  friend void protobuf_ShutdownFile_dedupv1d_5fstats_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static CommandHandlerOpcodeStatsData* default_instance_;
};
// -------------------------------------------------------------------

class CommandHandlerTaskMgmtStatsData : public ::google::protobuf::Message {
 public:
  CommandHandlerTaskMgmtStatsData();
  virtual ~CommandHandlerTaskMgmtStatsData();
  
  CommandHandlerTaskMgmtStatsData(const CommandHandlerTaskMgmtStatsData& from);
  
  inline CommandHandlerTaskMgmtStatsData& operator=(const CommandHandlerTaskMgmtStatsData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CommandHandlerTaskMgmtStatsData& default_instance();
  
  void Swap(CommandHandlerTaskMgmtStatsData* other);
  
  // implements Message ----------------------------------------------
  
  CommandHandlerTaskMgmtStatsData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CommandHandlerTaskMgmtStatsData& from);
  void MergeFrom(const CommandHandlerTaskMgmtStatsData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 tmcode = 1;
  inline bool has_tmcode() const;
  inline void clear_tmcode();
  static const int kTmcodeFieldNumber = 1;
  inline ::google::protobuf::int32 tmcode() const;
  inline void set_tmcode(::google::protobuf::int32 value);
  
  // optional uint64 count = 2;
  inline bool has_count() const;
  inline void clear_count();
  static const int kCountFieldNumber = 2;
  inline ::google::protobuf::uint64 count() const;
  inline void set_count(::google::protobuf::uint64 value);
  
  // @@protoc_insertion_point(class_scope:CommandHandlerTaskMgmtStatsData)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 tmcode_;
  ::google::protobuf::uint64 count_;
  friend void  protobuf_AddDesc_dedupv1d_5fstats_2eproto();
  friend void protobuf_AssignDesc_dedupv1d_5fstats_2eproto();
  friend void protobuf_ShutdownFile_dedupv1d_5fstats_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static CommandHandlerTaskMgmtStatsData* default_instance_;
};
// -------------------------------------------------------------------

class CommandHandlerErrorStatsData : public ::google::protobuf::Message {
 public:
  CommandHandlerErrorStatsData();
  virtual ~CommandHandlerErrorStatsData();
  
  CommandHandlerErrorStatsData(const CommandHandlerErrorStatsData& from);
  
  inline CommandHandlerErrorStatsData& operator=(const CommandHandlerErrorStatsData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CommandHandlerErrorStatsData& default_instance();
  
  void Swap(CommandHandlerErrorStatsData* other);
  
  // implements Message ----------------------------------------------
  
  CommandHandlerErrorStatsData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CommandHandlerErrorStatsData& from);
  void MergeFrom(const CommandHandlerErrorStatsData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional int32 opcode = 1;
  inline bool has_opcode() const;
  inline void clear_opcode();
  static const int kOpcodeFieldNumber = 1;
  inline ::google::protobuf::int32 opcode() const;
  inline void set_opcode(::google::protobuf::int32 value);
  
  // optional uint64 count = 2;
  inline bool has_count() const;
  inline void clear_count();
  static const int kCountFieldNumber = 2;
  inline ::google::protobuf::uint64 count() const;
  inline void set_count(::google::protobuf::uint64 value);
  
  // @@protoc_insertion_point(class_scope:CommandHandlerErrorStatsData)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::google::protobuf::int32 opcode_;
  ::google::protobuf::uint64 count_;
  friend void  protobuf_AddDesc_dedupv1d_5fstats_2eproto();
  friend void protobuf_AssignDesc_dedupv1d_5fstats_2eproto();
  friend void protobuf_ShutdownFile_dedupv1d_5fstats_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static CommandHandlerErrorStatsData* default_instance_;
};
// -------------------------------------------------------------------

class Dedupv1dStatsData : public ::google::protobuf::Message {
 public:
  Dedupv1dStatsData();
  virtual ~Dedupv1dStatsData();
  
  Dedupv1dStatsData(const Dedupv1dStatsData& from);
  
  inline Dedupv1dStatsData& operator=(const Dedupv1dStatsData& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const Dedupv1dStatsData& default_instance();
  
  void Swap(Dedupv1dStatsData* other);
  
  // implements Message ----------------------------------------------
  
  Dedupv1dStatsData* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Dedupv1dStatsData& from);
  void MergeFrom(const Dedupv1dStatsData& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional double service_time = 1;
  inline bool has_service_time() const;
  inline void clear_service_time();
  static const int kServiceTimeFieldNumber = 1;
  inline double service_time() const;
  inline void set_service_time(double value);
  
  // @@protoc_insertion_point(class_scope:Dedupv1dStatsData)
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  double service_time_;
  friend void  protobuf_AddDesc_dedupv1d_5fstats_2eproto();
  friend void protobuf_AssignDesc_dedupv1d_5fstats_2eproto();
  friend void protobuf_ShutdownFile_dedupv1d_5fstats_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static Dedupv1dStatsData* default_instance_;
};
// ===================================================================


// ===================================================================

// CommandHandlerStatsData

// optional uint64 scsi_command_count = 1;
inline bool CommandHandlerStatsData::has_scsi_command_count() const {
  return _has_bit(0);
}
inline void CommandHandlerStatsData::clear_scsi_command_count() {
  scsi_command_count_ = GOOGLE_ULONGLONG(0);
  _clear_bit(0);
}
inline ::google::protobuf::uint64 CommandHandlerStatsData::scsi_command_count() const {
  return scsi_command_count_;
}
inline void CommandHandlerStatsData::set_scsi_command_count(::google::protobuf::uint64 value) {
  _set_bit(0);
  scsi_command_count_ = value;
}

// repeated .CommandHandlerOpcodeStatsData opcode_stats = 2;
inline int CommandHandlerStatsData::opcode_stats_size() const {
  return opcode_stats_.size();
}
inline void CommandHandlerStatsData::clear_opcode_stats() {
  opcode_stats_.Clear();
}
inline const ::CommandHandlerOpcodeStatsData& CommandHandlerStatsData::opcode_stats(int index) const {
  return opcode_stats_.Get(index);
}
inline ::CommandHandlerOpcodeStatsData* CommandHandlerStatsData::mutable_opcode_stats(int index) {
  return opcode_stats_.Mutable(index);
}
inline ::CommandHandlerOpcodeStatsData* CommandHandlerStatsData::add_opcode_stats() {
  return opcode_stats_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::CommandHandlerOpcodeStatsData >&
CommandHandlerStatsData::opcode_stats() const {
  return opcode_stats_;
}
inline ::google::protobuf::RepeatedPtrField< ::CommandHandlerOpcodeStatsData >*
CommandHandlerStatsData::mutable_opcode_stats() {
  return &opcode_stats_;
}

// repeated .CommandHandlerTaskMgmtStatsData task_mgmt_stats = 3;
inline int CommandHandlerStatsData::task_mgmt_stats_size() const {
  return task_mgmt_stats_.size();
}
inline void CommandHandlerStatsData::clear_task_mgmt_stats() {
  task_mgmt_stats_.Clear();
}
inline const ::CommandHandlerTaskMgmtStatsData& CommandHandlerStatsData::task_mgmt_stats(int index) const {
  return task_mgmt_stats_.Get(index);
}
inline ::CommandHandlerTaskMgmtStatsData* CommandHandlerStatsData::mutable_task_mgmt_stats(int index) {
  return task_mgmt_stats_.Mutable(index);
}
inline ::CommandHandlerTaskMgmtStatsData* CommandHandlerStatsData::add_task_mgmt_stats() {
  return task_mgmt_stats_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::CommandHandlerTaskMgmtStatsData >&
CommandHandlerStatsData::task_mgmt_stats() const {
  return task_mgmt_stats_;
}
inline ::google::protobuf::RepeatedPtrField< ::CommandHandlerTaskMgmtStatsData >*
CommandHandlerStatsData::mutable_task_mgmt_stats() {
  return &task_mgmt_stats_;
}

// repeated .CommandHandlerErrorStatsData error_stats = 4;
inline int CommandHandlerStatsData::error_stats_size() const {
  return error_stats_.size();
}
inline void CommandHandlerStatsData::clear_error_stats() {
  error_stats_.Clear();
}
inline const ::CommandHandlerErrorStatsData& CommandHandlerStatsData::error_stats(int index) const {
  return error_stats_.Get(index);
}
inline ::CommandHandlerErrorStatsData* CommandHandlerStatsData::mutable_error_stats(int index) {
  return error_stats_.Mutable(index);
}
inline ::CommandHandlerErrorStatsData* CommandHandlerStatsData::add_error_stats() {
  return error_stats_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::CommandHandlerErrorStatsData >&
CommandHandlerStatsData::error_stats() const {
  return error_stats_;
}
inline ::google::protobuf::RepeatedPtrField< ::CommandHandlerErrorStatsData >*
CommandHandlerStatsData::mutable_error_stats() {
  return &error_stats_;
}

// optional uint64 sector_read_count = 5;
inline bool CommandHandlerStatsData::has_sector_read_count() const {
  return _has_bit(4);
}
inline void CommandHandlerStatsData::clear_sector_read_count() {
  sector_read_count_ = GOOGLE_ULONGLONG(0);
  _clear_bit(4);
}
inline ::google::protobuf::uint64 CommandHandlerStatsData::sector_read_count() const {
  return sector_read_count_;
}
inline void CommandHandlerStatsData::set_sector_read_count(::google::protobuf::uint64 value) {
  _set_bit(4);
  sector_read_count_ = value;
}

// optional uint64 sector_write_count = 6;
inline bool CommandHandlerStatsData::has_sector_write_count() const {
  return _has_bit(5);
}
inline void CommandHandlerStatsData::clear_sector_write_count() {
  sector_write_count_ = GOOGLE_ULONGLONG(0);
  _clear_bit(5);
}
inline ::google::protobuf::uint64 CommandHandlerStatsData::sector_write_count() const {
  return sector_write_count_;
}
inline void CommandHandlerStatsData::set_sector_write_count(::google::protobuf::uint64 value) {
  _set_bit(5);
  sector_write_count_ = value;
}

// optional uint64 retry_count = 7;
inline bool CommandHandlerStatsData::has_retry_count() const {
  return _has_bit(6);
}
inline void CommandHandlerStatsData::clear_retry_count() {
  retry_count_ = GOOGLE_ULONGLONG(0);
  _clear_bit(6);
}
inline ::google::protobuf::uint64 CommandHandlerStatsData::retry_count() const {
  return retry_count_;
}
inline void CommandHandlerStatsData::set_retry_count(::google::protobuf::uint64 value) {
  _set_bit(6);
  retry_count_ = value;
}

// -------------------------------------------------------------------

// CommandHandlerOpcodeStatsData

// optional int32 opcode = 1;
inline bool CommandHandlerOpcodeStatsData::has_opcode() const {
  return _has_bit(0);
}
inline void CommandHandlerOpcodeStatsData::clear_opcode() {
  opcode_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 CommandHandlerOpcodeStatsData::opcode() const {
  return opcode_;
}
inline void CommandHandlerOpcodeStatsData::set_opcode(::google::protobuf::int32 value) {
  _set_bit(0);
  opcode_ = value;
}

// optional uint64 count = 2;
inline bool CommandHandlerOpcodeStatsData::has_count() const {
  return _has_bit(1);
}
inline void CommandHandlerOpcodeStatsData::clear_count() {
  count_ = GOOGLE_ULONGLONG(0);
  _clear_bit(1);
}
inline ::google::protobuf::uint64 CommandHandlerOpcodeStatsData::count() const {
  return count_;
}
inline void CommandHandlerOpcodeStatsData::set_count(::google::protobuf::uint64 value) {
  _set_bit(1);
  count_ = value;
}

// -------------------------------------------------------------------

// CommandHandlerTaskMgmtStatsData

// optional int32 tmcode = 1;
inline bool CommandHandlerTaskMgmtStatsData::has_tmcode() const {
  return _has_bit(0);
}
inline void CommandHandlerTaskMgmtStatsData::clear_tmcode() {
  tmcode_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 CommandHandlerTaskMgmtStatsData::tmcode() const {
  return tmcode_;
}
inline void CommandHandlerTaskMgmtStatsData::set_tmcode(::google::protobuf::int32 value) {
  _set_bit(0);
  tmcode_ = value;
}

// optional uint64 count = 2;
inline bool CommandHandlerTaskMgmtStatsData::has_count() const {
  return _has_bit(1);
}
inline void CommandHandlerTaskMgmtStatsData::clear_count() {
  count_ = GOOGLE_ULONGLONG(0);
  _clear_bit(1);
}
inline ::google::protobuf::uint64 CommandHandlerTaskMgmtStatsData::count() const {
  return count_;
}
inline void CommandHandlerTaskMgmtStatsData::set_count(::google::protobuf::uint64 value) {
  _set_bit(1);
  count_ = value;
}

// -------------------------------------------------------------------

// CommandHandlerErrorStatsData

// optional int32 opcode = 1;
inline bool CommandHandlerErrorStatsData::has_opcode() const {
  return _has_bit(0);
}
inline void CommandHandlerErrorStatsData::clear_opcode() {
  opcode_ = 0;
  _clear_bit(0);
}
inline ::google::protobuf::int32 CommandHandlerErrorStatsData::opcode() const {
  return opcode_;
}
inline void CommandHandlerErrorStatsData::set_opcode(::google::protobuf::int32 value) {
  _set_bit(0);
  opcode_ = value;
}

// optional uint64 count = 2;
inline bool CommandHandlerErrorStatsData::has_count() const {
  return _has_bit(1);
}
inline void CommandHandlerErrorStatsData::clear_count() {
  count_ = GOOGLE_ULONGLONG(0);
  _clear_bit(1);
}
inline ::google::protobuf::uint64 CommandHandlerErrorStatsData::count() const {
  return count_;
}
inline void CommandHandlerErrorStatsData::set_count(::google::protobuf::uint64 value) {
  _set_bit(1);
  count_ = value;
}

// -------------------------------------------------------------------

// Dedupv1dStatsData

// optional double service_time = 1;
inline bool Dedupv1dStatsData::has_service_time() const {
  return _has_bit(0);
}
inline void Dedupv1dStatsData::clear_service_time() {
  service_time_ = 0;
  _clear_bit(0);
}
inline double Dedupv1dStatsData::service_time() const {
  return service_time_;
}
inline void Dedupv1dStatsData::set_service_time(double value) {
  _set_bit(0);
  service_time_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dedupv1d_5fstats_2eproto__INCLUDED