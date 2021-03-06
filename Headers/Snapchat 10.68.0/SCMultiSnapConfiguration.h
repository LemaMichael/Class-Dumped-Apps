//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface SCMultiSnapConfiguration : NSObject
{
    NSMutableArray *_mutableSegments;
    NSMutableDictionary *_segmentIdToIndexMap;
    long long _maxUniqueId;
    _Bool _hasSplit;
    _Bool _hasDeletion;
}

+ (id)generateMultiSnapSegmentsWithVideoAsset:(id)arg1;
@property(nonatomic) _Bool hasDeletion; // @synthesize hasDeletion=_hasDeletion;
@property(nonatomic) _Bool hasSplit; // @synthesize hasSplit=_hasSplit;
@property(readonly, nonatomic) NSDictionary *segmentIdToIndexMap; // @synthesize segmentIdToIndexMap=_segmentIdToIndexMap;
- (void).cxx_destruct;
- (void)updateCaptureSegmentWithFinalDuration:(CDStruct_1b6d18a9)arg1;
- (void)originalThumbnailsForDemotedStateAtIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAndSetThumbnailsForCapturedSingleSegmentWithPlayerHandler:(id)arg1;
- (void)fetchAndSetThumbnailsForAVAsset:(id)arg1 withPlayerHandler:(id)arg2;
- (void)deleteSegmentAtIndex:(long long)arg1;
- (void)splitSegmentAtIndex:(long long)arg1 time:(CDStruct_1b6d18a9)arg2 playerHandler:(id)arg3;
- (void)updateSegmentTrimmedTimeRange:(CDStruct_e83c9415)arg1 atIndex:(long long)arg2;
- (void)updateSegment:(id)arg1 atIndex:(long long)arg2;
- (id)addMultiSnapSegment:(id)arg1;
- (_Bool)segmentsHaveThumbnailFutures;
- (_Bool)anySegmentTrimmed;
@property(readonly, nonatomic) long long forceSplittedTimeRangesCount;
@property(readonly, nonatomic) NSArray *forceSplittedTimeRanges;
@property(readonly, nonatomic) NSArray *timeRanges;
@property(copy, nonatomic) NSArray *segments;
- (id)init;

@end

