//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol SCBloopsTarget, SCPerforming;

@protocol SCBloopsTargetsService <NSObject>
- (void)getFirstExistingBloopsTargetForUsers:(NSArray *)arg1 callbackPerformer:(id <SCPerforming>)arg2 completion:(void (^)(id <SCBloopsTarget>))arg3;
- (void)obtainUserTargetWithCallBackPerformer:(id <SCPerforming>)arg1 completion:(void (^)(id <SCBloopsTarget>, NSString *, NSError *))arg2;
- (void)obtainUserBloopsTargetPolicyWithCallbackPerformer:(id <SCPerforming>)arg1 completion:(void (^)(long long, NSError *))arg2;
- (void)updateUserBloopsTargetPolicy:(long long)arg1 callbackPerformer:(id <SCPerforming>)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)deleteUserBloopsTargetWithCallbackPerformer:(id <SCPerforming>)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)updateUserBloopsTarget:(id <SCBloopsTarget>)arg1 genderType:(long long)arg2 callbackPerformer:(id <SCPerforming>)arg3 completion:(void (^)(NSString *, NSError *))arg4;
@end

