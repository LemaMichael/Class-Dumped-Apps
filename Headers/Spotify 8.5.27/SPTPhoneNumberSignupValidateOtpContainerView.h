//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"
#import "SPTPhoneNumberSignupInputFieldStackViewDelegate-Protocol.h"
#import "SPTPhoneNumberSignupKeyboardShowingView-Protocol.h"
#import "SPTSignupAnimatableViewProtocol-Protocol.h"

@class GLUEButton, GLUEGradientView, GLUELabel, NSLayoutConstraint, NSString, SPTLoginLoadingActionButton, SPTPhoneNumberSignupBannerView, SPTPhoneNumberSignupInputFieldStackView, SPTPhoneNumberSignupValidateOtpContainerViewStyle, UIScrollView;
@protocol GLUEStyle, SPTPhoneNumberSignupValidateOtpContainerViewDelegate;

@interface SPTPhoneNumberSignupValidateOtpContainerView : UIView <SPTPhoneNumberSignupInputFieldStackViewDelegate, SPTPhoneNumberSignupKeyboardShowingView, GLUEStyleable, SPTSignupAnimatableViewProtocol>
{
    NSString *_transitionContextViewKey;
    double _animatableContentViewOriginalX;
    UIScrollView *_scrollView;
    UIView *_containerView;
    GLUEGradientView *_backgroundGradientView;
    GLUELabel *_titleLabel;
    GLUELabel *_subtitleLabel;
    SPTLoginLoadingActionButton *_nextButton;
    GLUEButton *_resendSMSButton;
    GLUEButton *_editPhoneNumberButton;
    id <SPTPhoneNumberSignupValidateOtpContainerViewDelegate> _delegate;
    SPTPhoneNumberSignupValidateOtpContainerViewStyle<GLUEStyle> *_style;
    SPTPhoneNumberSignupInputFieldStackView *_inputFieldStackView;
    SPTPhoneNumberSignupBannerView *_bannerView;
    NSLayoutConstraint *_bannerViewBottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bannerViewBottomConstraint; // @synthesize bannerViewBottomConstraint=_bannerViewBottomConstraint;
@property(retain, nonatomic) SPTPhoneNumberSignupBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) SPTPhoneNumberSignupInputFieldStackView *inputFieldStackView; // @synthesize inputFieldStackView=_inputFieldStackView;
@property(retain, nonatomic) SPTPhoneNumberSignupValidateOtpContainerViewStyle<GLUEStyle> *style; // @synthesize style=_style;
@property(readonly, nonatomic) __weak id <SPTPhoneNumberSignupValidateOtpContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GLUEButton *editPhoneNumberButton; // @synthesize editPhoneNumberButton=_editPhoneNumberButton;
@property(retain, nonatomic) GLUEButton *resendSMSButton; // @synthesize resendSMSButton=_resendSMSButton;
@property(retain, nonatomic) SPTLoginLoadingActionButton *nextButton; // @synthesize nextButton=_nextButton;
@property(retain, nonatomic) GLUELabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) double animatableContentViewOriginalX; // @synthesize animatableContentViewOriginalX=_animatableContentViewOriginalX;
@property(retain, nonatomic) NSString *transitionContextViewKey; // @synthesize transitionContextViewKey=_transitionContextViewKey;
- (void).cxx_destruct;
- (void)setPasswordInputFieldAccessibilityIdentifier:(id)arg1;
- (void)setSubtitleLabelAccessibilityIdentifier:(id)arg1;
- (void)setEditPhoneNumberButtonAccessibilityIdentifier:(id)arg1;
- (void)setNextButtonAccessibilityIdentifier:(id)arg1;
- (void)setScrollViewAccessibilityIdentifier:(id)arg1;
- (void)updateScrollViewWithInsets:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) double bottomViewY;
@property(readonly, nonatomic) UIScrollView *animatingScrollView;
@property(readonly, nonatomic) UIView *animatableContentView;
- (void)dealloc;
- (void)onTapBackground:(id)arg1;
- (void)didEndEditing:(id)arg1;
- (void)didUpdateInputFieldIn:(id)arg1;
- (void)completeProgressAndHideBannerView;
- (void)hideBannerView;
- (void)showBannerWithMessage:(id)arg1;
- (void)resetContentOffsetWithAnimation;
- (void)updateNumberOfInputs:(long long)arg1;
@property(readonly, nonatomic) NSString *completePassword;
- (_Bool)becomeFirstResponder;
- (void)setNextButtonLoading:(_Bool)arg1;
- (void)setInErrorMode:(_Bool)arg1;
- (void)setNextButtonEnabled:(_Bool)arg1;
- (void)setEditPhoneNumberButtonTitle:(id)arg1;
- (void)setResendSMSButtonTitle:(id)arg1;
- (void)setNextButtonTitle:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)glue_applyStyle:(id)arg1;
- (void)setupConstraints;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)subscribeToKeyboardNotifications;
- (void)setupTapGestureRecognizer;
- (void)setupBannerView;
- (void)setupDelegate;
- (void)setupEditPhoneNumberButton;
- (void)setupResendSMSButton;
- (void)setupNextButton;
- (void)setupSubtitleLabel;
- (void)setupCodeInputStackViewWithNumberOfInputs:(unsigned long long)arg1;
- (void)setupTitleLabel;
- (void)setupScrollView;
- (void)setupContainerView;
- (void)setupBackgroundView;
- (id)initWithTheme:(id)arg1 numberOfInputs:(unsigned long long)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

