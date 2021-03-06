//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIPanGestureRecognizer, UITapGestureRecognizer;
@protocol SCMiniProfileAuxViewInterface;

@interface SCMiniProfileBaseView : UIView
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _startPanGestureOffset;
    _Bool _swipable;
    UIView *_verticalAdjustmentLayer;
    UIView *_card;
    UIView<SCMiniProfileAuxViewInterface> *_auxiliaryView;
}

@property(nonatomic) _Bool swipable; // @synthesize swipable=_swipable;
@property(retain, nonatomic) UIView<SCMiniProfileAuxViewInterface> *auxiliaryView; // @synthesize auxiliaryView=_auxiliaryView;
@property(readonly, nonatomic) UIView *card; // @synthesize card=_card;
@property(readonly, nonatomic) UIView *verticalAdjustmentLayer; // @synthesize verticalAdjustmentLayer=_verticalAdjustmentLayer;
- (void).cxx_destruct;
- (void)presentMiniProfileFromBottom;
- (void)_presentMiniProfile;
- (void)_dismissMiniProfileWithDuration:(double)arg1;
- (void)dismissMiniProfile;
- (void)didPerformPanGesture:(id)arg1;
- (void)didPerformTapGesture:(id)arg1;
- (double)_bottomScreenVerticalTransformAdjustment;
- (double)_centeredVerticalTransformAdjustment;
- (void)_updateMiniProfileAfterPresentingAnimation;
- (void)_miniProfileDismissAnimationDidFinish;
- (void)_prepareMiniProfileForPresentation;
- (void)_updateCardConstraint;
- (void)_moveMiniProfileBelowBottom;
- (id)initWithFrame:(struct CGRect)arg1;

@end

