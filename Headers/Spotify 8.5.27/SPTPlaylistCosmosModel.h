//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistModel-Protocol.h"
#import "SPTPlaylistPlatformPlaylistDataLoader-Protocol.h"

@class NSString;
@protocol SPTCosmosDictionaryDataLoader;

@interface SPTPlaylistCosmosModel : NSObject <SPTPlaylistModel, SPTPlaylistPlatformPlaylistDataLoader>
{
    id <SPTCosmosDictionaryDataLoader> _cosmosDataLoader;
    CDUnknownBlockType _timeGetter;
}

@property(copy, nonatomic) CDUnknownBlockType timeGetter; // @synthesize timeGetter=_timeGetter;
@property(retain, nonatomic) id <SPTCosmosDictionaryDataLoader> cosmosDataLoader; // @synthesize cosmosDataLoader=_cosmosDataLoader;
- (void).cxx_destruct;
- (id)handleRequestPlaylistViewForPlaylistURL:(id)arg1 subscribe:(_Bool)arg2 options:(id)arg3 minimumUpdateInterval:(double)arg4 withMetadataProtocols:(id)arg5 andTrackProtocols:(id)arg6 completion:(CDUnknownBlockType)arg7 onError:(CDUnknownBlockType)arg8;
- (void)updateDescriptionForPlaylistURL:(id)arg1 freeformDescription:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)synchronisePlaylistURL:(id)arg1;
- (id)loggingParams;
- (void)playWithURL:(id)arg1 playOptions:(id)arg2 playlistOptions:(id)arg3 completion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (id)subscribePlaylistViewWithRecommendationsForPlaylistURL:(id)arg1 options:(id)arg2 withMetadataProtocols:(id)arg3 andTrackProtocols:(id)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)subscribePlaylistViewForPlaylistURL:(id)arg1 options:(id)arg2 withMetadataProtocols:(id)arg3 andTrackProtocols:(id)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)subscribeFolderItemsForFolderURL:(id)arg1 options:(id)arg2 withFolderPolicyProtocols:(id)arg3 withPlaylistPolicyProtocols:(id)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)subscribePlaylistTracksForPlaylistURL:(id)arg1 options:(id)arg2 withPolicyProtocols:(id)arg3 completion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (id)subscribePlaylistMetadataForPlaylistURL:(id)arg1 options:(id)arg2 withPolicyProtocols:(id)arg3 completion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)updateListWithDeltaResponse:(id)arg1 currentList:(id)arg2 deserializeBlock:(CDUnknownBlockType)arg3;
- (void)fetchPlaylistViewForPlaylistURL:(id)arg1 options:(id)arg2 withMetadataProtocols:(id)arg3 andTrackProtocols:(id)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (void)fetchFolderItemsForFolderURL:(id)arg1 options:(id)arg2 withFolderPolicyProtocols:(id)arg3 withPlaylistPolicyProtocols:(id)arg4 completion:(CDUnknownBlockType)arg5 onError:(CDUnknownBlockType)arg6;
- (id)callFolderEndpointWithURL:(id)arg1 requestAction:(id)arg2 withFolderPolicyProtocols:(id)arg3 withPlaylistPolicyProtocols:(id)arg4 deltaUpdates:(_Bool)arg5 completion:(CDUnknownBlockType)arg6 onError:(CDUnknownBlockType)arg7;
- (id)buildPlaylistViewCosmosURLComponentsForPlaylistURL:(id)arg1 options:(id)arg2;
- (id)buildFolderCosmosURLComponentsForFolderURL:(id)arg1 options:(id)arg2;
- (id)buildPlaylistTracksCosmosURLComponentsForPlaylistURL:(id)arg1 options:(id)arg2;
- (void)fetchFolderMetadataForFolderURL:(id)arg1 withFolderPolicyProtocols:(id)arg2 completion:(CDUnknownBlockType)arg3 onError:(CDUnknownBlockType)arg4;
- (void)fetchPlaylistTracksForPlaylistURL:(id)arg1 options:(id)arg2 withPolicyProtocols:(id)arg3 completion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)fetchPlaylistMetadataForPlaylistURL:(id)arg1 options:(id)arg2 withPolicyProtocols:(id)arg3 completion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (struct SPTPlaylistPlatformDataLoaderResponse *)responseForData:(id)arg1 items:(id)arg2;
- (void)canReportAnnotationAbuseOnPlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rowIdForURL:(id)arg1 inFolderURL:(id)arg2 flattenTree:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)rowIdForURL:(id)arg1 inFolderURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rowIdsForTrackURLs:(id)arg1 inPlaylistURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)makeGenericRequestWithURL:(id)arg1 requestAction:(id)arg2 requestData:(id)arg3 completion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (id)makeCancelableRequestWithURL:(id)arg1 requestAction:(id)arg2 requestData:(id)arg3 completion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)makeRequestWithURL:(id)arg1 requestAction:(id)arg2 requestData:(id)arg3 completion:(CDUnknownBlockType)arg4 onError:(CDUnknownBlockType)arg5;
- (void)handleOfflinePlaylistURL:(id)arg1 requestAction:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeOfflinePlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addOfflinePlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recursiveCountOfChildrenForFolderURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removePlaylistOrFolderURL:(id)arg1 inFolderURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createPlaylistWithName:(id)arg1 inFolderURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)unfollowPlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)followPlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)makePublishedWithPlaylistURL:(id)arg1 published:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)makeCollaborativeWithPlaylistURL:(id)arg1 collaborative:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)renamePlaylistURL:(id)arg1 name:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)modifyRootlistWithBodyDict:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)modifyPlaylist:(id)arg1 withBodyDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createPlaylistWithName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeTrackURLs:(id)arg1 fromPlaylistURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveTracksWithRowIds:(id)arg1 before:(_Bool)arg2 rowId:(id)arg3 fromPlaylistURL:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeTracksWithRowIds:(id)arg1 fromPlaylistURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addTrackURLs:(id)arg1 toPlaylistURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)trackURLsForPlaylistURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playlistContainsTrackURLs:(id)arg1 playlistURL:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)URLForRootlistEndpointWithPathComponent:(id)arg1;
- (id)URLForRootlistEndpoint;
- (id)URLForPlaylistEndpointWithPlaylistURL:(id)arg1 operation:(id)arg2;
- (id)URLForPlaylistEndpointWithPlaylistURL:(id)arg1;
- (id)initWithCosmosDataLoader:(id)arg1 timeGetter:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

