//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCProfileSwipeTransitionAnimatorProtocol-Protocol.h"

@class NSString, SCLazy, SCPassthroughViewsCoordinator, UIView;

@interface SCUnifiedProfileSwipeTransitionController : NSObject <SCProfileSwipeTransitionAnimatorProtocol>
{
    SCPassthroughViewsCoordinator *_passthroughCoordinator;
    SCLazy *_tintView;
    CDUnknownBlockType _animateAlongSideAnimationHandler;
    CDUnknownBlockType _animateAlongSideCompletionHandler;
    UIView *_targetView;
    _Bool _presenting;
}

@property(nonatomic) _Bool presenting; // @synthesize presenting=_presenting;
- (void).cxx_destruct;
- (void)_setupProfileTransitioning:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)completeTransition:(_Bool)arg1;
- (void)resetTransplantedViews;
- (void)updateFractionComplete:(double)arg1;
- (void)animateAlongsideTransition:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPassthroughViews:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
