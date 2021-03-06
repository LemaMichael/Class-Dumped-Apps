//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerBaseViewModelDataProvider-Protocol.h"
#import "SCLensExplorerImagesDataStoreProtocol-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSMutableArray, NSString, SCLensExplorerImagesDataStore, SCLensExplorerLensCellViewModelDataProviderConfiguration, SCLensExplorerLensDataStore, SCQueuePerformer, SCUpdateListenerAnnouncer;

@interface SCLensExplorerLensCellViewModelDataProvider : NSObject <SCUpdateListener, SCLensExplorerBaseViewModelDataProvider, SCLensExplorerImagesDataStoreProtocol>
{
    SCLensExplorerImagesDataStore *_imagesDataStore;
    SCLensExplorerLensDataStore *_lensExplorerLensDataStore;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_performer;
    SCLensExplorerLensCellViewModelDataProviderConfiguration *_configuration;
    NSMutableArray *_lensCellViewModels;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) NSMutableArray *lensCellViewModels; // @synthesize lensCellViewModels=_lensCellViewModels;
- (void).cxx_destruct;
- (id)_lensExplorerCellViewModelWithUnlockableId:(id)arg1;
- (id)_convertFromDataModel:(id)arg1;
- (void)cancelOperationsForLensExplorerItem:(id)arg1;
- (id)lensExplorerImageForURL:(id)arg1 preferredSize:(struct CGSize)arg2;
- (id)lensExplorerAnimationForLensItem:(id)arg1 preferredSize:(struct CGSize)arg2;
- (void)_updateLensViewModelsFromDataStore;
- (void)_loadLensViewModel;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)refreshCachedItems;
- (void)clearMemoryCache;
- (_Bool)hasMoreItems;
@property(readonly, copy, nonatomic) NSArray *viewModels;
- (id)initWithLensDataStore:(id)arg1 lensExplorerImagesDataStore:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

