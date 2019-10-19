//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDataLoaderFactory, SPTFreeTierTasteOnboardingCurator, SPTFreeTierTasteOnboardingDeeplinkStore, SPTFreeTierTasteOnboardingLoggerFactory, SPTFreeTierTasteOnboardingPresentationConfiguration, SPTFreeTierTasteOnboardingTheme, SPTNetworkConnectivityController, SPTPopupManager;
@protocol SPTAudioPreviewPlayer, SPTCollectionPlatform, SPTFollowModelFactory, SPTFreeTierTasteOnboardingTestManager, SPTGLUEImageLoaderFactory, SPTInstrumentationModalPresentationMonitor, SPTLoginStateController, SPTMetaViewController, SPTModalPresentationController, SPTPerformanceMetricsViewLoggerFactory;

@interface SPTFreeTierTasteOnboardingFlowConfiguration : NSObject
{
    SPTFreeTierTasteOnboardingTheme *_theme;
    SPTFreeTierTasteOnboardingCurator *_curator;
    SPTFreeTierTasteOnboardingLoggerFactory *_loggerFactory;
    id <SPTMetaViewController> _metaViewController;
    id <SPTModalPresentationController> _modalPresentationController;
    SPTPopupManager *_popupManager;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTGLUEImageLoaderFactory> _imageLoaderFactory;
    id <SPTPerformanceMetricsViewLoggerFactory> _viewLoggerFactory;
    id <SPTFollowModelFactory> _followModelFactory;
    id <SPTCollectionPlatform> _collectionPlatform;
    id <SPTAudioPreviewPlayer> _previewPlayer;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTFreeTierTasteOnboardingTestManager> _testManager;
    id <SPTLoginStateController> _loginStateController;
    id <SPTInstrumentationModalPresentationMonitor> _modalPresentationMonitor;
    SPTFreeTierTasteOnboardingDeeplinkStore *_deeplinkStore;
    SPTFreeTierTasteOnboardingPresentationConfiguration *_presentationConfiguration;
}

@property(readonly, nonatomic) SPTFreeTierTasteOnboardingPresentationConfiguration *presentationConfiguration; // @synthesize presentationConfiguration=_presentationConfiguration;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingDeeplinkStore *deeplinkStore; // @synthesize deeplinkStore=_deeplinkStore;
@property(readonly, nonatomic) id <SPTInstrumentationModalPresentationMonitor> modalPresentationMonitor; // @synthesize modalPresentationMonitor=_modalPresentationMonitor;
@property(readonly, nonatomic) id <SPTLoginStateController> loginStateController; // @synthesize loginStateController=_loginStateController;
@property(readonly, nonatomic) id <SPTFreeTierTasteOnboardingTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) id <SPTAudioPreviewPlayer> previewPlayer; // @synthesize previewPlayer=_previewPlayer;
@property(readonly, nonatomic) id <SPTCollectionPlatform> collectionPlatform; // @synthesize collectionPlatform=_collectionPlatform;
@property(readonly, nonatomic) id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(readonly, nonatomic) id <SPTPerformanceMetricsViewLoggerFactory> viewLoggerFactory; // @synthesize viewLoggerFactory=_viewLoggerFactory;
@property(readonly, nonatomic) id <SPTGLUEImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) SPTPopupManager *popupManager; // @synthesize popupManager=_popupManager;
@property(readonly, nonatomic) id <SPTModalPresentationController> modalPresentationController; // @synthesize modalPresentationController=_modalPresentationController;
@property(readonly, nonatomic) id <SPTMetaViewController> metaViewController; // @synthesize metaViewController=_metaViewController;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingLoggerFactory *loggerFactory; // @synthesize loggerFactory=_loggerFactory;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingCurator *curator; // @synthesize curator=_curator;
@property(readonly, nonatomic) SPTFreeTierTasteOnboardingTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)initWithTheme:(id)arg1 curator:(id)arg2 loggerFactory:(id)arg3 metaViewController:(id)arg4 modalPresentationController:(id)arg5 popupManager:(id)arg6 dataLoaderFactory:(id)arg7 imageLoaderFactory:(id)arg8 viewLoggerFactory:(id)arg9 followModelFactory:(id)arg10 collectionPlatform:(id)arg11 previewPlayer:(id)arg12 networkConnectivityController:(id)arg13 testManager:(id)arg14 loginStateController:(id)arg15 modalPresentationMonitor:(id)arg16 deeplinkStore:(id)arg17 presentationConfiguration:(id)arg18;

@end
