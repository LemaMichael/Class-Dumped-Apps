//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString, SCConfigLRUCache, SCConfigUserAuthentication, SCDocObjectContext, SCExperimentDataListenerAnnouncer, SCGrpcService, SCQueuePerformer;

@interface SCConfigRepository : NSObject
{
    SCQueuePerformer *_performer;
    SCConfigUserAuthentication *_userAuthentication;
    SCDocObjectContext *_docObjectContext;
    NSString *_etag;
    NSDate *_lastUpdateTimestamp;
    SCConfigLRUCache *_configLRUCache;
    _Bool _grpcLibEnabled;
    SCGrpcService *_grpcService;
    SCExperimentDataListenerAnnouncer *_expDataListenerAnnouncer;
    unsigned long long _syncCounter;
}

- (void).cxx_destruct;
- (_Bool)_k2CofPushToABEnabled;
- (id)_getLRUCache;
- (id)_getLastUpdateTimestamp;
- (id)_getEtag;
- (_Bool)ignoreAssertion;
- (void)_handleExperimentDataWithChecksum:(int)arg1 transactionContext:(id)arg2;
- (void)removeListener:(id)arg1;
- (_Bool)addListener:(id)arg1;
- (void)_updateDBWithCofConfigTargetingResponse:(id)arg1 fromUserSession:(_Bool)arg2;
- (void)_deleteDBConfig:(id)arg1 transactionContext:(id)arg2;
- (void)_deleteEtagFromDBWithTransactionContext:(id)arg1;
- (void)_updateEtagDB:(id)arg1 lastUpdateTimestampInSeconds:(double)arg2 transactionContext:(id)arg3;
- (void)_readEtagFromDB;
- (void)_updateDBWithConfigResult:(id)arg1 transactionContext:(id)arg2 secondForNow:(double)arg3;
- (id)convertFrom:(id)arg1 secondsForNow:(double)arg2;
- (id)_getConfigsFromDBForConfigKey:(id)arg1;
- (void)_refreshConfigsFromServerIfNeeded:(_Bool)arg1 cofTriggerEventType:(int)arg2 appState:(int)arg3 syncCounter:(unsigned long long)arg4;
- (_Bool)_isRefreshPreferred;
- (void)_appWillEnterForeground;
- (void)_authenticatedCall:(id)arg1;
- (void)_unauthenticatedCall:(id)arg1;
- (void)_callCofEngine:(int)arg1 appState:(int)arg2 syncCounter:(unsigned long long)arg3;
- (void)_processLoginResponse:(id)arg1;
- (void)_refreshCacheWithUpdateConfigIds:(id)arg1;
- (id)_validateConfigRulesForConfigKey:(id)arg1 configsInDBFormat:(id)arg2;
- (void)findConfigsWithConfigKey:(id)arg1 callbackPerformer:(id)arg2 callbackBlock:(CDUnknownBlockType)arg3;
- (id)findConfigsWithConfigKeySync:(id)arg1 readThroughDBIfCacheMissed:(_Bool)arg2;
- (void)registerUserAuthentication:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDocObjectContext:(id)arg1;

@end

