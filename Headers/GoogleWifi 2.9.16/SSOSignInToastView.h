//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOHUDMessageView.h"

@class SSOIdentity, SSOSignInToast, UIControl, UIImageView, UILabel;

@interface SSOSignInToastView : GOOHUDMessageView
{
    UIControl *_containerView;
    UIImageView *_avatarView;
    UILabel *_signedInLabel;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
    UIImageView *_arrowView;
    SSOSignInToast *_toast;
    SSOIdentity *_identity;
}

@property(readonly, nonatomic) SSOIdentity *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) SSOSignInToast *toast; // @synthesize toast=_toast;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UILabel *signedInLabel; // @synthesize signedInLabel=_signedInLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIControl *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (_Bool)shouldWaitForDismissalDuringVoiceover;
- (void)profileDidUpdate:(id)arg1;
- (void)handleBackgroundTapped:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)maximumWidth;
- (double)minimumWidth;
- (void)dealloc;
- (id)initWithMessage:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;

@end

