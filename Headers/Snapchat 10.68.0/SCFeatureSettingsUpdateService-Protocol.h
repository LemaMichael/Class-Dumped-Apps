//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSObject;
@protocol OS_dispatch_queue;

@protocol SCFeatureSettingsUpdateService <NSObject>
- (void)updateFeatureSettingsToServer:(NSArray *)arg1 successQueue:(NSObject<OS_dispatch_queue> *)arg2 failureQueue:(NSObject<OS_dispatch_queue> *)arg3 successBlock:(void (^)(NSArray *))arg4 failureBlock:(void (^)(NSArray *, NSError *))arg5;
@end
