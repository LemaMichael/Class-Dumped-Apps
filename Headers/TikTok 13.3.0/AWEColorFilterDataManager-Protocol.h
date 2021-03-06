//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class IESEffectModel, NSArray, NSString;

@protocol AWEColorFilterDataManager <HTSService>
+ (IESEffectModel *)nextFilterOfFilter:(IESEffectModel *)arg1 filterArray:(NSArray *)arg2;
+ (IESEffectModel *)prevFilterOfFilter:(IESEffectModel *)arg1 filterArray:(NSArray *)arg2;
+ (id)defaultManager;
@property(readonly, copy, nonatomic) NSString *panel;
@property(readonly, nonatomic) IESEffectModel *normalFilter;
@property(readonly, nonatomic) IESEffectModel *rearCameraFilter;
@property(readonly, nonatomic) IESEffectModel *frontCameraFilter;
- (void)addEffectToDownloadQueue:(IESEffectModel *)arg1;
- (long long)downloadStatusOfEffect:(IESEffectModel *)arg1;
- (void)updateEffectListStateWithCheckArray:(NSArray *)arg1 uncheckArray:(NSArray *)arg2;
- (void)fetchEffectListStateCompletion:(void (^)(NSError *, IESEffectPlatformResponseModel *))arg1;
- (NSArray *)flattenedAggregatedEffects;
- (NSArray *)allAggregatedEffects;
- (NSArray *)aggregatedEffects;
- (IESEffectModel *)effectWithID:(NSString *)arg1;
- (NSArray *)availableEffects;
- (void)updateEffectFilters;
@end

