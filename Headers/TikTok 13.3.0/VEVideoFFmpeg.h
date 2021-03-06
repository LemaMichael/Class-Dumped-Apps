//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEVideoReader.h"

#import "VEAppStatusProtocol-Protocol.h"

@class NSError, NSString, VEVideoConfig;

@interface VEVideoFFmpeg : VEVideoReader <VEAppStatusProtocol>
{
    _Bool _seekReq;
    _Bool _isPreSeek;
    NSError *_error;
    struct __CVBuffer *_lastPixelBuffer;
    VEVideoConfig *_config;
    CDStruct_1b6d18a9 _lastTime;
    CDStruct_1b6d18a9 _lastPacketTime;
    CDStruct_1b6d18a9 _lastDuration;
    CDStruct_1b6d18a9 _seekTime;
}

@property(nonatomic) CDStruct_1b6d18a9 seekTime; // @synthesize seekTime=_seekTime;
@property(nonatomic) _Bool isPreSeek; // @synthesize isPreSeek=_isPreSeek;
@property _Bool seekReq; // @synthesize seekReq=_seekReq;
@property(retain, nonatomic) VEVideoConfig *config; // @synthesize config=_config;
@property(nonatomic) CDStruct_1b6d18a9 lastDuration; // @synthesize lastDuration=_lastDuration;
@property(nonatomic) CDStruct_1b6d18a9 lastPacketTime; // @synthesize lastPacketTime=_lastPacketTime;
@property(nonatomic) CDStruct_1b6d18a9 lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) struct __CVBuffer *lastPixelBuffer; // @synthesize lastPixelBuffer=_lastPixelBuffer;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (void)resignActive;
- (void)enterForeground;
- (void)enterBackground;
- (void)becomeActive;
- (void)pause;
- (void)play;
- (void)stop;
- (void)unPrepare;
- (void)prepare;
- (void)seekToTimeProcess:(CDStruct_1b6d18a9)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (id)copySampleBufferAtTime:(CDStruct_1b6d18a9)arg1 nextVSync:(double)arg2 forceFrame:(_Bool)arg3;
- (void)processTask;
- (void)stopThread;
- (void)startThread;
- (void)dealloc;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

