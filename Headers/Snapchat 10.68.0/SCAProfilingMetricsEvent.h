//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAProfilingMetricsEvent : SCAUserTrackedEvent
{
}

- (void)setWithRecordingOccuring:(_Bool)arg1;
- (void)setLensUnloadTimeMs:(double)arg1;
- (void)setLensTrackingTimeMs:(double)arg1;
- (void)setLensStdFrameTimeWarmMs:(double)arg1;
- (void)setLensStdFrameTimeMs:(double)arg1;
- (void)setLensStartFrameRatio:(double)arg1;
- (void)setLensScriptTimeMs:(double)arg1;
- (void)setLensLoadTimeMs:(double)arg1;
- (void)setLensId:(id)arg1;
- (void)setLensGpuTimeWarmMs:(double)arg1;
- (void)setLensGpuTimeMs:(double)arg1;
- (void)setLensFrameTimeWarmMs:(double)arg1;
- (void)setLensFrameTimeMs:(double)arg1;
- (void)setLensFpsWarm:(double)arg1;
- (void)setLensFps:(double)arg1;
- (void)setLensFirstFrameMs:(double)arg1;
- (void)setLensEngineTimeMs:(double)arg1;
- (void)setLensBadFrames:(double)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
