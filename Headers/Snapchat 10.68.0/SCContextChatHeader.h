//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCGrowingButton, UIButton, UILabel;
@protocol SCContextChatHeaderDelegate;

@interface SCContextChatHeader : UIView
{
    UILabel *_chatDisplayNameLabel;
    UIButton *_chatDisplayButton;
    SCGrowingButton *_closeButton;
    UIView *_topGradientView;
    UIButton *_swapIcon;
    id <SCContextChatHeaderDelegate> _delegate;
}

+ (double)maxDisplayableWidth;
+ (id)headerFont;
@property(nonatomic) __weak id <SCContextChatHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_crossDisolveDisplayName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fadeInAndSetLabelAttributedDisplayName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_rotateSwapIconWithCompletion:(CDUnknownBlockType)arg1;
- (void)_scaleDownLabelWithCompletion:(CDUnknownBlockType)arg1;
- (void)_scaleUpLabelWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateDisplayName:(id)arg1;
- (void)showChatHeaderView;
- (void)_exitButtonPressed:(id)arg1;
- (void)_swapNameIconTouchUpOutside:(id)arg1;
- (void)_swapNameIconTouchDown:(id)arg1;
- (void)_swapNameIconTouchUpInside:(id)arg1;
- (void)_setupGestures;
- (void)_setupSwapIcon;
- (void)_setAttributedLabelText:(id)arg1;
- (id)_attributedTextForDisplayName:(id)arg1;
- (void)_layoutLabelShowsSwapIcon:(_Bool)arg1;
- (void)_formatDisplayNameLabelForName:(id)arg1 showSwapIcon:(_Bool)arg2;
- (void)_setupWithDisplayName:(id)arg1 showSwapIcon:(_Bool)arg2;
- (void)_setupCloseButton;
- (void)_setupGradientView;
- (id)initWithDisplayName:(id)arg1 showSwapIcon:(_Bool)arg2;

@end
