//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEPhotoStickerEditViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEPhotoStickerEditView, CALayer, NSMutableArray, NSString, NSTimer, UIImageView, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer;

@interface AWEPhotoStickerContainerView : UIView <AWEPhotoStickerEditViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _movingOneSticker;
    double _currentScale;
    CALayer *_maskLayer;
    NSMutableArray *_stickers;
    AWEPhotoStickerEditView *_currentSticker;
    NSTimer *_countDownTimer;
    UIPinchGestureRecognizer *_pinchGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    UITapGestureRecognizer *_tapGesture;
    UIImageView *_contentView;
}

@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIRotationGestureRecognizer *rotationGesture; // @synthesize rotationGesture=_rotationGesture;
@property(retain, nonatomic) UIPinchGestureRecognizer *pinchGesture; // @synthesize pinchGesture=_pinchGesture;
@property(retain, nonatomic) NSTimer *countDownTimer; // @synthesize countDownTimer=_countDownTimer;
@property(nonatomic) _Bool movingOneSticker; // @synthesize movingOneSticker=_movingOneSticker;
@property(retain, nonatomic) AWEPhotoStickerEditView *currentSticker; // @synthesize currentSticker=_currentSticker;
@property(retain, nonatomic) NSMutableArray *stickers; // @synthesize stickers=_stickers;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) double currentScale; // @synthesize currentScale=_currentScale;
- (void).cxx_destruct;
- (long long)stickersCount;
- (_Bool)hasEditingSticker;
- (void)makeAllStickersResignActive;
- (id)stickerCoverForPhoto:(id)arg1 editingView:(id)arg2;
- (id)addStickerCoverForImage:(id)arg1 photo:(id)arg2 editingView:(id)arg3;
- (id)copyForPhoto:(id)arg1 inContainerView:(id)arg2;
- (void)p_makeStickerCurrent:(id)arg1;
- (void)p_makeCurrentStickerEditResignActive;
- (void)enableGestures;
- (void)disableGestures;
- (void)p_enablePanGestureForAllStickers;
- (void)p_disablePanGesturesForAllStickersWithException:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleTap:(id)arg1;
- (void)handleRotate:(id)arg1;
- (void)handlePinch:(id)arg1;
- (void)p_setupGestures;
- (void)p_cancelCurrentStickerFocusCountDown;
- (void)p_startStickerFocusCountDown;
- (void)stickerEditorDidReceiveTapGesture:(id)arg1;
- (void)stickerEditor:(id)arg1 didReceivePanGestureOnSizeChange:(id)arg2 actionView:(id)arg3 offset:(struct CGPoint)arg4;
- (void)stickerEditor:(id)arg1 didReceivePanGesture:(id)arg2;
- (void)stickerEditorDidDismiss:(id)arg1 stickerID:(id)arg2;
- (void)addStickerdWithImage:(id)arg1 url:(id)arg2 forPhoto:(id)arg3;
- (struct CGRect)currentRectInPhoto:(id)arg1;
- (void)updateWithPhoto:(id)arg1 inContainerView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

