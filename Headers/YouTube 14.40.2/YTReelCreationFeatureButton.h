//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTEditSpritedButton.h"

@class MDCInkView;

@interface YTReelCreationFeatureButton : YTEditSpritedButton
{
    MDCInkView *_inkView;
}

- (void).cxx_destruct;
- (void)setUpInkView;
- (void)yt_pageStyleDidMoveToWindow;
- (void)didMoveToWindow;
- (void)configureShadowForLayer:(id)arg1;
- (id)findInkViewInHierarchy:(id)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutInkView;
- (void)layoutSubviews;
- (void)commonInit;
- (void)setButtonRenderer:(id)arg1;

@end

