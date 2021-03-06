//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAppNotificationSequencerDelegate-Protocol.h"
#import "SCInAppNotificationViewV2Delegate-Protocol.h"

@class NSMutableDictionary, NSString, SCAppNotification, SCAppNotificationSequencer, SCInAppNotificationViewV2;
@protocol SCInAppNotificationDisplayProtocol, SCInAppNotificationPressedDelegate;

@interface SCInAppNotificationController : NSObject <SCAppNotificationSequencerDelegate, SCInAppNotificationViewV2Delegate>
{
    SCInAppNotificationViewV2 *_view;
    id <SCInAppNotificationDisplayProtocol> _vcForPolicy;
    _Bool _didPauseMediaForVC;
    SCAppNotification *_currentNotification;
    NSMutableDictionary *_notificationWaitPeriods;
    SCAppNotificationSequencer *_inAppNotificationPresenter;
    id <SCInAppNotificationPressedDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <SCInAppNotificationPressedDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCAppNotificationSequencer *inAppNotificationPresenter; // @synthesize inAppNotificationPresenter=_inAppNotificationPresenter;
- (void).cxx_destruct;
- (void)handleNotificationPressed:(id)arg1 withAction:(id)arg2;
- (id)otherParticipant;
- (void)shouldIgnoreNotificationTapEvent:(id)arg1 withAction:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)didResumeTimer;
- (void)didPauseTimer;
- (void)didChangeDisplayProtocol:(id)arg1;
- (void)handleQueuedNotificationRevoked:(id)arg1;
- (void)handleCurrentNotificationDidChange:(id)arg1 didInterrupt:(_Bool)arg2;
- (void)maybeResumeVCPlayback;
- (void)maybePauseVCPlaybackForNotification:(id)arg1;
- (void)ensureView;
- (void)applicationDidBackground:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

