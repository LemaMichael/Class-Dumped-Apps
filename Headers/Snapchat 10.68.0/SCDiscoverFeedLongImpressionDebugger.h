//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSTimer, UIButton, UIView;

@interface SCDiscoverFeedLongImpressionDebugger : NSObject
{
    UIView *_debuggerView;
    UIButton *_hideButton;
    NSArray *_viewItems;
    NSMutableDictionary *_itemLoggedCountDict;
    NSTimer *_timer;
    NSMutableArray *_indicatorViews;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_hide;
- (void)_show;
- (void)_indicateLoggedItem:(id)arg1;
- (void)reset;
- (void)updateImpressedItems:(id)arg1;
- (void)_updateImpressionItems:(id)arg1 viewItems:(id)arg2 date:(id)arg3 viewPort:(struct CGRect)arg4 viewPortScreenPosition:(struct CGPoint)arg5 impressionTime:(double)arg6;
- (void)updateImpressionItems:(id)arg1 viewItems:(id)arg2 date:(id)arg3 viewPort:(struct CGRect)arg4 viewPortScreenPosition:(struct CGPoint)arg5 impressionTime:(double)arg6;
- (void)setupView:(struct CGRect)arg1;
- (id)init;

@end

