//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastBrowseConnectivityMonitorObserver-Protocol.h"
#import "SPTPodcastBrowseViewModelProvider-Protocol.h"

@class NSString, SPTObserverManager;
@protocol HUBViewModel, SPTDataLoaderCancellationToken, SPTPodcastBrowseConnectivityMonitor, SPTPodcastBrowseViewModelFetcher;

@interface SPTPodcastBrowseViewModelProviderImplementation : NSObject <SPTPodcastBrowseConnectivityMonitorObserver, SPTPodcastBrowseViewModelProvider>
{
    _Bool _refreshDisallowed;
    id <HUBViewModel> _viewModel;
    id <SPTPodcastBrowseViewModelFetcher> _viewModelFetcher;
    SPTObserverManager *_observers;
    id <SPTPodcastBrowseViewModelFetcher> _nextPageFetcher;
    unsigned long long _state;
    id <SPTDataLoaderCancellationToken> _nextPageFetchCancellationToken;
    id <SPTPodcastBrowseConnectivityMonitor> _connectivityMonitor;
    id <HUBViewModel> _initialViewModel;
    id <HUBViewModel> _offlineViewModel;
    id <HUBViewModel> _errorViewModel;
}

@property(nonatomic, getter=isRefreshDisallowed) _Bool refreshDisallowed; // @synthesize refreshDisallowed=_refreshDisallowed;
@property(readonly, nonatomic) id <HUBViewModel> errorViewModel; // @synthesize errorViewModel=_errorViewModel;
@property(readonly, nonatomic) id <HUBViewModel> offlineViewModel; // @synthesize offlineViewModel=_offlineViewModel;
@property(readonly, nonatomic) id <HUBViewModel> initialViewModel; // @synthesize initialViewModel=_initialViewModel;
@property(readonly, nonatomic) id <SPTPodcastBrowseConnectivityMonitor> connectivityMonitor; // @synthesize connectivityMonitor=_connectivityMonitor;
@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> nextPageFetchCancellationToken; // @synthesize nextPageFetchCancellationToken=_nextPageFetchCancellationToken;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) id <SPTPodcastBrowseViewModelFetcher> nextPageFetcher; // @synthesize nextPageFetcher=_nextPageFetcher;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <SPTPodcastBrowseViewModelFetcher> viewModelFetcher; // @synthesize viewModelFetcher=_viewModelFetcher;
@property(retain, nonatomic) id <HUBViewModel> viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)viewModelByAppendingViewModel:(id)arg1 toViewModel:(id)arg2;
- (void)cancelLoadingNextPage;
- (void)connectivityMonitorDidChangeState:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)loadNextPage;
- (void)refresh;
- (void)reload;
- (id)initWithViewModelFetcher:(id)arg1 connectivityMonitor:(id)arg2 initialViewModel:(id)arg3 offlineViewModel:(id)arg4 errorViewModel:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

