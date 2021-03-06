//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UserProfileLogicBridge : NSObject
{
}

+ (id)userName;
+ (_Bool)isUserOnline;
+ (id)userProfileImageUrl;
+ (id)getUserDataForInfoCenter;
+ (_Bool)isUserStatusIsPending;
+ (_Bool)isLoggedInUserABuyer;
+ (_Bool)isLoggedInUserASeller;
+ (void)setUserVacationsModeInfoWhenVacationEnds:(id)arg1;
+ (id)getUserVacationsModeInfoWhenVacationEnds;
+ (id)userEmail;
+ (id)userId;
+ (id)userItem;
+ (void)getUserLabels:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
+ (_Bool)isUserLoggedIn;
+ (void)toggleIsUserInVacationMode;
+ (_Bool)isUserOnVacation;
+ (id)getCurrentUserVacationModeUntilDate;

@end

