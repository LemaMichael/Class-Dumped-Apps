//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveImage;

@interface HTSLiveUser_AnchorLevel : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long experience; // @dynamic experience;
@property(nonatomic) _Bool hasProfileDialogBg; // @dynamic hasProfileDialogBg;
@property(nonatomic) _Bool hasProfileDialogBgBack; // @dynamic hasProfileDialogBgBack;
@property(nonatomic) _Bool hasSmallIcon; // @dynamic hasSmallIcon;
@property(nonatomic) _Bool hasStageLevel; // @dynamic hasStageLevel;
@property(nonatomic) long long highestExperienceThisLevel; // @dynamic highestExperienceThisLevel;
@property(nonatomic) long long level; // @dynamic level;
@property(nonatomic) long long lowestExperienceThisLevel; // @dynamic lowestExperienceThisLevel;
@property(retain, nonatomic) HTSLiveImage *profileDialogBg; // @dynamic profileDialogBg;
@property(retain, nonatomic) HTSLiveImage *profileDialogBgBack; // @dynamic profileDialogBgBack;
@property(retain, nonatomic) HTSLiveImage *smallIcon; // @dynamic smallIcon;
@property(retain, nonatomic) HTSLiveImage *stageLevel; // @dynamic stageLevel;
@property(nonatomic) long long taskDecreaseExperience; // @dynamic taskDecreaseExperience;
@property(nonatomic) long long taskEndTime; // @dynamic taskEndTime;
@property(nonatomic) long long taskStartExperience; // @dynamic taskStartExperience;
@property(nonatomic) long long taskStartTime; // @dynamic taskStartTime;
@property(nonatomic) long long taskTargetExperience; // @dynamic taskTargetExperience;

@end
