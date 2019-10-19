//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol YTPlaybackBackgroundTaskControllerDelegate;

@interface YTPlaybackBackgroundTaskController : NSObject
{
    _Bool _isInBackground;
    _Bool _pendingPlay;
    _Bool _externalPlaybackActive;
    long long _playerState;
    int _playbackControllerState;
    unsigned long long _backgroundTaskID;
    NSTimer *_backgroundTaskExpirationTimer;
    _Bool _contentPlayableInBackground;
    id <YTPlaybackBackgroundTaskControllerDelegate> _delegate;
}

@property(nonatomic, getter=isContentPlayableInBackground) _Bool contentPlayableInBackground; // @synthesize contentPlayableInBackground=_contentPlayableInBackground;
@property(nonatomic) __weak id <YTPlaybackBackgroundTaskControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)backgroundTaskExpirationTimer;
- (void)sendNotificationForBackgroundTaskActive:(_Bool)arg1 didEnd:(_Bool)arg2;
- (void)createBackgroundTask;
- (void)endBackgroundTask;
- (void)endBackgroundTaskAfterDelay;
- (void)updateBackgroundTaskForCurrentState;
- (void)playerWillPlay;
- (void)playbackControllerStateDidChangeToState:(int)arg1;
- (void)playerStateDidChangeToState:(long long)arg1;
- (void)externalPlaybackActiveDidChange:(_Bool)arg1;
- (void)appDidBecomeActive;
- (void)appDidEnterBackground;
@property(readonly, nonatomic, getter=isBackgroundTaskActive) _Bool backgroundTaskActive;
- (void)dealloc;
- (id)init;

@end
