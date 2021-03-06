//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseWorker.h"

#import "YTDelayedEventEntityStoreObserver-Protocol.h"
#import "YTWorker-Protocol.h"

@class GIMMe, NSDate, NSHashTable, NSString, YTDelayedEventEntityStore;
@protocol YTDelayedEventConfig, YTDelayedEventWorkerHandler, YTWorkerDelegate;

@interface YTDelayedEventWorker : YTBaseWorker <YTWorker, YTDelayedEventEntityStoreObserver>
{
    id <YTDelayedEventWorkerHandler> _eventHandler;
    YTDelayedEventEntityStore *_delayedEventStore;
    id <YTDelayedEventConfig> _eventConfig;
    unsigned long long _pendingDispatchRequests;
    NSDate *_lastWorkDate;
    NSDate *_forcedCurrentDate;
    NSString *_eventType;
    NSHashTable *_observers;
    id <YTWorkerDelegate> _workerDelegate;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <YTWorkerDelegate> workerDelegate; // @synthesize workerDelegate=_workerDelegate;
- (void).cxx_destruct;
- (_Bool)hasEnoughTimeElapsedSinceLastWork;
- (id)currentDate;
- (void)incrementPendingDispatchRequests;
- (void)decrementPendingDispatchRequests;
- (void)dispatchEventsWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2 storedEventCount:(unsigned long long)arg3;
- (void)setLastWorkDate:(id)arg1;
- (void)setForcedCurrentDate:(id)arg1;
- (long long)workerRequirements;
- (void)startWorkWithCompletionBlock:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (void)didStoreEvents:(id)arg1;
- (void)addDelayedEventWorkerObserver:(id)arg1;
- (id)initWithEventType:(id)arg1 eventHandler:(id)arg2 eventConfig:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

