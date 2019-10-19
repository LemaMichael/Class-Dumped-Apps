//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMBaseTrackRenderer.h"

#import "HAMFrameSource-Protocol.h"
#import "HAMPixelBufferSourceDelegate-Protocol.h"

@class GIMMe, HAMPixelBuffer, NSObject, NSString;
@protocol HAMFormat, HAMFrameSourceDelegate, HAMPixelBufferSource, OS_dispatch_queue;

@interface HAMPixelBufferVideoTrackRenderer : HAMBaseTrackRenderer <HAMPixelBufferSourceDelegate, HAMFrameSource>
{
    id <HAMPixelBufferSource> _source;
    struct HAMPixelBufferVideoTrackRendererConfiguration _configuration;
    CDStruct_576a8307 _lastRenderedTime;
    CDStruct_1b6d18a9 _seekTime;
    HAMPixelBuffer *_currentPixelBuffer;
    id <HAMFormat> _currentFormat;
    struct HAMPixelBufferVideoTrackRendererTimeSyncData _timeSyncData;
    struct FrameQueue _frameQueue;
    _Bool _frameSourceDelegatePaused;
    float _rate;
    int _droppedFrames;
    NSObject<OS_dispatch_queue> *_pixelBufferDeliveryQueue;
    GIMMe *_gimme;
    id <HAMFrameSourceDelegate> _frameSourceDelegate;
}

@property(nonatomic) __weak id <HAMFrameSourceDelegate> frameSourceDelegate; // @synthesize frameSourceDelegate=_frameSourceDelegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *pixelBufferDeliveryQueue; // @synthesize pixelBufferDeliveryQueue=_pixelBufferDeliveryQueue;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setFrameSourceDelegatePaused:(_Bool)arg1;
- (void)mediaSourceBufferedTimeDidChange:(id)arg1;
- (void)mediaSource:(id)arg1 didFailWithError:(id)arg2;
- (void)mediaSource:(id)arg1 seekableTimeRangeDidChange:(CDStruct_e83c9415)arg2;
- (void)mediaSource:(id)arg1 setCurrentTime:(CDStruct_1b6d18a9)arg2;
- (void)pixelBufferSource:(id)arg1 didDecodePixelBuffer:(id)arg2;
- (void)renderingDidFailWithError:(id)arg1 canRetry:(_Bool)arg2;
- (void)determineFrameForDisplayTime:(double)arg1 displayDuration:(double)arg2 andCallRenderBlock:(CDUnknownBlockType)arg3;
- (_Bool)internalDoWorkAtTime:(CDStruct_576a8307)arg1 error:(id *)arg2;
- (void)internalSeekToTime:(CDStruct_1b6d18a9)arg1;
- (void)internalSetRate:(float)arg1;
- (void)internalTerminate;
- (_Bool)internalDisableAndReturnError:(id *)arg1;
- (_Bool)internalStopAndReturnError:(id *)arg1;
- (_Bool)internalStartAndReturnError:(id *)arg1;
- (_Bool)internalPrimeAndReturnError:(id *)arg1;
- (_Bool)internalEnableAndReturnError:(id *)arg1;
- (_Bool)internalPrepareAndReturnError:(id *)arg1;
- (void)setAsActiveFrameSource;
- (int)mediaContentType;
- (CDStruct_576a8307)currentTime;
- (id)init;
- (id)initWithContext:(id)arg1 rootMediaSource:(id)arg2 configuration:(struct HAMPixelBufferVideoTrackRendererConfiguration)arg3 pixelBufferSource:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
