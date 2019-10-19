//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SCAffordanceArrowView, UIColor, UIImageView, UILabel;

@interface SCScrollUpAffordanceView : UIView
{
    UILabel *_label;
    UIImageView *_gradientView;
    SCAffordanceArrowView *_arrowView;
    UIColor *_primaryColor;
    _Bool _shouldShowGradientBackground;
    NSString *_affordanceText;
}

@property(copy, nonatomic) NSString *affordanceText; // @synthesize affordanceText=_affordanceText;
@property(nonatomic) _Bool shouldShowGradientBackground; // @synthesize shouldShowGradientBackground=_shouldShowGradientBackground;
- (void).cxx_destruct;
- (void)flipVertically;
- (void)_setupGradientView;
- (void)_setupLabelWithTextColor:(id)arg1;
- (void)_setupArrowViewWithPrimaryPublisherColor:(id)arg1 secondaryPublisherColor:(id)arg2;
- (void)stopArrowAnimation;
- (void)slideInFromBottom;
- (void)showArrow;
- (void)_showArrowIndividually;
- (double)textWidth;
- (id)initWithPrimaryColor:(id)arg1 secondaryColor:(id)arg2;

@end
