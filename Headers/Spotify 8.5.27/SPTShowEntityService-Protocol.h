//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSURL;

@protocol SPTShowEntityService <NSObject>
- (void)lookupResumePointsForURIs:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)lookupEpisodeURIs:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)lookupEpisodesForShowWithURI:(NSURL *)arg1 inRange:(struct _NSRange)arg2 includeEpisode:(NSURL *)arg3 completionHandler:(void (^)(NSArray *, NSError *))arg4;
- (void)lookupShowEntityWithURI:(NSURL *)arg1 completionHandler:(void (^)(id <SPTShow>, NSError *))arg2;
@end
