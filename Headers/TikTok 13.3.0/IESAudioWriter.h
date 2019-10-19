//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetWriter, AVAssetWriterInput, IESAudioConfig, NSURL;
@protocol OS_dispatch_queue;

@interface IESAudioWriter : NSObject
{
    _Bool _writing;
    _Bool _stopped;
    _Bool _useHEAAC;
    double _duration;
    NSURL *_recordURL;
    AVAssetWriter *_writer;
    AVAssetWriterInput *_audioInput;
    long long _createCount;
    long long _channels;
    long long _bitRate;
    NSObject<OS_dispatch_queue> *_writerQueue;
    IESAudioConfig *_config;
    struct AudioStreamBasicDescription _asbd;
}

@property(retain, nonatomic) IESAudioConfig *config; // @synthesize config=_config;
@property(nonatomic) struct AudioStreamBasicDescription asbd; // @synthesize asbd=_asbd;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *writerQueue; // @synthesize writerQueue=_writerQueue;
@property(nonatomic) _Bool useHEAAC; // @synthesize useHEAAC=_useHEAAC;
@property(nonatomic) long long bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) long long channels; // @synthesize channels=_channels;
@property(nonatomic) long long createCount; // @synthesize createCount=_createCount;
@property(nonatomic) _Bool stopped; // @synthesize stopped=_stopped;
@property(nonatomic) _Bool writing; // @synthesize writing=_writing;
@property(retain, nonatomic) AVAssetWriterInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVAssetWriter *writer; // @synthesize writer=_writer;
@property(retain, nonatomic) NSURL *recordURL; // @synthesize recordURL=_recordURL;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)validAudioWriter;
- (_Bool)processAudioBuffer:(struct opaqueCMSampleBuffer *)arg1 bufferDuration:(double)arg2;
- (void)pauseWriting;
- (void)startWriting;
- (id)initWithAudioDescription:(struct AudioStreamBasicDescription)arg1 config:(id)arg2;
- (id)init;

@end
