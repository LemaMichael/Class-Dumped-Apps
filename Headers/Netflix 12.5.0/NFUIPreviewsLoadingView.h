//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NFUIActivityIndicatorProtocol-Protocol.h"

@class CALayer, NSArray, NSString, UIColor, UIImageView;

@interface NFUIPreviewsLoadingView : UIView <NFUIActivityIndicatorProtocol>
{
    _Bool _animating;
    _Bool _hidesWhenStopped;
    double _animationDuration;
    UIColor *_color;
    UIView *_maskedTintedView;
    UIImageView *_placeholderImageView;
    NSArray *_loadingImages;
    CALayer *_maskLayer;
}

@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(nonatomic) _Bool hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) NSArray *loadingImages; // @synthesize loadingImages=_loadingImages;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
@property(retain, nonatomic) UIView *maskedTintedView; // @synthesize maskedTintedView=_maskedTintedView;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)stopAnimating;
- (void)startAnimating;
- (void)animateWithOverlayShowPlaceholder:(_Bool)arg1;
- (void)startAnimatingWithPlaceholder:(_Bool)arg1;
- (void)setPlaceholderImage:(id)arg1 withUrl:(id)arg2;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

