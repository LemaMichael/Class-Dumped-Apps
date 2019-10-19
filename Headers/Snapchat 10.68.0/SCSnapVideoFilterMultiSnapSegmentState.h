//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapVideoFilterMultiSnapSegmentState-Protocol.h"

@class NSNumber, NSString, NSURL, NSValue, SCMultiSnapOverlayState;

@interface SCSnapVideoFilterMultiSnapSegmentState : NSObject <SCSnapVideoFilterMultiSnapSegmentState>
{
    NSURL *_sourceVideoURL;
    double _originalVideoDuration;
    long long _numSegments;
    long long _segmentIndex;
    NSValue *_timeRange;
    NSNumber *_timeRangeStartCMTimeVal;
    NSNumber *_timeRangeStartCMTimescale;
    NSNumber *_timeRangeDurationCMTimeVal;
    NSNumber *_timeRangeDurationCMTimescale;
    SCMultiSnapOverlayState *_overlayState;
    struct CGSize _overlaySize;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, copy, nonatomic) SCMultiSnapOverlayState *overlayState; // @synthesize overlayState=_overlayState;
@property(readonly, nonatomic) struct CGSize overlaySize; // @synthesize overlaySize=_overlaySize;
@property(readonly, copy, nonatomic) NSNumber *timeRangeDurationCMTimescale; // @synthesize timeRangeDurationCMTimescale=_timeRangeDurationCMTimescale;
@property(readonly, copy, nonatomic) NSNumber *timeRangeDurationCMTimeVal; // @synthesize timeRangeDurationCMTimeVal=_timeRangeDurationCMTimeVal;
@property(readonly, copy, nonatomic) NSNumber *timeRangeStartCMTimescale; // @synthesize timeRangeStartCMTimescale=_timeRangeStartCMTimescale;
@property(readonly, copy, nonatomic) NSNumber *timeRangeStartCMTimeVal; // @synthesize timeRangeStartCMTimeVal=_timeRangeStartCMTimeVal;
@property(readonly, copy, nonatomic) NSValue *timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) long long segmentIndex; // @synthesize segmentIndex=_segmentIndex;
@property(readonly, nonatomic) long long numSegments; // @synthesize numSegments=_numSegments;
@property(readonly, nonatomic) double originalVideoDuration; // @synthesize originalVideoDuration=_originalVideoDuration;
@property(readonly, copy, nonatomic) NSURL *sourceVideoURL; // @synthesize sourceVideoURL=_sourceVideoURL;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setSize:(struct CGSize)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSourceVideoURL:(id)arg1 originalVideoDuration:(double)arg2 numSegments:(long long)arg3 segmentIndex:(long long)arg4 timeRange:(id)arg5 timeRangeStartCMTimeVal:(id)arg6 timeRangeStartCMTimescale:(id)arg7 timeRangeDurationCMTimeVal:(id)arg8 timeRangeDurationCMTimescale:(id)arg9 overlaySize:(struct CGSize)arg10 overlayState:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
