//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPOIDetailCellViewController.h"

@class UIImageView, UILabel;

@interface AWEPOIDetailIconTextCellViewController : AWEPOIDetailCellViewController
{
    UIImageView *_rightArrowView;
    UIImageView *_iconView;
    UILabel *_label;
    UILabel *_accessLabel;
}

@property(retain, nonatomic) UILabel *accessLabel; // @synthesize accessLabel=_accessLabel;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
- (void).cxx_destruct;
- (struct CGSize)iconSize;
- (double)iconTextSpace;
- (void)updateWithText:(id)arg1;
- (void)handleTap;
- (id)displayTextForAccess;
- (_Bool)shouldShowRightArrow;
- (id)iconImageName;
- (id)displayText;
- (id)initWithContext:(id)arg1;

@end

