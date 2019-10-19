//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NFUIBillboardPreviewsUtil : NSObject
{
}

+ (double)fullVideoPrefetchDurationThreshold;
+ (double)watchPercentThreshold;
+ (struct CGSize)calculatedSize:(struct CGSize)arg1 familiarityEnabled:(_Bool)arg2;
+ (_Bool)isSlowDevice;
+ (double)statusBarAnimationDuration;
+ (double)panelArtBlurRadius;
+ (double)titleTreatmentAspectRatio;
+ (double)overlayAnimationDuration;
+ (double)muteButtonWidth;
+ (double)closeButtonWidth;
+ (double)bookmarkBottomMargin;
+ (double)bookmarkHeight;
+ (double)titleTreatmentLeadingMargin;
+ (double)previewItemMargin;
+ (double)previewItemHeight;
+ (double)titleTreatmentTopMargin;
+ (id)titleTreatmentFramesForViewWidth:(double)arg1;
+ (id)imageGradientWithColor:(id)arg1;
+ (id)circleBezierPathForRect:(struct CGRect)arg1;
+ (double)titleAnimationDuration;
+ (_Bool)shouldUseFallbackAnimation;
+ (double)pauseTimeout;
+ (id)trackId;
+ (double)loadTimeout;
+ (id)playerForModel:(id)arg1;
+ (id)previewBillboardCollection;

@end
