//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCProfileCharmsCollectionViewLayoutDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSDate, NSMutableSet, NSString, SCCharmsBlizzardLogger, SCProfileCharmsCollectionViewLayout, SCProfileCharmsFullScreenViewController, UICollectionView;

@interface SCProfileCharmsCollectionViewCell : UICollectionViewCell <UICollectionViewDelegateFlowLayout, SCProfileCharmsCollectionViewLayoutDelegate>
{
    SCProfileCharmsCollectionViewLayout *_flowLayout;
    unsigned long long _onScreenCharmChangeCount;
    NSMutableSet *_loggedCharmIds;
    NSDate *_onScreenCharmChangeTimestamp;
    _Bool _onScreenCharmIsFromSwipeRight;
    _Bool _onScreenCharmIsNew;
    UICollectionView *_contentCollectionView;
    NSString *_profileSessionId;
    long long _state;
    SCProfileCharmsFullScreenViewController *_pageViewController;
    SCCharmsBlizzardLogger *_charmsBlizzardLogger;
}

@property(nonatomic) __weak SCCharmsBlizzardLogger *charmsBlizzardLogger; // @synthesize charmsBlizzardLogger=_charmsBlizzardLogger;
@property(nonatomic) __weak SCProfileCharmsFullScreenViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *profileSessionId; // @synthesize profileSessionId=_profileSessionId;
@property(readonly, nonatomic) UICollectionView *contentCollectionView; // @synthesize contentCollectionView=_contentCollectionView;
- (void).cxx_destruct;
- (void)_charmCellDetailLogging:(id)arg1;
- (void)_charmLargeCellDidDisplayOnScreen:(id)arg1;
- (void)_charmLargeCellDidDisappearOnScreen:(id)arg1;
- (void)_layoutForState:(long long)arg1 withIndexPath:(id)arg2 withCenter:(struct CGPoint)arg3;
- (void)onScreenItemIndexPathDidChangeFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (long long)parentCollectionViewCellState;
- (void)layoutSubviews;
- (void)handleTapCollectionViewOrOverlay;
- (void)resetIndexPath;
- (void)shrinkToIndexPath:(id)arg1 withDuration:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)expandToIndexPath:(id)arg1 withDuration:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

