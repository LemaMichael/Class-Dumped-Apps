//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class AVAsset, AVAssetReader, AVAssetReaderOutput, IESAudioConverter, NSObject, NSThread, VEAudioConfig, VEAudioEffectUnit;
@protocol OS_dispatch_queue;

@interface VEAudioReader : IESMMObject
{
    _Bool _endOfFile;
    _Bool _threadCancle;
    _Bool _needReset;
    _Bool _threadStopped;
    _Bool _useFFmpeg;
    VEAudioConfig *_audioConfig;
    AVAsset *_asset;
    IESAudioConverter *_audioConverter;
    struct AudioBufferList *_decodeBufferList;
    VEAudioEffectUnit *_effectUnit;
    long long _channels;
    double _sampleRate;
    AVAssetReader *_assetReader;
    AVAssetReaderOutput *_audioOutput;
    long long _renderFrames;
    double _offsetTime;
    double _seekToTime;
    NSThread *_decodeThread;
    NSObject<OS_dispatch_queue> *_decodeQueue;
    long long _decoderBufferCapcity;
    AudioBufferQueue_1f978939 _renderQueue;
}

@property(nonatomic) _Bool useFFmpeg; // @synthesize useFFmpeg=_useFFmpeg;
@property(nonatomic) long long decoderBufferCapcity; // @synthesize decoderBufferCapcity=_decoderBufferCapcity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *decodeQueue; // @synthesize decodeQueue=_decodeQueue;
@property(nonatomic) _Bool threadStopped; // @synthesize threadStopped=_threadStopped;
@property(nonatomic) _Bool needReset; // @synthesize needReset=_needReset;
@property(nonatomic) _Bool threadCancle; // @synthesize threadCancle=_threadCancle;
@property(retain, nonatomic) NSThread *decodeThread; // @synthesize decodeThread=_decodeThread;
@property(nonatomic) double seekToTime; // @synthesize seekToTime=_seekToTime;
@property(nonatomic) double offsetTime; // @synthesize offsetTime=_offsetTime;
@property(nonatomic) long long renderFrames; // @synthesize renderFrames=_renderFrames;
@property(retain, nonatomic) AVAssetReaderOutput *audioOutput; // @synthesize audioOutput=_audioOutput;
@property(retain, nonatomic) AVAssetReader *assetReader; // @synthesize assetReader=_assetReader;
@property(nonatomic) double sampleRate; // @synthesize sampleRate=_sampleRate;
@property(nonatomic) long long channels; // @synthesize channels=_channels;
@property(retain, nonatomic) VEAudioEffectUnit *effectUnit; // @synthesize effectUnit=_effectUnit;
@property(nonatomic) _Bool endOfFile; // @synthesize endOfFile=_endOfFile;
@property(nonatomic) struct AudioBufferList *decodeBufferList; // @synthesize decodeBufferList=_decodeBufferList;
@property(nonatomic) AudioBufferQueue_4d119941 renderQueue; // @synthesize renderQueue=_renderQueue;
@property(retain, nonatomic) IESAudioConverter *audioConverter; // @synthesize audioConverter=_audioConverter;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) VEAudioConfig *audioConfig; // @synthesize audioConfig=_audioConfig;
- (void).cxx_destruct;
- (void)dealloc;
- (void)filterProcess:(struct AudioBufferList *)arg1;
- (void)enqueue:(char *)arg1 dataSize:(unsigned int)arg2;
- (void)dequeue:(char *)arg1 dataSize:(unsigned int)arg2;
- (void)resetRenderQueue;
- (void)readDataAndProcess;
- (_Bool)assetReaderRenderData:(struct AudioBufferList *)arg1;
- (void)seekAssetReaderToTime:(double)arg1;
- (void)initAVAssetReader:(id)arg1 audioConfig:(id)arg2;
- (void)resetAVAssetReader;
- (void)threadFunc;
- (void)startDecode;
- (void)stopReader;
- (void)resetReader;
- (void)resetReaderWithTime:(double)arg1;
- (double)currentTime;
- (void)seekToTime:(double)arg1;
- (void)readData:(struct AudioBufferList *)arg1 numberFrames:(unsigned int)arg2 atTime:(double)arg3;
- (id)initWithAVAsset:(id)arg1 audioConfig:(id)arg2;

@end

