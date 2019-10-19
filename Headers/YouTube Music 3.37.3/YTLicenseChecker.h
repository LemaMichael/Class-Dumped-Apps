//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSingleVideoLifecycleStateObserver-Protocol.h"
#import "YTSingleVideoMediaStateObserver-Protocol.h"

@class GIMMe, NSData, NSDate, NSString, YTHeartbeatService, YTIHeartbeatParams, YTTimedAction;
@protocol YTLicenseCheckerDelegate, YTOfflineModeProvider, YTSingleVideoObservable;

@interface YTLicenseChecker : NSObject <YTSingleVideoMediaStateObserver, YTSingleVideoLifecycleStateObserver>
{
    id <YTLicenseCheckerDelegate> _delegate;
    id <YTSingleVideoObservable> _contentVideoObservable;
    YTHeartbeatService *_heartbeatService;
    id <YTOfflineModeProvider> _offlineModeProvider;
    YTTimedAction *_nextHeartbeatTimedAction;
    NSDate *_lastSuccessfulHeartbeatDate;
    long long _retryCount;
    unsigned long long _currentRequestID;
    _Bool _isRunning;
    NSString *_videoID;
    YTIHeartbeatParams *_heartbeatParams;
    NSData *_trackingParams;
    _Bool _isOfflinePlayerResponse;
    int _sequenceNumber;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)heartbeatTimedAction;
- (void)failWithError:(id)arg1;
- (void)sendHeartbeatAfterTimeInterval:(double)arg1;
- (void)retryHeartbeat;
- (_Bool)canRetryHeartbeat;
- (_Bool)canSoftFailHeartbeat;
- (void)continueHeartbeats;
- (void)sendHeartbeat;
- (void)clearTimer;
- (void)stop;
- (void)start;
- (void)updateRunningState;
- (void)singleVideo:(id)arg1 mediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)singleVideo:(id)arg1 lifecycleStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)dealloc;
- (id)initWithContentVideoObservable:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
