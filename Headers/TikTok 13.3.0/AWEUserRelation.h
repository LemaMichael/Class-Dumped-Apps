//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEUserRelation : NSObject
{
}

+ (id)requireLoginWithLoginContext:(id)arg1;
+ (id)requireLogin;
+ (id)getLoginContextWithUserID:(id)arg1 fromPageType:(long long)arg2;
+ (id)unfollowWithUserID:(id)arg1;
+ (id)followWithContext:(id)arg1;
+ (id)checkFollowRequestOnAir;
+ (void)unfollow:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)follow:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)rejectWithUserID:(id)arg1;
+ (void)reject:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)approveWithUserID:(id)arg1;
+ (void)approve:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)unblockWithUserID:(id)arg1;
+ (void)unblock:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)blockWithUserID:(id)arg1;
+ (void)block:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)removeFans:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

