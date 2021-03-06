//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETGroupAwareCollectionViewController.h"

#import "JETCustomContextMenuProvider-Protocol.h"
#import "JETTopBarViewDelegate-Protocol.h"
#import "QTMCollectionViewStyleDelegate-Protocol.h"

@class JETInsightsDataCache, JETNetworkDetailsUsageWindowSelectorContentViewObject, JETNetworkDetailsWiFiOverviewContentViewObject, JETRightAlignedTextContentViewObject, JETTopBarView, NSString, NSTimer;

@interface JETNetworkDetailsViewController : JETGroupAwareCollectionViewController <QTMCollectionViewStyleDelegate, JETTopBarViewDelegate, JETCustomContextMenuProvider>
{
    _Bool _showMacAddress;
    JETNetworkDetailsWiFiOverviewContentViewObject *_networkItem;
    JETInsightsDataCache *_cache;
    JETTopBarView *_topBarView;
    JETNetworkDetailsUsageWindowSelectorContentViewObject *_windowSelector;
    JETRightAlignedTextContentViewObject *_usageUnavailableHeader;
    NSTimer *_refreshTimer;
    unsigned long long _refreshRequestCounter;
    NSString *_thisStationID;
}

@property(retain, nonatomic) NSString *thisStationID; // @synthesize thisStationID=_thisStationID;
@property(nonatomic) unsigned long long refreshRequestCounter; // @synthesize refreshRequestCounter=_refreshRequestCounter;
@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) JETRightAlignedTextContentViewObject *usageUnavailableHeader; // @synthesize usageUnavailableHeader=_usageUnavailableHeader;
@property(retain, nonatomic) JETNetworkDetailsUsageWindowSelectorContentViewObject *windowSelector; // @synthesize windowSelector=_windowSelector;
@property(retain, nonatomic) JETTopBarView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) JETInsightsDataCache *cache; // @synthesize cache=_cache;
@property(nonatomic) _Bool showMacAddress; // @synthesize showMacAddress=_showMacAddress;
@property(retain, nonatomic) JETNetworkDetailsWiFiOverviewContentViewObject *networkItem; // @synthesize networkItem=_networkItem;
- (void).cxx_destruct;
- (id)highestUsageStation:(id)arg1;
- (void)addCustomContextMenuActionsToActionSheet:(id)arg1;
- (void)stationItemTapped:(id)arg1;
- (void)networkItemTapped;
- (void)priorityDeviceButtonTapped;
- (unsigned long long)collectionView:(id)arg1 inkTouchStyleAtIndexPath:(id)arg2;
- (unsigned long long)collectionView:(id)arg1 cellDividerStyleForSection:(long long)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)topBarTapped;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)getNetworkDetailsViewObjects:(id)arg1;
- (void)refreshStationList:(id)arg1;
- (void)populateModelWithStations:(id)arg1 usageWindow:(id)arg2 requestCounter:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleFetchFailureWithError:(id)arg1 requestCounter:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateHeaderItem;
- (void)refreshNetworkDetails:(_Bool)arg1 shouldShowProgressBar:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)stopPeriodicRefresh;
- (void)periodicRefreshTriggered;
- (void)updateThisStationItem;
- (void)startPeriodicRefresh;
- (id)initWithUserState:(id)arg1 group:(id)arg2;
- (id)initWithUserState:(id)arg1 group:(id)arg2 insightsCache:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

