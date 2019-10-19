//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUserModel.h"

@class AWELifeStoryBlockModel, AWEOriginalMusicianModel, NSArray, NSString;

@interface AWEUserModel (MainModel)
+ (id)awemeItemsJSONTransformer;
+ (id)platformSyncInfosJSONTransformer;
+ (id)lifeStoryBlockModelJSONTransformer;
+ (id)originalMusicianJSONTransformer;
+ (id)followerDetailModelsJSONTransformer;
+ (id)starRelatedChallengeListJSONTransformer;
+ (void)load;
- (unsigned long long)getHowOld;
- (_Bool)isSyncToPlatform:(id)arg1;
- (id)syncInfoWithPlatformName:(id)arg1;
- (id)huoshanSyncInfo;
- (_Bool)isSyncToToutiao;
- (_Bool)isSyncToHuoshan;
- (id)toutiaoDetailModel;
- (_Bool)shouldShowStarRelatedChallengeList;
@property(nonatomic) _Bool isProAccount;
@property(nonatomic) long long birthdayHideLevel;
@property(copy, nonatomic) NSString *bioEmail;
@property(copy, nonatomic) NSString *bioSecureUrl;
@property(copy, nonatomic) NSString *bioUrl;
@property(retain, nonatomic) NSArray *awemeItems;
@property(retain, nonatomic) NSArray *platformSyncInfos;
@property(retain, nonatomic) AWELifeStoryBlockModel *lifeStoryBlockModel;
@property(retain, nonatomic) AWEOriginalMusicianModel *originalMusician;
@property(copy, nonatomic) NSArray *followerDetailModels;
@property(copy, nonatomic) NSArray *starRelatedChallengeList;
@end
