//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTBrowseService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPTBrowseUIService, SPTContainerService, SPTFreeTierService, SPTGLUEService, SPTHubFrameworkService, SPTNetworkService, SPTOnDemandService, SPTPerformanceMetricsService, SPTPodcastFeature, SPTPodcastUIService, SPTPodcastUtteranceSurveyService, SPTRadioService, SPTVisualRefreshIntegrationService;

@interface SPTBrowseServiceImplementation : NSObject <SPTBrowseService>
{
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTBrowseUIService> _browseUIService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTFreeTierService> _freeTierService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTRadioService> _radioService;
    id <SPTVisualRefreshIntegrationService> _visualRefreshIntegrationService;
    id <SPTPodcastUIService> _podcastUIService;
    id <SPTPerformanceMetricsService> _performanceMetricsService;
    id <SPTPodcastUtteranceSurveyService> _podcastUtteranceSurveyService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTPodcastUtteranceSurveyService> podcastUtteranceSurveyService; // @synthesize podcastUtteranceSurveyService=_podcastUtteranceSurveyService;
@property(nonatomic) __weak id <SPTPerformanceMetricsService> performanceMetricsService; // @synthesize performanceMetricsService=_performanceMetricsService;
@property(nonatomic) __weak id <SPTPodcastUIService> podcastUIService; // @synthesize podcastUIService=_podcastUIService;
@property(nonatomic) __weak id <SPTVisualRefreshIntegrationService> visualRefreshIntegrationService; // @synthesize visualRefreshIntegrationService=_visualRefreshIntegrationService;
@property(nonatomic) __weak id <SPTRadioService> radioService; // @synthesize radioService=_radioService;
@property(nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTBrowseUIService> browseUIService; // @synthesize browseUIService=_browseUIService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)pageIdentifierForURI:(id)arg1;
- (void)setNavigationBarVisible:(_Bool)arg1 inViewModelBuilder:(id)arg2;
- (id)makeGenreErrorStateViewModel;
- (id)makeBrowseErrorStateViewModel;
- (id)makeGenreOfflineStateViewModel;
- (id)makeBrowseOfflineStateViewModel;
- (id)makeErrorOverlayViewModelWithNavigationBarVisible:(_Bool)arg1;
- (id)makeOfflineOverlayViewModelWithNavigationBarVisible:(_Bool)arg1;
- (id)makeOverlayViewModelWithTitle:(id)arg1 subtitle:(id)arg2 reloadButtonVisible:(_Bool)arg3 navigationBarVisible:(_Bool)arg4 viewModelType:(id)arg5;
- (id)pageIdentifierFromURI:(id)arg1;
- (id)makeLoadingLoggerWithURI:(id)arg1;
- (id)makeViewControllerWithURI:(id)arg1;
- (id)makeGenreInitialViewModel;
- (id)makeBrowseInitialViewModel;
- (id)makeViewModelProviderForURI:(id)arg1;
- (id)makeGenreViewModelProviderWithGenre:(id)arg1 pageURI:(id)arg2;
- (id)makeBrowseViewModelProviderWithPageURI:(id)arg1;
- (id)makeGenreViewModelFetcherWithGenre:(id)arg1 pageURI:(id)arg2;
- (id)makeBrowseViewModelFetcherWithPageURI:(id)arg1;
- (id)makeLogger;
- (id)makeConnectivityMonitor;
- (id)makeViewModelBuilderProvider;
- (id)makeCommandHandlerWithURI:(id)arg1 viewModelProvider:(id)arg2;
- (id)makeShareDragDelegateFactory;
- (id)makeImageLoaderFactory;
- (id)makeComponentLayoutManager;
- (id)makeComponentRegistry;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

