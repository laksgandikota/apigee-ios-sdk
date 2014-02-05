/* Generated by the protocol buffer compiler.  DO NOT EDIT! */

#ifndef PROTOBUF_C_crash_5freport_2eproto__INCLUDED
#define PROTOBUF_C_crash_5freport_2eproto__INCLUDED

#include "protobuf-c.h"

Apigee_PROTOBUF_C_BEGIN_DECLS


typedef struct _Plcrash__CrashReport Plcrash__CrashReport;
typedef struct _Plcrash__CrashReport__Processor Plcrash__CrashReport__Processor;
typedef struct _Plcrash__CrashReport__SystemInfo Plcrash__CrashReport__SystemInfo;
typedef struct _Plcrash__CrashReport__ApplicationInfo Plcrash__CrashReport__ApplicationInfo;
typedef struct _Plcrash__CrashReport__Symbol Plcrash__CrashReport__Symbol;
typedef struct _Plcrash__CrashReport__Thread Plcrash__CrashReport__Thread;
typedef struct _Plcrash__CrashReport__Thread__StackFrame Plcrash__CrashReport__Thread__StackFrame;
typedef struct _Plcrash__CrashReport__Thread__RegisterValue Plcrash__CrashReport__Thread__RegisterValue;
typedef struct _Plcrash__CrashReport__BinaryImage Plcrash__CrashReport__BinaryImage;
typedef struct _Plcrash__CrashReport__Exception Plcrash__CrashReport__Exception;
typedef struct _Plcrash__CrashReport__Signal Plcrash__CrashReport__Signal;
typedef struct _Plcrash__CrashReport__Signal__MachException Plcrash__CrashReport__Signal__MachException;
typedef struct _Plcrash__CrashReport__ProcessInfo Plcrash__CrashReport__ProcessInfo;
typedef struct _Plcrash__CrashReport__MachineInfo Plcrash__CrashReport__MachineInfo;
typedef struct _Plcrash__CrashReport__ReportInfo Plcrash__CrashReport__ReportInfo;


/* --- enums --- */

typedef enum _Plcrash__CrashReport__Processor__TypeEncoding {
  APIGEE_PLCRASH__CRASH_REPORT__PROCESSOR__TYPE_ENCODING__TYPE_ENCODING_UNKNOWN = 0,
  APIGEE_PLCRASH__CRASH_REPORT__PROCESSOR__TYPE_ENCODING__TYPE_ENCODING_MACH = 1
} Apigee_Plcrash__CrashReport__Processor__TypeEncoding;
typedef enum _Plcrash__CrashReport__SystemInfo__OperatingSystem {
  APIGEE_PLCRASH__CRASH_REPORT__SYSTEM_INFO__OPERATING_SYSTEM__MAC_OS_X = 0,
  APIGEE_PLCRASH__CRASH_REPORT__SYSTEM_INFO__OPERATING_SYSTEM__IPHONE_OS = 1,
  APIGEE_PLCRASH__CRASH_REPORT__SYSTEM_INFO__OPERATING_SYSTEM__IPHONE_SIMULATOR = 2,
  APIGEE_PLCRASH__CRASH_REPORT__SYSTEM_INFO__OPERATING_SYSTEM__OS_UNKNOWN = 3
} Apigee_Plcrash__CrashReport__SystemInfo__OperatingSystem;
typedef enum _Plcrash__Architecture {
  APIGEE_PLCRASH__ARCHITECTURE__X86_32 = 0,
  APIGEE_PLCRASH__ARCHITECTURE__X86_64 = 1,
  APIGEE_PLCRASH__ARCHITECTURE__ARMV6 = 2,
  APIGEE_PLCRASH__ARCHITECTURE__PPC = 3,
  APIGEE_PLCRASH__ARCHITECTURE__PPC64 = 4,
  APIGEE_PLCRASH__ARCHITECTURE__ARMV7 = 5,
  APIGEE_PLCRASH__ARCHITECTURE__ARCHITECTURE_UNKNOWN = 6
} Apigee_Plcrash__Architecture;

/* --- messages --- */

struct  _Plcrash__CrashReport__Processor
{
  Apigee_ProtobufCMessage base;
  Apigee_protobuf_c_boolean has_encoding;
  Apigee_Plcrash__CrashReport__Processor__TypeEncoding encoding;
  uint64_t type;
  uint64_t subtype;
};
#define PLCRASH__CRASH_REPORT__PROCESSOR__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__processor__descriptor) \
    , 0,PLCRASH__CRASH_REPORT__PROCESSOR__TYPE_ENCODING__TYPE_ENCODING_UNKNOWN, 0, 0 }


struct  _Plcrash__CrashReport__SystemInfo
{
  Apigee_ProtobufCMessage base;
  Apigee_protobuf_c_boolean has_operating_system;
  Apigee_Plcrash__CrashReport__SystemInfo__OperatingSystem operating_system;
  char *os_version;
  Apigee_Plcrash__Architecture architecture;
  int64_t timestamp;
  char *os_build;
};
#define PLCRASH__CRASH_REPORT__SYSTEM_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__system_info__descriptor) \
    , 0,PLCRASH__CRASH_REPORT__SYSTEM_INFO__OPERATING_SYSTEM__OS_UNKNOWN, NULL, PLCRASH__ARCHITECTURE__ARCHITECTURE_UNKNOWN, 0, NULL }


struct  _Plcrash__CrashReport__ApplicationInfo
{
  Apigee_ProtobufCMessage base;
  char *identifier;
  char *version;
};
#define PLCRASH__CRASH_REPORT__APPLICATION_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__application_info__descriptor) \
    , NULL, NULL }


struct  _Plcrash__CrashReport__Symbol
{
  Apigee_ProtobufCMessage base;
  char *name;
  uint64_t start_address;
  Apigee_protobuf_c_boolean has_end_address;
  uint64_t end_address;
};
#define PLCRASH__CRASH_REPORT__SYMBOL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&plcrash__crash_report__symbol__descriptor) \
    , NULL, 0, 0,0 }


struct  _Plcrash__CrashReport__Thread__StackFrame
{
  Apigee_ProtobufCMessage base;
  uint64_t pc;
  Plcrash__CrashReport__Symbol *symbol;
};
#define PLCRASH__CRASH_REPORT__THREAD__STACK_FRAME__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__thread__stack_frame__descriptor) \
    , 0, NULL }


struct  _Plcrash__CrashReport__Thread__RegisterValue
{
  Apigee_ProtobufCMessage base;
  char *name;
  uint64_t value;
};
#define PLCRASH__CRASH_REPORT__THREAD__REGISTER_VALUE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__thread__register_value__descriptor) \
    , NULL, 0 }


struct  _Plcrash__CrashReport__Thread
{
  Apigee_ProtobufCMessage base;
  uint32_t thread_number;
  size_t n_frames;
  Plcrash__CrashReport__Thread__StackFrame **frames;
  Apigee_protobuf_c_boolean crashed;
  size_t n_registers;
  Plcrash__CrashReport__Thread__RegisterValue **registers;
};
#define PLCRASH__CRASH_REPORT__THREAD__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__thread__descriptor) \
    , 0, 0,NULL, 0, 0,NULL }


struct  _Plcrash__CrashReport__BinaryImage
{
  Apigee_ProtobufCMessage base;
  uint64_t base_address;
  uint64_t size;
  char *name;
  Apigee_protobuf_c_boolean has_uuid;
  Apigee_ProtobufCBinaryData uuid;
  Plcrash__CrashReport__Processor *code_type;
};
#define PLCRASH__CRASH_REPORT__BINARY_IMAGE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__binary_image__descriptor) \
    , 0, 0, NULL, 0,{0,NULL}, NULL }


struct  _Plcrash__CrashReport__Exception
{
  Apigee_ProtobufCMessage base;
  char *name;
  char *reason;
  size_t n_frames;
  Plcrash__CrashReport__Thread__StackFrame **frames;
};
#define PLCRASH__CRASH_REPORT__EXCEPTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__exception__descriptor) \
    , NULL, NULL, 0,NULL }


struct  _Plcrash__CrashReport__Signal__MachException
{
  Apigee_ProtobufCMessage base;
  uint64_t type;
  size_t n_codes;
  uint64_t *codes;
};
#define PLCRASH__CRASH_REPORT__SIGNAL__MACH_EXCEPTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&plcrash__crash_report__signal__mach_exception__descriptor) \
    , 0, 0,NULL }


struct  _Plcrash__CrashReport__Signal
{
  Apigee_ProtobufCMessage base;
  char *name;
  char *code;
  uint64_t address;
  Plcrash__CrashReport__Signal__MachException *mach_exception;
};
#define PLCRASH__CRASH_REPORT__SIGNAL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__signal__descriptor) \
    , NULL, NULL, 0, NULL }


struct  _Plcrash__CrashReport__ProcessInfo
{
  Apigee_ProtobufCMessage base;
  char *process_name;
  uint32_t process_id;
  char *process_path;
  char *parent_process_name;
  uint32_t parent_process_id;
  Apigee_protobuf_c_boolean native;
  Apigee_protobuf_c_boolean has_start_time;
  uint64_t start_time;
};
#define PLCRASH__CRASH_REPORT__PROCESS_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__process_info__descriptor) \
    , NULL, 0, NULL, NULL, 0, 0, 0,0 }


struct  _Plcrash__CrashReport__MachineInfo
{
  Apigee_ProtobufCMessage base;
  char *model;
  Plcrash__CrashReport__Processor *processor;
  uint32_t processor_count;
  uint32_t logical_processor_count;
};
#define PLCRASH__CRASH_REPORT__MACHINE_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__machine_info__descriptor) \
    , NULL, NULL, 0, 0 }


struct  _Plcrash__CrashReport__ReportInfo
{
  Apigee_ProtobufCMessage base;
  Apigee_protobuf_c_boolean user_requested;
  Apigee_protobuf_c_boolean has_uuid;
  Apigee_ProtobufCBinaryData uuid;
};
#define PLCRASH__CRASH_REPORT__REPORT_INFO__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__report_info__descriptor) \
    , 0, 0,{0,NULL} }


struct  _Plcrash__CrashReport
{
  Apigee_ProtobufCMessage base;
  Plcrash__CrashReport__SystemInfo *system_info;
  Plcrash__CrashReport__ApplicationInfo *application_info;
  size_t n_threads;
  Plcrash__CrashReport__Thread **threads;
  size_t n_binary_images;
  Plcrash__CrashReport__BinaryImage **binary_images;
  Plcrash__CrashReport__Exception *exception;
  Plcrash__CrashReport__Signal *signal;
  Plcrash__CrashReport__ProcessInfo *process_info;
  Plcrash__CrashReport__MachineInfo *machine_info;
  Plcrash__CrashReport__ReportInfo *report_info;
};
#define PLCRASH__CRASH_REPORT__INIT \
 { Apigee_PROTOBUF_C_MESSAGE_INIT (&apigee_plcrash__crash_report__descriptor) \
    , NULL, NULL, 0,NULL, 0,NULL, NULL, NULL, NULL, NULL, NULL }


/* Plcrash__CrashReport methods */
void   apigee_plcrash__crash_report__init
                     (Plcrash__CrashReport         *message);
size_t apigee_plcrash__crash_report__get_packed_size
                     (const Plcrash__CrashReport   *message);
size_t apigee_plcrash__crash_report__pack
                     (const Plcrash__CrashReport   *message,
                      uint8_t             *out);
size_t apigee_plcrash__crash_report__pack_to_buffer
                     (const Plcrash__CrashReport   *message,
                      Apigee_ProtobufCBuffer     *buffer);
Plcrash__CrashReport *
       apigee_plcrash__crash_report__unpack
                     (Apigee_ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   apigee_plcrash__crash_report__free_unpacked
                     (Plcrash__CrashReport *message,
                      Apigee_ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Plcrash__CrashReport__Processor_Closure)
                 (const Plcrash__CrashReport__Processor *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__SystemInfo_Closure)
                 (const Plcrash__CrashReport__SystemInfo *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__ApplicationInfo_Closure)
                 (const Plcrash__CrashReport__ApplicationInfo *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__Symbol_Closure)
                 (const Plcrash__CrashReport__Symbol *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__Thread__StackFrame_Closure)
                 (const Plcrash__CrashReport__Thread__StackFrame *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__Thread__RegisterValue_Closure)
                 (const Plcrash__CrashReport__Thread__RegisterValue *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__Thread_Closure)
                 (const Plcrash__CrashReport__Thread *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__BinaryImage_Closure)
                 (const Plcrash__CrashReport__BinaryImage *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__Exception_Closure)
                 (const Plcrash__CrashReport__Exception *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__Signal__MachException_Closure)
                 (const Plcrash__CrashReport__Signal__MachException *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__Signal_Closure)
                 (const Plcrash__CrashReport__Signal *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__ProcessInfo_Closure)
                 (const Plcrash__CrashReport__ProcessInfo *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__MachineInfo_Closure)
                 (const Plcrash__CrashReport__MachineInfo *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport__ReportInfo_Closure)
                 (const Plcrash__CrashReport__ReportInfo *message,
                  void *closure_data);
typedef void (*Plcrash__CrashReport_Closure)
                 (const Plcrash__CrashReport *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const Apigee_ProtobufCEnumDescriptor    apigee_plcrash__architecture__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__processor__descriptor;
extern const Apigee_ProtobufCEnumDescriptor    apigee_plcrash__crash_report__processor__type_encoding__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__system_info__descriptor;
extern const Apigee_ProtobufCEnumDescriptor    apigee_plcrash__crash_report__system_info__operating_system__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__application_info__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__symbol__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__thread__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__thread__stack_frame__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__thread__register_value__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__binary_image__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__exception__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__signal__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__signal__mach_exception__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__process_info__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__machine_info__descriptor;
extern const Apigee_ProtobufCMessageDescriptor apigee_plcrash__crash_report__report_info__descriptor;

Apigee_PROTOBUF_C_END_DECLS


#endif  /* PROTOBUF_crash_5freport_2eproto__INCLUDED */