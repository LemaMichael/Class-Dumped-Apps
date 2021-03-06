//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "SCLensUnlockableDataStoreProtocol-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUnlockFilterControllerDelegate-Protocol.h"
#import "SCUnlockLensControllerDelegate-Protocol.h"
#import "SCUnlockableDataFetcherDelegate-Protocol.h"
#import "SCUserSessionScoped-Protocol.h"

@class NSMutableDictionary, NSString, SCGeoFilter, SCSessionRequestManager, SCUnlockFilterController, SCUnlockLensController, SCUnlockableDataFetcher;
@protocol SCUnlockableLensDataStoreFilterProtocol;

@interface SCUnlockableDataStore : NSObject <SCUserSessionScoped, NSCoding, SCUnlockLensControllerDelegate, SCUnlockableDataFetcherDelegate, SCUnlockFilterControllerDelegate, SCTraceEnabled, SCLensUnlockableDataStoreProtocol>
{
    NSMutableDictionary *_unlockedLensDataStore;
    NSMutableDictionary *_unlockedFilterDataStore;
    long long _featuredLensesToDisplayCount;
    SCGeoFilter *_recentUnlockedFilter;
    SCUnlockLensController *_unlockLensController;
    SCUnlockFilterController *_unlockableFilterController;
    SCUnlockableDataFetcher *_unlockableDataFetcher;
    SCSessionRequestManager *_requestManager;
    id <SCUnlockableLensDataStoreFilterProtocol> _creatorBlacklistFilter;
    id <SCUnlockableLensDataStoreFilterProtocol> _removedLensesFilter;
}

+ (void)removeSavedState;
+ (id)restoreSavedState;
+ (id)path;
@property(retain, nonatomic) id <SCUnlockableLensDataStoreFilterProtocol> removedLensesFilter; // @synthesize removedLensesFilter=_removedLensesFilter;
@property(retain, nonatomic) id <SCUnlockableLensDataStoreFilterProtocol> creatorBlacklistFilter; // @synthesize creatorBlacklistFilter=_creatorBlacklistFilter;
@property(retain, nonatomic) SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) SCUnlockableDataFetcher *unlockableDataFetcher; // @synthesize unlockableDataFetcher=_unlockableDataFetcher;
@property(retain, nonatomic) SCUnlockFilterController *unlockableFilterController; // @synthesize unlockableFilterController=_unlockableFilterController;
@property(retain, nonatomic) SCUnlockLensController *unlockLensController; // @synthesize unlockLensController=_unlockLensController;
@property(retain, nonatomic) SCGeoFilter *recentUnlockedFilter; // @synthesize recentUnlockedFilter=_recentUnlockedFilter;
@property(readonly, nonatomic) long long featuredLensesToDisplayCount; // @synthesize featuredLensesToDisplayCount=_featuredLensesToDisplayCount;
- (void).cxx_destruct;
- (id)unlockLensUpdatedNotificationKey;
- (id)unlockLensUpdatedNotificationName;
- (void)_filterOutLenses;
- (_Bool)lensMetadataFetcherIsActiveLensesUser:(id)arg1;
- (void)unlockableDataFetcher:(id)arg1 didFailWithError:(id)arg2;
- (void)unlockableDataFetcher:(id)arg1 didFetchData:(id)arg2;
- (void)unlockFilterController:(id)arg1 didUpdateUnlockedFilterData:(id)arg2;
- (void)unlockLensController:(id)arg1 didUpdateScanUnlockedLensesData:(id)arg2;
- (void)_setLensObject:(id)arg1 forKey:(id)arg2;
- (void)_setFilterObject:(id)arg1 forKey:(id)arg2;
- (id)filterObjectForKey:(id)arg1;
- (void)clearExpiredLens;
- (void)clearExpiredFilters;
- (id)lensObjectForKey:(id)arg1;
- (void)replacePlaceholderLens:(id)arg1 withUnlockedLens:(id)arg2;
- (void)removeUnlockedLens:(id)arg1;
- (void)addUnlockedLens:(id)arg1;
- (void)invalidateUnlockableIds:(id)arg1;
- (void)updateData;
- (void)updateDataIfNecessary;
- (void)_ensureNonNilObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)clear;
- (void)_subscribeForNotifications;
- (void)saveState;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

