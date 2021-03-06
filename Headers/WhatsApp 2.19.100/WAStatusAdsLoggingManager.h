//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, NSUserDefaults, WAPersistentKeyValueStore, WAPersistentRequestManager;
@protocol OS_dispatch_queue;

@interface WAStatusAdsLoggingManager : NSObject
{
    WAPersistentRequestManager *_persistentRequestManager;
    WAPersistentKeyValueStore *_localKeyValueStore;
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_sequencedEventsQueue;
    NSObject<OS_dispatch_queue> *_delayedEventsQueue;
    long long _nextImmediateLogSequenceNumber;
    long long _nextDelayedLogSequenceNumber;
    NSMutableArray *_delayedEvents;
}

- (void).cxx_destruct;
- (void)registerHandlersForPersistentRequestManager:(id)arg1;
- (id)sharedObjectKeyForPersistentRequestManager:(id)arg1;
- (void)uploadDelayedEvents;
- (id)uploadDelayedEventsTask;
- (void)addDelayedEvent:(id)arg1;
@property(readonly, nonatomic) NSMutableArray *delayedEvents; // @synthesize delayedEvents=_delayedEvents;
- (void)logStatusAdEvent:(id)arg1;
- (id)sequencedLogEventForStatusAdLogEvent:(id)arg1;
- (id)initWithPersistentRequestManager:(id)arg1 localKeyValueStore:(id)arg2 taskManager:(id)arg3 userDefaults:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

