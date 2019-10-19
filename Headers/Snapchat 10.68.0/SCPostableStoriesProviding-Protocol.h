//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject;
@protocol OS_dispatch_queue, SCPostableStoriesUpdateListener;

@protocol SCPostableStoriesProviding <NSObject>
- (void)removeListener:(id <SCPostableStoriesUpdateListener>)arg1;
- (void)addListener:(id <SCPostableStoriesUpdateListener>)arg1;
- (void)postableCustomStoriesWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)postableOurStoriesWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(NSArray *))arg2;
- (void)warmUpCache;
@end
