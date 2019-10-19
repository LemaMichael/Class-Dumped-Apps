//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class HTSLiveImage, NSMutableArray, NSString;

@interface HTSLiveUser_PayGrade : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) HTSLiveImage *background; // @dynamic background;
@property(retain, nonatomic) HTSLiveImage *backgroundBack; // @dynamic backgroundBack;
@property(retain, nonatomic) HTSLiveImage *diamondIcon; // @dynamic diamondIcon;
@property(copy, nonatomic) NSString *gradeBanner; // @dynamic gradeBanner;
@property(copy, nonatomic) NSString *gradeDescribe; // @dynamic gradeDescribe;
@property(retain, nonatomic) NSMutableArray *gradeIconListArray; // @dynamic gradeIconListArray;
@property(readonly, nonatomic) unsigned long long gradeIconListArray_Count; // @dynamic gradeIconListArray_Count;
@property(nonatomic) _Bool hasBackground; // @dynamic hasBackground;
@property(nonatomic) _Bool hasBackgroundBack; // @dynamic hasBackgroundBack;
@property(nonatomic) _Bool hasDiamondIcon; // @dynamic hasDiamondIcon;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasImIcon; // @dynamic hasImIcon;
@property(nonatomic) _Bool hasImIconWithLevel; // @dynamic hasImIconWithLevel;
@property(nonatomic) _Bool hasLiveIcon; // @dynamic hasLiveIcon;
@property(nonatomic) _Bool hasNewImIconWithLevel; // @dynamic hasNewImIconWithLevel;
@property(nonatomic) _Bool hasNewLiveIcon; // @dynamic hasNewLiveIcon;
@property(nonatomic) _Bool hasNextIcon; // @dynamic hasNextIcon;
@property(nonatomic) _Bool hasProfileDialogBg; // @dynamic hasProfileDialogBg;
@property(nonatomic) _Bool hasProfileDialogBgBack; // @dynamic hasProfileDialogBgBack;
@property(retain, nonatomic) HTSLiveImage *icon; // @dynamic icon;
@property(retain, nonatomic) HTSLiveImage *imIcon; // @dynamic imIcon;
@property(retain, nonatomic) HTSLiveImage *imIconWithLevel; // @dynamic imIconWithLevel;
@property(nonatomic) long long level; // @dynamic level;
@property(retain, nonatomic) HTSLiveImage *liveIcon; // @dynamic liveIcon;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) HTSLiveImage *newImIconWithLevel; // @dynamic newImIconWithLevel;
@property(retain, nonatomic) HTSLiveImage *newLiveIcon; // @dynamic newLiveIcon;
@property(nonatomic) long long nextDiamond; // @dynamic nextDiamond;
@property(retain, nonatomic) HTSLiveImage *nextIcon; // @dynamic nextIcon;
@property(copy, nonatomic) NSString *nextName; // @dynamic nextName;
@property(copy, nonatomic) NSString *nextPrivileges; // @dynamic nextPrivileges;
@property(nonatomic) long long nowDiamond; // @dynamic nowDiamond;
@property(nonatomic) long long payDiamondBak; // @dynamic payDiamondBak;
@property(retain, nonatomic) HTSLiveImage *profileDialogBg; // @dynamic profileDialogBg;
@property(retain, nonatomic) HTSLiveImage *profileDialogBgBack; // @dynamic profileDialogBgBack;
@property(nonatomic) long long score; // @dynamic score;
@property(nonatomic) long long screenChatType; // @dynamic screenChatType;
@property(nonatomic) long long thisGradeMaxDiamond; // @dynamic thisGradeMaxDiamond;
@property(nonatomic) long long thisGradeMinDiamond; // @dynamic thisGradeMinDiamond;
@property(nonatomic) long long totalDiamondCount; // @dynamic totalDiamondCount;
@property(nonatomic) long long upgradeNeedConsume; // @dynamic upgradeNeedConsume;

@end
