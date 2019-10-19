//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAdsPlaybackCoordinator-Protocol.h"

@class GIMMe, NSString;
@protocol MLCuepointObserver;

@interface YTAdsControlFlowPlaybackCoordinator : NSObject <YTAdsPlaybackCoordinator>
{
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)debugParameters;
- (void)externalPlaybackActiveDidChange:(_Bool)arg1;
- (void)setPlayerViewLayout:(int)arg1;
- (id)instreamForcedAdParameters;
- (id)lastAdVideoID;
- (double)lastAdTotalMediaTime;
- (id)currentAd;
- (void)reset;
- (void)doneWithCurrentAd;
- (void)willPlayNewVideoWithAutoplay:(_Bool)arg1;
- (void)didPressSkipAdWithTouchPoint:(struct CGPoint)arg1;
- (void)didTapCompanionAd;
- (void)didFailToPlayAdWithPlaybackError:(id)arg1;
- (void)didSkipOrCompleteAd:(id)arg1;
- (void)didStopPlayingAd;
- (void)setContentPlaybackData:(id)arg1 contentSingleVideo:(id)arg2 playbackTimeline:(id)arg3;
- (void)setContentPlaybackData:(id)arg1 contentSingleVideo:(id)arg2;
- (void)startPostrollAdBreak;
- (void)startPrerollAdBreak;
- (void)setOverlayFactory:(id)arg1;
- (void)prepareOverlays;
- (void)startOverlay;
- (id)acquireOverlay;
- (void)playbackControllerWillActivatePrebufferingAdTransitionWithBufferedMediaTime:(double)arg1;
- (_Bool)supportsPlaybackForContentPlayerResponse:(id)arg1;
@property(readonly, nonatomic) id <MLCuepointObserver> adsCuepointObserver;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
