//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTGlassContainerView.h"

#import "UIGestureRecognizerDelegate.h"
#import "YTNGWatchClassicBoxAnimationDelegate.h"
#import "YTNGWatchMiniPlayerAnimationDelegate.h"
#import "YTPageStyleProvider.h"
#import "YTPageStyling.h"

@class CAGradientLayer, GIMMe, NSHashTable, NSString, UIView, YTInterruptablePanGestureRecognizer, YTNGWatchFlowView, YTNGWatchMiniBarView;

@interface YTNGWatchLayerView : YTGlassContainerView <UIGestureRecognizerDelegate, YTNGWatchClassicBoxAnimationDelegate, YTNGWatchMiniPlayerAnimationDelegate, YTPageStyling, YTPageStyleProvider>
{
    UIView *_gradientContainerView;
    CAGradientLayer *_watchMiniBarBottomGradient;
    UIView *_gradientPivotBarSeparatorView;
    long long _pageStyle;
    UIView *_backgroundScrim;
    UIView *_statusBarView;
    _Bool _shouldCompleteTransition;
    _Bool _isInteractionInProgress;
    double _completedFraction;
    YTInterruptablePanGestureRecognizer *_embeddedDownwardPanGestureRecognizer;
    YTInterruptablePanGestureRecognizer *_embeddedUpwardPanGestureRecognizer;
    double _miniPlayerInitialToastOffset;
    id <YTNGWatchLayerViewAnimationDelegate> _animationDelegate;
    id <YTNGWatchAnimation> _animation;
    NSHashTable *_expansionObservers;
    int _gestureType;
    GIMMe *_gimme;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
    double _watchMiniBarViewAppBottomOffset;
    YTNGWatchMiniBarView *_watchMiniBarView;
    YTNGWatchFlowView *_watchFlowView;
    UIView *_queuePanelView;
    UIView *_watchMiniBarUserEducationView;
    id <YTNGWatchMiniBarViewSizeProvider> _watchMiniBarViewSizeProvider;
}

@property(nonatomic) __weak id <YTNGWatchMiniBarViewSizeProvider> watchMiniBarViewSizeProvider; // @synthesize watchMiniBarViewSizeProvider=_watchMiniBarViewSizeProvider;
@property(readonly, nonatomic) UIView *watchMiniBarUserEducationView; // @synthesize watchMiniBarUserEducationView=_watchMiniBarUserEducationView;
@property(retain, nonatomic) UIView *queuePanelView; // @synthesize queuePanelView=_queuePanelView;
@property(retain, nonatomic) YTNGWatchFlowView *watchFlowView; // @synthesize watchFlowView=_watchFlowView;
@property(retain, nonatomic) YTNGWatchMiniBarView *watchMiniBarView; // @synthesize watchMiniBarView=_watchMiniBarView;
@property(nonatomic) double watchMiniBarViewAppBottomOffset; // @synthesize watchMiniBarViewAppBottomOffset=_watchMiniBarViewAppBottomOffset;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateGradientColor;
- (void)positionUserEducationViewWithMiniBarFrame:(struct CGRect)arg1;
- (void)setWatchMiniBarSizeAndCenterWithFrame:(struct CGRect)arg1;
- (void)setWatchMiniBarCenterWithFrame:(struct CGRect)arg1;
- (_Bool)isFullWidthMinibarEnabled;
@property(readonly, nonatomic) long long pageStyle;
- (struct CGRect)gradientContainerFrame;
@property(readonly, nonatomic) struct CGRect miniBarFrame;
- (_Bool)isAccessibilityElement;
- (id)watchCollectionViewController;
- (double)flexiblePlayerHeight;
- (void)didUpdateExpansionFraction:(double)arg1;
- (double)watchMiniPlayerViewAppBottomOffset;
- (struct CGRect)miniPlayerFrame;
- (struct CGRect)watchPageFrame;
- (_Bool)areNGWPerformanceFixesEnabled;
- (void)resetMiniPlayerInitialToastOffset;
- (void)showBackgroundScrim:(_Bool)arg1;
- (double)toastOffsetY;
- (struct CGRect)minimizedWatchPageFrame;
- (struct CGRect)expandedWatchPageFrame;
- (void)notifyObserversAnimationStateDidChange:(_Bool)arg1;
- (void)collapseWatchFlowWithCompletion:(CDUnknownBlockType)arg1 isCancellation:(_Bool)arg2;
- (void)prepareForWatchFlowCollapse;
- (void)expandWatchFlowWithCompletion:(CDUnknownBlockType)arg1 isCancellation:(_Bool)arg2;
- (void)prepareForWatchFlowExpansion;
- (void)endInteractionInProgress;
- (void)handleDownwardGesture:(id)arg1;
- (void)handleUpwardGesture:(id)arg1;
- (void)setWatchFlowViewFrame;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)isAnimating;
- (void)collapseWatchFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)expandWatchFlowWithCompletion:(CDUnknownBlockType)arg1;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) struct CGSize expandedPlayerSize;
@property(readonly, nonatomic) double pivotBarAnimationCollapseCoefficient;
- (_Bool)shouldShowStatusBar;
- (_Bool)prioritizePlayerOnMiniplayerDuringMiniplayerTransitions;
- (_Bool)prioritizePlayerOnWatchPageDuringMiniplayerTransitions;
- (void)updateAnimationForMiniPlayerLayout:(long long)arg1;
- (void)removeWatchViewExpansionObserver:(id)arg1;
- (void)addWatchViewExpansionObserver:(id)arg1;
@property(readonly, nonatomic) double expansionFraction;
- (void)setWatchMiniBarGradientAlpha:(double)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 animationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
