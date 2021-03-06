//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFormatListPlatformManager-Protocol.h"
#import "SPTOfflineObserver-Protocol.h"

@class NSString, NSURL;
@protocol SPTFormatListPlatformManagerOfflineDelegate, SPTOfflineManager, SPTPlaylistModel, SPTPlaylistPlatformPlaylistDataLoader, SPTProductState;

@interface SPTFormatListPlatformManagerImplementation : NSObject <SPTOfflineObserver, SPTFormatListPlatformManager>
{
    id <SPTFormatListPlatformManagerOfflineDelegate> delegate;
    NSURL *_URL;
    id <SPTProductState> _productState;
    id <SPTOfflineManager> _offlineManager;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    id <SPTPlaylistModel> _playlistModel;
}

@property(readonly, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(readonly, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(readonly, nonatomic) __weak id <SPTOfflineManager> offlineManager; // @synthesize offlineManager=_offlineManager;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <SPTFormatListPlatformManagerOfflineDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)presentEducationPopup;
- (void)offlineStateChangedForEntity:(id)arg1 withURL:(id)arg2;
- (long long)offlineStatusForItemURL:(id)arg1;
- (void)invokeCompletion:(CDUnknownBlockType)arg1 withFollowState:(_Bool)arg2 error:(id)arg3;
- (_Bool)unfollowAndMakeFormatListUnvailableOfflineWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)followAndMakeFormatListAvailableOfflineWithItemURLs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)makeFormatListUnvailableOffline;
- (_Bool)makeFormatListAvailableOfflineWithItemURLs:(id)arg1;
- (void)unfollowFormatListWithCompletion:(CDUnknownBlockType)arg1;
- (void)followFormatListWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long offlineAvailability;
- (void)fetchFollowedStateWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic, getter=isCurrentUserAllowedToOffline) _Bool currentUserAllowedToOffline;
- (void)dealloc;
- (id)initWithURL:(id)arg1 productState:(id)arg2 offlineManager:(id)arg3 playlistDataLoader:(id)arg4 playlistModel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

