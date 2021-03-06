//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistFeaturePlugin.h"

#import "SCUpdateListener-Protocol.h"

@class NSArray, NSString, SCProfileChatMediaDataSource, SCProfileChatMediaOperaDataSource, SCUserSession;
@protocol SCOperaPlaylistItemController;

@interface SCOperaPlaylistProfileChatMediaPlugin : SCOperaPlaylistFeaturePlugin <SCUpdateListener>
{
    SCUserSession *_userSession;
    SCProfileChatMediaDataSource *_dataSource;
    SCProfileChatMediaOperaDataSource *_operaDataSource;
    id <SCOperaPlaylistItemController> _playlistItemController;
    NSArray *_currentPlaylistDataModels;
}

- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)updateOperaConfiguration:(id)arg1;
- (id)type;
- (void)addEventListenersWithEventAnnouncer:(id)arg1;
- (id)playlistDataSource;
- (void)setPlaylistItemController:(id)arg1;
- (id)initWithUserSession:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

