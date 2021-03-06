//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCBackgroundPrefetchProtocol-Protocol.h"

@class NSString, SCCircumstanceEngine, SCDiscoverFeedQueryCoordinator, SCLazy, SCQueuePerformer, SCUserSession;

@interface SCDiscoverBackgroundPrefetcher : NSObject <SCBackgroundPrefetchProtocol>
{
    SCDiscoverFeedQueryCoordinator *_queryCoordinator;
    SCUserSession *_userSession;
    SCCircumstanceEngine *_circumstanceEngine;
    SCLazy *_imageDownloader;
    SCQueuePerformer *_queuePerformer;
    unsigned long long _backgroundFetchResult;
}

- (void).cxx_destruct;
- (id)_defaultConfig;
- (void)_updateBackgroundFetchResult:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleStoriesDownloadCompletion:(CDUnknownBlockType)arg1;
- (void)_prefetchDiscoverThumbnail:(id)arg1 discoverList:(id)arg2;
- (void)_prefetchDiscoverMedia:(id)arg1 discoverList:(id)arg2 numOfSnapsInAStory:(unsigned long long)arg3 maxNumOfSnapsInAStory:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_prefetchDiscover:(_Bool)arg1 numOfStories:(unsigned long long)arg2 numOfSnapsInAStory:(unsigned long long)arg3 maxNumOfSnapsInAStory:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_queryDiscoverResultsComplete:(_Bool)arg1 numOfStories:(unsigned long long)arg2 numOfSnapsInAStory:(unsigned long long)arg3 maxNumOfSnapsInAStory:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)_loadDiscoverMetadataFromDiskComplete:(_Bool)arg1 discoverForYouSection:(_Bool)arg2 numOfStories:(unsigned long long)arg3 numOfSnapsInAStory:(unsigned long long)arg4 maxNumOfSnapsInAStory:(unsigned long long)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)_loadDiscoverMetadataFromDiskComplete:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)prefetchIntervalInSeconds;
- (id)name;
- (void)backgroundPrefetchMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithQueryCoordinator:(id)arg1 userSession:(id)arg2 circumstanceEngine:(id)arg3 imageDownloader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

