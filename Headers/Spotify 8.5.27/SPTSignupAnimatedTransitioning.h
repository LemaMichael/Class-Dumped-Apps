//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, SPTSignupInteractiveTransition, UINavigationController;

@interface SPTSignupAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning>
{
    long long _operation;
    SPTSignupInteractiveTransition *_interactiveTransition;
    UINavigationController *_navigationController;
}

@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) SPTSignupInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (double)xValueForViewKey:(id)arg1 originalXValue:(double)arg2 superViewWidth:(double)arg3 isValueBeforeAnimation:(_Bool)arg4 operation:(long long)arg5;
- (void)positionFrameForView:(id)arg1 superViewWidth:(double)arg2 isFrameBeforeAnimation:(_Bool)arg3 operation:(long long)arg4;
- (double)alphaValueForViewKey:(id)arg1 isValueBeforeAnimation:(_Bool)arg2;
- (void)animateTransition:(id)arg1;
- (void)animateTransition:(id)arg1 fromSignupView:(id)arg2 toSignupView:(id)arg3;
- (void)animateTransition:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (double)transitionDuration:(id)arg1;
- (id)initWithNavigationController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

