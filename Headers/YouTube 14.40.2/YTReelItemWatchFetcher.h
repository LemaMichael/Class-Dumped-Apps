//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIMMe, NSMutableDictionary, NSString;

@interface YTReelItemWatchFetcher : NSObject
{
    NSString *_playlistID;
    NSString *_playerParams;
    NSMutableDictionary *_watchResponseCache;
    NSMutableDictionary *_currentFetches;
    GIMMe *_gimme;
    id <YTReelItemWatchFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <YTReelItemWatchFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)completeFetchWithClipIndex:(unsigned long long)arg1 response:(id)arg2 error:(id)arg3;
- (id)playbackContext;
- (id)watchRequestForClipAtIndex:(unsigned long long)arg1 withEndpoint:(id)arg2;
- (void)fetchWatchResponseForClipAtIndex:(unsigned long long)arg1 withEndpoint:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPlaylistID:(id)arg1 playerParams:(id)arg2;

@end

