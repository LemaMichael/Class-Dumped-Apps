//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSLiveToolbar.h"

@class UIView;

@interface HTSLiveGroupedToolbar : HTSLiveToolbar
{
    HTSLiveToolbar *_ExpanddToolbar;
    UIView *_expandIn;
    UIView *_exclutionsMask;
}

@property(nonatomic) __weak UIView *exclutionsMask; // @synthesize exclutionsMask=_exclutionsMask;
@property(nonatomic) __weak UIView *expandIn; // @synthesize expandIn=_expandIn;
@property(nonatomic) __weak HTSLiveToolbar *ExpanddToolbar; // @synthesize ExpanddToolbar=_ExpanddToolbar;
- (void).cxx_destruct;
- (id)exclustionsMaskView;
- (id)loadCompactExpandToolBarWithItems:(id)arg1 withContainerView:(id)arg2;
- (id)loadExpandToolBarWithItems:(id)arg1 withContainerView:(id)arg2;
- (id)loadVerticalExpandToolBarWithItems:(id)arg1 withContainerView:(id)arg2;
- (void)expandItems:(id)arg1 withStyle:(long long)arg2 withMode:(long long)arg3;
- (void)doCollapse;
- (void)hide;
- (void)didTapItemAtIndexPath:(id)arg1;
- (id)initWithItems:(id)arg1;

@end

