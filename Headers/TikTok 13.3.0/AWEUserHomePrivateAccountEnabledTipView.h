//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEProfileBubbleProtocol-Protocol.h"

@class AWEButton, AWEPriorityQueue, NSString, UIImageView, UILabel;

@interface AWEUserHomePrivateAccountEnabledTipView : UIView <AWEProfileBubbleProtocol>
{
    long long _priority;
    CDUnknownBlockType _closeBlock;
    CDUnknownBlockType _clickLinkBlock;
    UIImageView *_tipIconView;
    UILabel *_tipLabel;
    AWEButton *_closeButton;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) AWEButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *tipIconView; // @synthesize tipIconView=_tipIconView;
@property(copy, nonatomic) CDUnknownBlockType clickLinkBlock; // @synthesize clickLinkBlock=_clickLinkBlock;
@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (void)lableTapped:(id)arg1;
- (void)setupUI;
- (void)closeClicked:(id)arg1;
- (_Bool)useManagerAnimation;
- (void)didPop;
- (void)didShow;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak AWEPriorityQueue *queue;
@property(readonly) Class superclass;

@end

