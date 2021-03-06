//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOAlertViewDelegate-Protocol.h"
#import "YTGraftingViewController-Protocol.h"
#import "YTTopController-Protocol.h"

@class GIMMe, NSString, YTICommand, YTMAlertView, YTPlaylistService;
@protocol YTDataServices, YTResponder;

@interface YTMAddToPlaylistController : NSObject <GOOAlertViewDelegate, YTGraftingViewController, YTTopController>
{
    YTICommand *_navigationEndpoint;
    YTPlaylistService *_playlistService;
    id <YTDataServices> _dataServices;
    YTMAlertView *_alertView;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)alertView;
- (void)handleResponseActions:(id)arg1;
- (void)addVideoToPlaylistWithPlaylistAddToOptionRenderer:(id)arg1;
- (void)addPlaylistToPlaylistWithPlaylistAddToOptionRenderer:(id)arg1;
- (void)didPressButton:(id)arg1;
- (void)addVideoWithId:(id)arg1 toPlaylistWithId:(id)arg2;
- (void)addPlaylistWithId:(id)arg1 toPlaylistWithId:(id)arg2;
- (void)confirmAddVideoWithId:(id)arg1 toPlaylistWithId:(id)arg2 playlistTitle:(id)arg3;
- (void)confirmAddPlaylistWithId:(id)arg1 toPlaylistWithId:(id)arg2 playlistTitle:(id)arg3;
- (void)dismissAlertViewWithError:(id)arg1;
- (void)populateAlertViewWithResponse:(id)arg1;
- (void)showAlertView;
- (void)alertViewDidDisappear:(id)arg1;
- (id)navEndpoint;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

