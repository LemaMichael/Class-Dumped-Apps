//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWEGurdSyncResourcesTask, NSArray, NSString;

@protocol AWEGurdModuleService <HTSService>
+ (void)registerChannels:(NSArray *)arg1 forAccessKey:(NSString *)arg2;
+ (void)registerChannels:(NSArray *)arg1;
- (void)syncResourcesForAccessKey:(NSString *)arg1 channels:(NSArray *)arg2 businessDomain:(NSString *)arg3 resourceVersion:(NSString *)arg4 completion:(void (^)(_Bool, NSDictionary *))arg5;
- (void)syncResourcesForAccessKey:(NSString *)arg1 channels:(NSArray *)arg2 businessDomain:(NSString *)arg3 completion:(void (^)(_Bool, NSDictionary *))arg4;
- (void)syncResourcesWithChannels:(NSArray *)arg1 businessDomain:(NSString *)arg2 completion:(void (^)(_Bool, NSDictionary *))arg3;
- (_Bool)enableGurd;
- (long long)fileTypeForAccessKey:(NSString *)arg1 channel:(NSString *)arg2;
- (NSString *)rootDirectoryForAccessKey:(NSString *)arg1 channel:(NSString *)arg2;
- (NSString *)rootDirectoryForChannel:(NSString *)arg1;
- (NSString *)rootDirectoryForAccessKey:(NSString *)arg1;
- (void)enqueueSyncResourcesTask:(AWEGurdSyncResourcesTask *)arg1;
- (void)syncResourcesForAccessKey:(NSString *)arg1 channels:(NSArray *)arg2 completion:(void (^)(_Bool, NSDictionary *))arg3;
- (void)syncResourcesChannels:(NSArray *)arg1 completion:(void (^)(_Bool, NSDictionary *))arg2;
- (void)syncResourcesIfNeeded;
- (NSString *)accessKey;
@end

