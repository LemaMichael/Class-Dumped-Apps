//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEProfileSettingSliderGroupCell.h"

@class AWEProfileSettingSliderBaseItemView, NSMutableArray;

@interface AWEProfileSettingSliderAccountListCell : AWEProfileSettingSliderGroupCell
{
    CDUnknownBlockType _tapAccountInListBlock;
    CDUnknownBlockType _tapAddAccountBlock;
    double _cellHeight;
    AWEProfileSettingSliderBaseItemView *_currentUserView;
    NSMutableArray *_itemViews;
}

@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) AWEProfileSettingSliderBaseItemView *currentUserView; // @synthesize currentUserView=_currentUserView;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(copy, nonatomic) CDUnknownBlockType tapAddAccountBlock; // @synthesize tapAddAccountBlock=_tapAddAccountBlock;
@property(copy, nonatomic) CDUnknownBlockType tapAccountInListBlock; // @synthesize tapAccountInListBlock=_tapAccountInListBlock;
- (void).cxx_destruct;
- (void)addAccountAction;
- (void)tapAccountInListAction:(id)arg1;
- (void)setHasNew:(_Bool)arg1;
- (_Bool)showCustomHighlight;
- (void)setAccountList:(id)arg1 currentUser:(id)arg2 unreadCount:(CDUnknownBlockType)arg3;
- (void)setupUI;

@end
