//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GLUEButton.h"

@class NSLayoutConstraint, NSString, UIView;
@protocol GLUEAnimationLoading><GLUEAnimationControlling;

@interface SPTLoginLoadingActionButton : GLUEButton
{
    double _initialHeight;
    unsigned long long _loadingState;
    NSString *_initialTitle;
    NSLayoutConstraint *_widthConstraint;
    struct UIView *_spinnerAnimationView;
}

@property(retain, nonatomic) UIView<GLUEAnimationLoading><GLUEAnimationControlling> *spinnerAnimationView; // @synthesize spinnerAnimationView=_spinnerAnimationView;
@property(retain, nonatomic) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(copy, nonatomic) NSString *initialTitle; // @synthesize initialTitle=_initialTitle;
@property(nonatomic) unsigned long long loadingState; // @synthesize loadingState=_loadingState;
@property(nonatomic) double initialHeight; // @synthesize initialHeight=_initialHeight;
- (void).cxx_destruct;
- (void)stopSpinnerAnimation;
- (void)setupSpinnerAnimation;
- (void)restoreState;
- (void)saveCurrentState;
- (void)stopLoading;
- (void)startLoading;

@end
