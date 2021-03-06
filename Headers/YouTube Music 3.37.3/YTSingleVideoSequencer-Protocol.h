//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class YTAdInterrupt, YTPlaybackConfig, YTPlaybackData, YTPlaybackTimeline, YTPlayerTransition, YTPrebufferingVideoTransitionController, YTSingleVideoController, YTVSSControllerState;
@protocol YTSingleVideoObservable;

@protocol YTSingleVideoSequencer <NSObject>
@property(readonly, nonatomic) YTPlaybackTimeline *playbackTimeline;
@property(readonly, nonatomic) YTSingleVideoController *contentVideoController;
@property(readonly, nonatomic) YTSingleVideoController *activeVideoController;
- (void)replayActiveVideo;
- (void)seekToEndOfActiveVideo;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekToProductionTime:(double)arg1;
- (void)reloadActiveVideoControllerMediaPlayer;
- (void)stopDAIAndReloadMediaPlayer;
- (id <YTSingleVideoObservable>)registerAdInterrupt:(YTAdInterrupt *)arg1;
- (void)reactivateSuspendedAd;
- (void)initializeSuspendedAdWithAdInterrupt:(YTAdInterrupt *)arg1 transition:(YTPrebufferingVideoTransitionController *)arg2;
- (void)suspendAd;
- (YTVSSControllerState *)shutDownAd;
- (void)activateAdWithAdInterrupt:(YTAdInterrupt *)arg1 transition:(YTPrebufferingVideoTransitionController *)arg2;
- (void)loadFirstVideoInContentSequenceIntoInactiveState;
- (void)suspendContentSequence;
- (void)restartContentSequence;
- (void)activateContentSequence;
- (_Bool)hasUpcomingContentPlaybackData;
- (void)setUpcomingContentPlaybackData:(YTPlaybackData *)arg1 initialContentTime:(CDStruct_d60ef703)arg2 playerTransition:(YTPlayerTransition *)arg3 playbackConfig:(YTPlaybackConfig *)arg4;
- (void)setContentPlaybackData:(YTPlaybackData *)arg1 initialContentTime:(CDStruct_d60ef703)arg2 playerTransition:(YTPlayerTransition *)arg3 playbackConfig:(YTPlaybackConfig *)arg4 prebufferedContentVideo:(YTSingleVideoController *)arg5 userIntentToPlayTime:(double)arg6;
- (void)shutDown;
@end

