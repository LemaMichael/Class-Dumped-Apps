//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GPBMessage, NSData, NSObject<OS_dispatch_semaphore>, NSOutputStream, NSString;

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVFoundationVideoPlayback;

struct AudioBuffer {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
};

struct AudioBufferList {
    unsigned int _field1;
    struct AudioBuffer _field2[1];
};

struct BSG_KSJSONDecodeCallbacks {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
};

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CMVideoSampling {
    void *cvTextureCache;
    void *cvTextureCacheTexture;
    void *cvImageBuffer;
};

struct ChannelGroupI;

struct ChannelPool;

struct CreateToolbarResult {
    id _field1;
    id _field2;
};

struct DSPResampler;

struct DirectAudioInfo;

struct FBSDKLikeControlLayout {
    struct CGSize _field1;
    struct CGRect _field2;
    struct CGRect _field3;
};

struct FMOD_OS_CRITICALSECTION;

struct FMOD_OS_LIBRARY;

struct FMOD_OS_SEMAPHORE;

struct FMOD_OUTPUT_DESCRIPTION_EX {
    char *_field1;
    unsigned int _field2;
    int _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
    CDUnknownFunctionPointerType _field6;
    CDUnknownFunctionPointerType _field7;
    CDUnknownFunctionPointerType _field8;
    CDUnknownFunctionPointerType _field9;
    CDUnknownFunctionPointerType _field10;
    CDUnknownFunctionPointerType _field11;
    CDUnknownFunctionPointerType _field12;
    CDUnknownFunctionPointerType _field13;
    struct LinkedListNode *_field14;
    struct LinkedListNode *_field15;
    void *_field16;
    int _field17;
    int _field18;
    struct FMOD_OS_LIBRARY *_field19;
    unsigned int _field20;
    CDUnknownFunctionPointerType _field21;
    CDUnknownFunctionPointerType _field22;
    CDUnknownFunctionPointerType _field23;
    CDUnknownFunctionPointerType _field24;
    CDUnknownFunctionPointerType _field25;
    CDUnknownFunctionPointerType _field26;
    CDUnknownFunctionPointerType _field27;
    CDUnknownFunctionPointerType _field28;
    CDUnknownFunctionPointerType _field29;
    CDUnknownFunctionPointerType _field30;
    CDUnknownFunctionPointerType _field31;
    CDUnknownFunctionPointerType _field32;
    CDUnknownFunctionPointerType _field33;
    CDUnknownFunctionPointerType _field34;
    CDUnknownFunctionPointerType _field35;
    CDUnknownFunctionPointerType _field36;
    CDUnknownFunctionPointerType _field37;
    CDUnknownFunctionPointerType _field38;
    CDUnknownFunctionPointerType _field39;
    CDUnknownFunctionPointerType _field40;
    CDUnknownFunctionPointerType _field41;
};

struct FMOD_RECORDING_INFO {
    struct LinkedListNode *_field1;
    struct LinkedListNode *_field2;
    void *_field3;
    int _field4;
    int _field5;
    struct {
        unsigned int _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned char _field4[8];
    } _field6;
    _Bool _field7;
    int _field8;
    _Bool _field9;
    int _field10;
    unsigned int _field11;
    unsigned int _field12;
    struct SoundI *_field13;
    int _field14;
    int _field15;
    struct DSPResampler *_field16;
    float *_field17;
    unsigned int _field18;
    void *_field19;
};

struct File;

struct GPBCodedInputStreamState {
    char *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
    unsigned long long currentLimit;
    int lastTag;
    unsigned long long recursionDepth;
};

struct GPBExtensionDescription {
    CDUnion_88782d86 _field1;
    char *_field2;
    char *_field3;
    char *_field4;
    CDUnknownFunctionPointerType _field5;
    int _field6;
    unsigned char _field7;
    unsigned char _field8;
};

struct GPBExtensionRange {
    unsigned int _field1;
    unsigned int _field2;
};

struct GPBMessageFieldDescription {
    char *_field1;
    union {
        char *_field1;
        CDUnknownFunctionPointerType _field2;
        CDUnknownFunctionPointerType _field3;
    } _field2;
    unsigned int _field3;
    int _field4;
    unsigned int _field5;
    unsigned short _field6;
    unsigned char _field7;
};

struct GPBMessage_Storage {
    unsigned int _field1[0];
};

struct GPBOutputBufferState {
    char *bytes;
    unsigned long long size;
    unsigned long long position;
    NSOutputStream *output;
};

struct GULReachabilityApi {
    CDUnknownFunctionPointerType _field1;
    CDUnknownFunctionPointerType _field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
};

struct Global;

struct Il2CppObject;

struct LinkedListNode;

struct MemLabelId {
    int identifier;
};

struct OpaqueAudioComponentInstance;

struct OutputCoreAudio {
    CDUnknownFunctionPointerType *_field1;
    struct LinkedListNode *_field2;
    struct LinkedListNode *_field3;
    void *_field4;
    unsigned int _field5;
    struct SystemI *_field6;
    struct Global *_field7;
    void *_field8;
    CDUnknownFunctionPointerType _field9;
    _Bool _field10;
    struct ChannelPool *_field11;
    _Bool _field12;
    _Bool _field13;
    struct SystemI *_field14;
    int _field15;
    struct ChannelGroupI *_field16;
    int _field17;
    _Bool _field18;
    int _field19;
    int _field20;
    struct FMOD_OS_CRITICALSECTION *_field21;
    struct FMOD_RECORDING_INFO _field22;
    struct FMOD_RECORDING_INFO *_field23;
    struct FMOD_OUTPUT_DESCRIPTION_EX _field24;
    unsigned int _field25;
    unsigned int _field26;
    unsigned int _field27;
    _Bool _field28;
    unsigned int _field29;
    unsigned int _field30;
    struct OpaqueAudioComponentInstance *_field31;
    _Bool _field32;
    struct Thread _field33;
    char *_field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    _Bool _field40;
    struct OpaqueAudioComponentInstance *_field41;
    char *_field42;
    char *_field43;
    struct AudioBufferList _field44;
    int _field45;
    int _field46;
    int _field47;
    unsigned int _field48;
    _Bool _field49;
    void *_field50;
};

struct PLCrashHostInfoVersion {
    unsigned long long major;
    unsigned long long minor;
    unsigned long long revision;
};

struct PixelBufferBlitter {
    struct TextureCache *_field1;
    struct Texture2D *_field2;
};

struct PlatformSemaphore {
    NSObject<OS_dispatch_semaphore> *m_Semaphore;
};

struct PlayerPriv {
    id _field1;
    struct AVFoundationVideoPlayback *_field2;
    _Bool _field3;
    struct PixelBufferBlitter _field4;
};

struct RenderSurfaceBase;

struct RenderingSurfaceParams {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
};

struct ScriptingArrayPtr {
    struct Il2CppObject *_field1;
};

struct ScriptingObjectPtr {
    struct Il2CppObject *_field1;
};

struct Semaphore {
    struct PlatformSemaphore m_Semaphore;
};

struct SimpleLock {
    int m_Count;
    struct Semaphore m_Semaphore;
};

struct SoundI;

struct SystemI;

struct Texture2D;

struct TextureCache;

struct Thread {
    CDUnknownFunctionPointerType *_field1;
    _Bool _field2;
    char _field3[256];
    void *_field4;
    _Bool _field5;
    void *_field6;
    void *_field7;
    struct FMOD_OS_SEMAPHORE *_field8;
    struct FMOD_OS_SEMAPHORE *_field9;
    CDUnknownFunctionPointerType _field10;
    struct SystemI *_field11;
    int _field12;
};

struct UIEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct UnityDisplaySurfaceBase {
    struct RenderSurfaceBase *_field1;
    struct RenderSurfaceBase *_field2;
    struct RenderSurfaceBase *_field3;
    struct RenderSurfaceBase *_field4;
    void *_field5;
    void *_field6;
    void *_field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    int _field17;
    int _field18;
};

struct UnityDisplaySurfaceGLES {
    struct RenderSurfaceBase *_field1;
    struct RenderSurfaceBase *_field2;
    struct RenderSurfaceBase *_field3;
    struct RenderSurfaceBase *_field4;
    void *_field5;
    void *_field6;
    void *_field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    int _field17;
    int _field18;
    id _field19;
    id _field20;
    unsigned int _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    struct RenderSurfaceBase *_field27;
    unsigned int _field28;
    unsigned int _field29;
    unsigned int _field30;
};

struct UnityDisplaySurfaceMTL {
    struct RenderSurfaceBase *_field1;
    struct RenderSurfaceBase *_field2;
    struct RenderSurfaceBase *_field3;
    struct RenderSurfaceBase *_field4;
    void *_field5;
    void *_field6;
    void *_field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    int _field12;
    int _field13;
    int _field14;
    int _field15;
    int _field16;
    int _field17;
    int _field18;
    id _field19;
    id _field20;
    id _field21;
    id _field22;
    id _field23;
    id _field24[3];
    int _field25;
    int _field26;
    int _field27;
    int _field28[3];
    id _field29;
    id _field30;
    id _field31;
    id _field32;
    id _field33;
    unsigned int _field34;
    unsigned int _field35;
    int _field36;
};

struct UnityFrameStats {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned long long _field9;
    int _field10;
    int _field11;
    unsigned long long _field12;
    int _field13;
    int _field14;
    int _field15;
    unsigned long long _field16;
    int _field17;
    int _field18;
    int _field19;
    int _field20;
    int _field21;
    int _field22;
    int _field23;
    int _field24;
};

struct UnityPLCrashReporterCallbacks {
    unsigned short _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
};

struct VideoDataFileProvider {
    CDUnknownFunctionPointerType *_field1;
    struct File *_field2;
    basic_string_638e7f4e _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PLCrashReportDecoder {
    struct _Plcrash__CrashReport *_field1;
};

struct _Plcrash__CrashReport {
    struct _ProtobufCMessage _field1;
    struct _Plcrash__CrashReport__SystemInfo *_field2;
    struct _Plcrash__CrashReport__ApplicationInfo *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread **_field5;
    unsigned long long _field6;
    struct _Plcrash__CrashReport__BinaryImage **_field7;
    struct _Plcrash__CrashReport__Exception *_field8;
    struct _Plcrash__CrashReport__Signal *_field9;
    struct _Plcrash__CrashReport__ProcessInfo *_field10;
    struct _Plcrash__CrashReport__MachineInfo *_field11;
    struct _Plcrash__CrashReport__ReportInfo *_field12;
};

struct _Plcrash__CrashReport__ApplicationInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
};

struct _Plcrash__CrashReport__BinaryImage;

struct _Plcrash__CrashReport__Exception {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Thread__StackFrame **_field5;
};

struct _Plcrash__CrashReport__MachineInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    struct _Plcrash__CrashReport__Processor *_field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct _Plcrash__CrashReport__ProcessInfo {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned int _field3;
    char *_field4;
    char *_field5;
    unsigned int _field6;
    int _field7;
    int _field8;
    unsigned long long _field9;
};

struct _Plcrash__CrashReport__Processor {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    unsigned long long _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__ReportInfo;

struct _Plcrash__CrashReport__Signal {
    struct _ProtobufCMessage _field1;
    char *_field2;
    char *_field3;
    unsigned long long _field4;
    struct _Plcrash__CrashReport__Signal__MachException *_field5;
};

struct _Plcrash__CrashReport__Signal__MachException {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long *_field4;
};

struct _Plcrash__CrashReport__Symbol {
    struct _ProtobufCMessage _field1;
    char *_field2;
    unsigned long long _field3;
    int _field4;
    unsigned long long _field5;
};

struct _Plcrash__CrashReport__SystemInfo {
    struct _ProtobufCMessage _field1;
    int _field2;
    int _field3;
    char *_field4;
    int _field5;
    long long _field6;
    char *_field7;
};

struct _Plcrash__CrashReport__Thread;

struct _Plcrash__CrashReport__Thread__StackFrame {
    struct _ProtobufCMessage _field1;
    unsigned long long _field2;
    struct _Plcrash__CrashReport__Symbol *_field3;
};

struct _ProtobufCMessage {
    struct _ProtobufCMessageDescriptor *_field1;
    unsigned int _field2;
    struct _ProtobufCMessageUnknownField *_field3;
};

struct _ProtobufCMessageDescriptor;

struct _ProtobufCMessageUnknownField;

struct basic_string<char, core::StringStorageDefault<char>> {
    char *_field1;
    union {
        unsigned long long _field1;
        char _field2[16];
    } _field2;
    unsigned long long _field3;
    struct MemLabelId _field4;
};

struct dynamic_array<DirectAudioInfo, 4> {
    struct DirectAudioInfo *m_data;
    struct MemLabelId m_label;
    unsigned long long m_size;
    unsigned long long m_capacity;
};

struct dynamic_array<const opaqueMTAudioProcessingTap *, 8> {
    struct opaqueMTAudioProcessingTap **m_data;
    struct MemLabelId m_label;
    unsigned long long m_size;
    unsigned long long m_capacity;
};

struct in_addr {
    unsigned int _field1;
};

struct opaqueMTAudioProcessingTap;

struct plcrash_exception_server_context {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDUnknownFunctionPointerType _field5;
    void *_field6;
    struct _opaque_pthread_mutex_t {
        long long _field1;
        char _field2[56];
    } _field7;
    struct _opaque_pthread_cond_t {
        long long _field1;
        char _field2[40];
    } _field8;
    unsigned int _field9;
    _Bool _field10;
};

struct plcrash_mach_exception_port_set {
    unsigned int count;
    unsigned int masks[14];
    unsigned int ports[14];
    int behaviors[14];
    int flavors[14];
};

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct timeval {
    long long tv_sec;
    int tv_usec;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    unsigned long long _field4;
} CDStruct_33dcf794;

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
} CDStruct_14f26992;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    void **_field1;
    int *_field2;
    char *_field3;
} CDStruct_e1a27b1c;

typedef struct {
    char *_field1;
    char *_field2;
    long long _field3;
    long long _field4;
    long long _field5;
    _Bool _field6;
    _Bool _field7;
} CDStruct_4c437055;

typedef struct {
    void *bytes;
    unsigned long long bufferSize;
    unsigned long long bufferPos;
} CDStruct_9d607ac6;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
} CDStruct_8727d297;

typedef struct {
    long long value;
    int timescale;
    unsigned int flags;
    long long epoch;
} CDStruct_1b6d18a9;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

typedef struct {
    CDStruct_14f26992 _field1;
    CDStruct_14f26992 _field2;
} CDStruct_4c83c94d;

// Template types
typedef struct basic_string<char, core::StringStorageDefault<char>> {
    char *_field1;
    union {
        unsigned long long _field1;
        char _field2[16];
    } _field2;
    unsigned long long _field3;
    struct MemLabelId _field4;
} basic_string_638e7f4e;

#pragma mark Typedef'd Unions

typedef union {
    _Bool valueBool;
    int valueInt32;
    long long valueInt64;
    unsigned int valueUInt32;
    unsigned long long valueUInt64;
    float valueFloat;
    double valueDouble;
    NSData *valueData;
    NSString *valueString;
    GPBMessage *valueMessage;
    int valueEnum;
} CDUnion_88782d86;

