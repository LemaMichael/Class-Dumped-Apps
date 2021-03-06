//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INSSchedulerDelegate-Protocol.h"

@class INSContextRegistry, INSEventSenderStatsDataSource, INSEventValidator, INSPersistentStoreDataDelegate, INSPersistentStoreDataSource, INSScheduler, INSSchedulerDataSourceComposition, NSHashTable, NSString;
@protocol INSLogger, INSTimer, INSTransport;

@interface INSEventSender : NSObject <INSSchedulerDelegate>
{
    id <INSTransport> _transport;
    INSScheduler *_scheduler;
    id <INSLogger> _logger;
    id <INSTimer> _timer;
    NSHashTable *_observers;
    INSContextRegistry *_contextRegistry;
    INSPersistentStoreDataSource *_authenticatedPersistentStoreDataSource;
    INSPersistentStoreDataSource *_nonAuthenticatedPersistentStoreDataSource;
    INSEventSenderStatsDataSource *_eventSenderStatsDataSource;
    INSPersistentStoreDataDelegate *_persistentStoreDataDelegate;
    INSSchedulerDataSourceComposition *_composition;
    INSEventValidator *_validator;
}

+ (id)defaultContexts:(id)arg1;
@property(retain, nonatomic) INSEventValidator *validator; // @synthesize validator=_validator;
@property(retain, nonatomic) INSSchedulerDataSourceComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) INSPersistentStoreDataDelegate *persistentStoreDataDelegate; // @synthesize persistentStoreDataDelegate=_persistentStoreDataDelegate;
@property(retain, nonatomic) INSEventSenderStatsDataSource *eventSenderStatsDataSource; // @synthesize eventSenderStatsDataSource=_eventSenderStatsDataSource;
@property(retain, nonatomic) INSPersistentStoreDataSource *nonAuthenticatedPersistentStoreDataSource; // @synthesize nonAuthenticatedPersistentStoreDataSource=_nonAuthenticatedPersistentStoreDataSource;
@property(retain, nonatomic) INSPersistentStoreDataSource *authenticatedPersistentStoreDataSource; // @synthesize authenticatedPersistentStoreDataSource=_authenticatedPersistentStoreDataSource;
@property(retain, nonatomic) INSContextRegistry *contextRegistry; // @synthesize contextRegistry=_contextRegistry;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) id <INSTimer> timer; // @synthesize timer=_timer;
@property(retain, nonatomic) id <INSLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) INSScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(retain, nonatomic) id <INSTransport> transport; // @synthesize transport=_transport;
- (void).cxx_destruct;
- (void)removeEventObserver:(id)arg1;
- (void)addEventObserver:(id)arg1;
- (void)schedulerDidRequestBackOff;
- (void)schedulerDidRetryBatch:(id)arg1;
- (void)schedulerDidFailBatch:(id)arg1;
- (void)schedulerDidFinishWithSuccessBatch:(id)arg1;
- (void)schedulerDidStartBatch:(id)arg1;
- (void)schedulerDidAddMessageNode:(id)arg1;
- (void)schedulerDidScheduleTimerWithInterval:(double)arg1 attempt:(unsigned long long)arg2;
- (id)version;
- (_Bool)sendNonAuthenticatedMessage:(id)arg1 error:(id *)arg2;
- (_Bool)sendMessage:(id)arg1 error:(id *)arg2;
- (_Bool)sendMessage:(id)arg1 authenticated:(_Bool)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithTransport:(id)arg1 clientId:(id)arg2 logger:(id)arg3 timer:(id)arg4;
- (id)initWithTransport:(id)arg1 clientId:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

