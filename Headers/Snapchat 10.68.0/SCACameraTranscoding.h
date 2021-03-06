//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCACameraTranscodingBase.h"

@interface SCACameraTranscoding : SCACameraTranscodingBase
{
}

- (void)prepareDictionary:(id)arg1;
- (void)setWithSoftwareDecoder:(_Bool)arg1;
- (void)setVideoProcessingMetricId:(id)arg1;
- (void)setTranscodingTweaks:(id)arg1;
- (void)setTranscodingTaskId:(id)arg1;
- (void)setTranscodingTaskExecutionMetricId:(id)arg1;
- (void)setTranscodingSpeed:(double)arg1;
- (void)setTranscodingMetricId:(id)arg1;
- (void)setTranscodingLibraryVersion:(id)arg1;
- (void)setSplits:(id)arg1;
- (void)setSoftwareEncoderEnabled:(_Bool)arg1;
- (void)setSegmentTimingData:(id)arg1;
- (void)setRetryCount:(long long)arg1;
- (void)setRetryContext:(long long)arg1;
- (void)setQualityScore:(double)arg1;
- (void)setProcessType:(long long)arg1;
- (void)setPerformanceMetrics:(id)arg1;
- (void)setLeaseHistory:(id)arg1;
- (void)setGaussianBlurLevel:(long long)arg1;
- (void)setFrameStatistics:(id)arg1;
- (void)setExpectedFrameRate:(double)arg1;
- (void)setExpectedBitrate:(double)arg1;
- (void)setCreativeTools:(id)arg1;
- (void)setCodecLeasingEngineEnabled:(_Bool)arg1;
- (void)setCamera:(id)arg1;
- (void)setAppState:(long long)arg1;
- (void)setAnalyticsVersion:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

