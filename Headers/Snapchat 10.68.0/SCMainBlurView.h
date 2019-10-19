//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class UIImageView, UIView;

@interface SCMainBlurView : UIVisualEffectView
{
    double _percentVisible;
    UIView *_overlayView;
    UIImageView *_gradientView;
}

@property(retain, nonatomic) UIImageView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
- (void).cxx_destruct;
- (void)_addAnimationIfNeeded;
- (void)_removeAnimation;
- (void)setPercentVisible:(double)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)init;

@end
