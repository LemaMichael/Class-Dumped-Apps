//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"

@class NSString;
@protocol SCActionHandling;

@interface SCUnifiedProfileHeaderIconView : UIView <SCActionable, SCViewModelConfigurable>
{
    UIView *_buttonView;
    id <SCActionHandling> _actionHandler;
    id _viewModel;
}

@property(retain, nonatomic) id viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_handleIconTap:(id)arg1;
- (void)setUseLargeTouchArea:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateAlphaIfShouldDisappearOnProfileScroll:(double)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
