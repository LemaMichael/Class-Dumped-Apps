//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class GWALabeledActivityIndicatorView, GWALockingSheetScrollView, NSString, UIScrollView, UIView;
@protocol GOOFlexibleHeader><GOOFlexibleHeaderConfiguration, GWALockingSheetDelegate;

@interface GWALockingSheetViewController : UIViewController <UIScrollViewDelegate, UIViewControllerTransitioningDelegate>
{
    UIView *_dimmingView;
    GWALockingSheetScrollView *_lockingSheetScrollView;
    UIViewController *_contentViewController;
    UIScrollView *_contentScrollView;
    double _topOfContentScrollView;
    _Bool _isFullScreen;
    _Bool _hasLocked;
    double _dismissThreshold;
    id <GWALockingSheetDelegate> _delegate;
    GWALabeledActivityIndicatorView *_activityIndicator;
    UIView<GOOFlexibleHeader><GOOFlexibleHeaderConfiguration> *_headerView;
    double _headerViewHeight;
    UIView *_presentationHeaderBackgroundView;
    UIView *_headerSnapshot;
    double _animationHeaderPercent;
    _Bool _shouldLayoutFullScreen;
    long long _previousOrientation;
    _Bool _enableLocking;
    int _percentageOfScreen;
}

@property(nonatomic) int percentageOfScreen; // @synthesize percentageOfScreen=_percentageOfScreen;
@property(nonatomic) _Bool enableLocking; // @synthesize enableLocking=_enableLocking;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *contentViewController;
- (_Bool)hasLocked;
- (double)dismissThreshold;
- (id)lockingSheetScrollView;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)lockOuterScrollView;
- (void)restoreRealHeaderIfNeeded;
- (void)animateHeaderWithPercent:(double)arg1;
- (void)installPresentationHeaderIfNeededOnViewController:(id)arg1;
- (void)installContentViewController:(id)arg1;
- (void)dismiss;
- (id)scrollView;
- (id)dimmingView;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)passScrollToContentView;
- (void)scrollViewDidScroll:(id)arg1;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForStatusBarHidden;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)stopActivityIndicator;
- (void)showActivityIndicatorWithLabel:(id)arg1;
- (void)goFullscreen;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

