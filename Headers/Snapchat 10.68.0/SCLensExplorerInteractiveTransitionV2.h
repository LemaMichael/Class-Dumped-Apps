//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerInteractiveTransitionProtocol-Protocol.h"

@class NSString, UIPercentDrivenInteractiveTransition, UIViewController;
@protocol SCLensExplorerTransitioningViewControllerProtocol;

@interface SCLensExplorerInteractiveTransitionV2 : NSObject <SCLensExplorerInteractiveTransitionProtocol>
{
    double _dismissThreshold;
    double _currentOffset;
    UIViewController<SCLensExplorerTransitioningViewControllerProtocol> *_viewController;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    _Bool _shouldBeStarted;
    _Bool _started;
    _Bool _shouldCancelOnVelocity;
    _Bool _shouldCompleteOnVelocity;
}

- (void).cxx_destruct;
- (void)handlePresentationCanceled;
- (void)handlePresentationEnd;
- (void)handlePresentationWithOffset:(double)arg1 velocity:(double)arg2;
- (void)handlePresentationStart;
- (void)handleEndDraggingFromScrollView:(id)arg1;
- (void)handleBeginDraggingFromScrollView:(id)arg1;
- (void)handleScrollFromScrollView:(id)arg1;
- (void)_complete;
- (void)_setPercentage:(double)arg1;
- (void)_reset;
- (void)attachToViewController:(id)arg1;
@property(readonly, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition;
- (id)initWithDismissThreshold:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

