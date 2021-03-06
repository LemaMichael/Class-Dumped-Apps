//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerSectionDataProvider-Protocol.h"
#import "SCSectionDataProviding-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSString, SCEventListenerAnnouncer, SCLensExplorerBaseViewModelDataProvider;
@protocol NSCopying, SCImageDownloading, SCLensExplorerBaseViewModelDataProvider, SCLensExplorerBitmojiImageFetcherProtocol, SCPerforming, SCSectionDataProvidingDelegate;

@interface SCLensChallengesSnapsSectionDataProvider : NSObject <SCUpdateListener, SCSectionDataProviding, SCLensExplorerSectionDataProvider>
{
    id <SCImageDownloading> _imageDownloader;
    id <SCLensExplorerBitmojiImageFetcherProtocol> _bitmojiImageFetcher;
    NSArray *_viewModels;
    SCLensExplorerBaseViewModelDataProvider *_cellViewModelDataProvider;
    SCEventListenerAnnouncer *_eventAnnouncer;
    long long _dataLoadingStatus;
    unsigned long long _minNumberOfColumns;
    id <SCSectionDataProvidingDelegate> _dataProviderDelegate;
    NSObject<NSCopying> *_sectionDataModel;
    id <SCPerforming> _updateQueuePerformer;
    id <SCLensExplorerBaseViewModelDataProvider> _viewModelDataProvider;
}

+ (id)announcerIdentifier;
@property(readonly, nonatomic) id <SCLensExplorerBaseViewModelDataProvider> viewModelDataProvider; // @synthesize viewModelDataProvider=_viewModelDataProvider;
@property(retain, nonatomic) id <SCPerforming> updateQueuePerformer; // @synthesize updateQueuePerformer=_updateQueuePerformer;
@property(copy, nonatomic) NSObject<NSCopying> *sectionDataModel; // @synthesize sectionDataModel=_sectionDataModel;
@property(nonatomic) __weak id <SCSectionDataProvidingDelegate> dataProviderDelegate; // @synthesize dataProviderDelegate=_dataProviderDelegate;
- (void).cxx_destruct;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_setViewModels:(id)arg1 isLoadingCellNeeded:(_Bool)arg2;
- (void)_configureLensChallengesCollectionViewCell:(id)arg1;
- (void)_updateItemsFromDataStore;
- (id)configurationBlocksByReuseIdentifier;
- (id)supplementaryViewModels;
- (long long)dataLoadingStatus;
- (id)contentCellClassesByReuseIdentifier;
- (id)containerCellViewModelsForIndexPaths:(id)arg1;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (void)tearDown;
- (void)setUp;
- (id)initWithCellViewModelDataProvider:(id)arg1 imageDownloader:(id)arg2 bitmojiImageFetcher:(id)arg3 minNumberOfColumns:(unsigned long long)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

