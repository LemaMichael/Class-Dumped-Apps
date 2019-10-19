//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEIMSendCommentMessageProtocol-Protocol.h"
#import "AWEIMVideoCommentInputViewControllerDelegate-Protocol.h"

@class AWEAwemeModel, AWECommentModel, AWEIMVideoCommentAlertBottomView, AWEIMVideoCommentAlertTopView, AWEIMVideoCommentInputViewController, NSString, UIView;

@interface AWEIMVideoCommentAlertViewController : UIViewController <AWEIMVideoCommentInputViewControllerDelegate, AWEIMSendCommentMessageProtocol>
{
    _Bool _isAnimating;
    UIView *_maskView;
    UIView *_baseView;
    AWEIMVideoCommentAlertTopView *_topView;
    UIView *_keyboardMaskView;
    AWEIMVideoCommentInputViewController *_inputVC;
    AWEIMVideoCommentAlertBottomView *_bottomView;
    CDUnknownBlockType _certainBlock;
    AWEAwemeModel *_awemeModel;
    AWECommentModel *_comment;
    NSString *_enterFrom;
    struct CGRect _lastFrame;
}

@property(retain, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) AWECommentModel *comment; // @synthesize comment=_comment;
@property(retain, nonatomic) AWEAwemeModel *awemeModel; // @synthesize awemeModel=_awemeModel;
@property(nonatomic) struct CGRect lastFrame; // @synthesize lastFrame=_lastFrame;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) CDUnknownBlockType certainBlock; // @synthesize certainBlock=_certainBlock;
@property(retain, nonatomic) AWEIMVideoCommentAlertBottomView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) AWEIMVideoCommentInputViewController *inputVC; // @synthesize inputVC=_inputVC;
@property(retain, nonatomic) UIView *keyboardMaskView; // @synthesize keyboardMaskView=_keyboardMaskView;
@property(retain, nonatomic) AWEIMVideoCommentAlertTopView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (void)willDismissKeyboard;
- (void)willShowKeyboard;
- (void)inputViewFrameWillChangeWithDiffHeight:(double)arg1;
- (void)didUpdateKeyboardFrame:(struct CGRect)arg1 willShowKeyboard:(_Bool)arg2;
- (void)handlePanKeyboardMaskViewGes:(id)arg1;
- (void)handleTapKeyboardMaskViewGes:(id)arg1;
- (void)sendMsgAndDismissAlertView;
- (void)clickCertainBtn:(id)arg1;
- (void)clickCancelBtn:(id)arg1;
- (id)p_sendTextMessageToUser:(id)arg1;
- (id)p_sendVideoCommentMessageToUser:(id)arg1;
- (void)p_dismissAlerView:(_Bool)arg1;
- (id)p_getTextFromInputView;
- (void)showOnView:(id)arg1;
- (void)configWithAweme:(id)arg1 withComment:(id)arg2 withEnterFrom:(id)arg3;
- (void)p_layoutSubview;
- (void)p_setupUI;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
