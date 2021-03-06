//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUAdCommonSnapAdImpressionTrack-Protocol.h"

@class NSNumber, NSString, SOJUAdTopsnapVolumes;

@interface SOJUAdCommonSnapAdImpressionTrack : NSObject <SOJUAdCommonSnapAdImpressionTrack>
{
    NSNumber *_topsnapTimeViewedSeconds;
    NSNumber *_topsnapMediaDurationSeconds;
    NSNumber *_longformTimeViewedSeconds;
    NSNumber *_swiped;
    NSNumber *_deltaBetweenReceiveAndRenderMillis;
    NSNumber *_swipeCount;
    NSString *_creativeId;
    NSNumber *_topsnapAudioPlaybackVolume;
    NSNumber *_topsnapTimeViewedBeforeInteractionSeconds;
    SOJUAdTopsnapVolumes *_topsnapVolumes;
    NSNumber *_topsnapMaxContinuousTimeViewedSeconds;
    NSNumber *_topsnapAudibleTimeViewedSeconds;
    NSString *_topsnapMediaType;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *topsnapMediaType; // @synthesize topsnapMediaType=_topsnapMediaType;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudibleTimeViewedSeconds; // @synthesize topsnapAudibleTimeViewedSeconds=_topsnapAudibleTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapMaxContinuousTimeViewedSeconds; // @synthesize topsnapMaxContinuousTimeViewedSeconds=_topsnapMaxContinuousTimeViewedSeconds;
@property(readonly, copy, nonatomic) SOJUAdTopsnapVolumes *topsnapVolumes; // @synthesize topsnapVolumes=_topsnapVolumes;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedBeforeInteractionSeconds; // @synthesize topsnapTimeViewedBeforeInteractionSeconds=_topsnapTimeViewedBeforeInteractionSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapAudioPlaybackVolume; // @synthesize topsnapAudioPlaybackVolume=_topsnapAudioPlaybackVolume;
@property(readonly, copy, nonatomic) NSString *creativeId; // @synthesize creativeId=_creativeId;
@property(readonly, copy, nonatomic) NSNumber *swipeCount; // @synthesize swipeCount=_swipeCount;
@property(readonly, copy, nonatomic) NSNumber *deltaBetweenReceiveAndRenderMillis; // @synthesize deltaBetweenReceiveAndRenderMillis=_deltaBetweenReceiveAndRenderMillis;
@property(readonly, copy, nonatomic) NSNumber *swiped; // @synthesize swiped=_swiped;
@property(readonly, copy, nonatomic) NSNumber *longformTimeViewedSeconds; // @synthesize longformTimeViewedSeconds=_longformTimeViewedSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapMediaDurationSeconds; // @synthesize topsnapMediaDurationSeconds=_topsnapMediaDurationSeconds;
@property(readonly, copy, nonatomic) NSNumber *topsnapTimeViewedSeconds; // @synthesize topsnapTimeViewedSeconds=_topsnapTimeViewedSeconds;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTopsnapTimeViewedSeconds:(id)arg1 topsnapMediaDurationSeconds:(id)arg2 longformTimeViewedSeconds:(id)arg3 swiped:(id)arg4 deltaBetweenReceiveAndRenderMillis:(id)arg5 swipeCount:(id)arg6 creativeId:(id)arg7 topsnapAudioPlaybackVolume:(id)arg8 topsnapTimeViewedBeforeInteractionSeconds:(id)arg9 topsnapVolumes:(id)arg10 topsnapMaxContinuousTimeViewedSeconds:(id)arg11 topsnapAudibleTimeViewedSeconds:(id)arg12 topsnapMediaType:(id)arg13;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)topsnapMediaTypeEnum;
- (float)topsnapAudibleTimeViewedSecondsValue;
- (float)topsnapMaxContinuousTimeViewedSecondsValue;
- (float)topsnapTimeViewedBeforeInteractionSecondsValue;
- (float)topsnapAudioPlaybackVolumeValue;
- (int)swipeCountValue;
- (long long)deltaBetweenReceiveAndRenderMillisValue;
- (_Bool)swipedValue;
- (float)longformTimeViewedSecondsValue;
- (float)topsnapMediaDurationSecondsValue;
- (float)topsnapTimeViewedSecondsValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

