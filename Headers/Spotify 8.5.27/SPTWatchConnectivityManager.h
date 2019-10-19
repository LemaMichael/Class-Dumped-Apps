//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTWatchConnectivitySessionObserver-Protocol.h"

@class NSString, SPTWatchConnectivityMessageDispatcher, SPTWatchConnectivityPubSubManager, SPTWatchConnectivitySession;

@interface SPTWatchConnectivityManager : NSObject <SPTWatchConnectivitySessionObserver>
{
    SPTWatchConnectivitySession *_currentSession;
    SPTWatchConnectivityMessageDispatcher *_messageDispatcher;
    SPTWatchConnectivityPubSubManager *_pubSubManager;
}

+ (id)sharedManager;
@property(retain, nonatomic) SPTWatchConnectivityPubSubManager *pubSubManager; // @synthesize pubSubManager=_pubSubManager;
@property(readonly, nonatomic) SPTWatchConnectivityMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) SPTWatchConnectivitySession *currentSession; // @synthesize currentSession=_currentSession;
- (void).cxx_destruct;
- (void)session:(id)arg1 didReceiveUserInfo:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)sessionWatchStateDidChange:(id)arg1;
- (void)sessionDidDeactivate:(id)arg1;
- (id)providePubSub;
- (id)provideMessageHandlerRegistry;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
