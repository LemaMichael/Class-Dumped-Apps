//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAdGoToEndcardTransitionable-Protocol.h"
#import "FBAdReportingCoordinatorDelegate-Protocol.h"
#import "FBRewardedVideoAdEndViewDelegate-Protocol.h"
#import "FBRewardedVideoAdInternalController-Protocol.h"
#import "FBRewardedVideoAdNativeNoMediaViewDelegate-Protocol.h"
#import "FBRewardedVideoAdNativeScreenshotViewDelegate-Protocol.h"

@class FBAdReportingCoordinator, FBInterstitialAdToolbarView, FBRewardedVideoAdEndView, FBRewardedVideoAdNativeNoMediaView, FBRewardedVideoAdNativeScreenshotView, NSString, UIView;
@protocol FBRewardedVideoAdEndCardInternalDelegate;

@interface FBRewardedVideoAdEndCardInternal : UIViewController <FBAdReportingCoordinatorDelegate, FBRewardedVideoAdInternalController, FBRewardedVideoAdEndViewDelegate, FBRewardedVideoAdNativeScreenshotViewDelegate, FBRewardedVideoAdNativeNoMediaViewDelegate, FBAdGoToEndcardTransitionable>
{
    _Bool _shouldFadeInCloseButton;
    _Bool _isAutoRotateEnabled;
    _Bool _hasAppearedBefore;
    id <FBRewardedVideoAdEndCardInternalDelegate> _delegate;
    FBRewardedVideoAdEndView *_endView;
    FBRewardedVideoAdNativeScreenshotView *_nativeScreenshotView;
    FBRewardedVideoAdNativeNoMediaView *_nativeNoMediaView;
    FBInterstitialAdToolbarView *_toolbarView;
    long long _minViewabilityPercentage;
    FBAdReportingCoordinator *_reportingCoordinator;
}

+ (void)initialize;
@property(retain, nonatomic) FBAdReportingCoordinator *reportingCoordinator; // @synthesize reportingCoordinator=_reportingCoordinator;
@property(nonatomic) _Bool hasAppearedBefore; // @synthesize hasAppearedBefore=_hasAppearedBefore;
@property(nonatomic) _Bool isAutoRotateEnabled; // @synthesize isAutoRotateEnabled=_isAutoRotateEnabled;
@property(nonatomic) long long minViewabilityPercentage; // @synthesize minViewabilityPercentage=_minViewabilityPercentage;
@property(retain, nonatomic) FBInterstitialAdToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(nonatomic) __weak FBRewardedVideoAdNativeNoMediaView *nativeNoMediaView; // @synthesize nativeNoMediaView=_nativeNoMediaView;
@property(nonatomic) __weak FBRewardedVideoAdNativeScreenshotView *nativeScreenshotView; // @synthesize nativeScreenshotView=_nativeScreenshotView;
@property(nonatomic) __weak FBRewardedVideoAdEndView *endView; // @synthesize endView=_endView;
@property(nonatomic) __weak id <FBRewardedVideoAdEndCardInternalDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldFadeInCloseButton; // @synthesize shouldFadeInCloseButton=_shouldFadeInCloseButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIView *adDetailsView;
- (void)adReportingCoordinatorDidCancelFlow:(id)arg1;
- (void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3;
- (void)rewardedVideoAdNativeNoMediaViewDidTerminate:(id)arg1;
- (void)rewardedVideoAdNativeNoMediaView:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAdNativeNoMediaViewWillClose:(id)arg1;
- (void)rewardedVideoAdNativeNoMediaViewClicked:(id)arg1;
- (void)rewardedVideoAdNativeScreenshotViewDidTerminate:(id)arg1;
- (void)rewardedVideoAdNativeScreenshotView:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAdNativeScreenshotViewWillClose:(id)arg1;
- (void)rewardedVideoAdNativeScreenshotViewClicked:(id)arg1;
- (void)rewardedVideoAdEndViewDidTerminate:(id)arg1;
- (void)rewardedVideoAdEndView:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAdEndViewWillClose:(id)arg1;
- (void)rewardedVideoAdEndViewClicked:(id)arg1;
- (void)fadeInCloseButtonWithDuration:(double)arg1 delay:(double)arg2;
- (void)hideCloseButton;
@property(readonly, nonatomic, getter=isTerminated) _Bool terminated;
- (void)setupToolbarViewWithRootViewController:(id)arg1 adDataModel:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (id)initWithPlacementID:(id)arg1 adData:(id)arg2 placementDefinition:(id)arg3 minViewability:(int)arg4 rootViewController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

