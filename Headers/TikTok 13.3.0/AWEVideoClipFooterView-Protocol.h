//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEAnimatedButton, AWESegmentedClipFooterPassThroughView, AWEVideoListCell, AWEVideoRangeSlider, HTSVideoSpeedControl, NSArray, NSError, UICollectionView, UIView;

@protocol AWEVideoClipFooterView <NSObject>
@property(nonatomic) unsigned long long currentVideoIndex;
@property(readonly, nonatomic) AWEAnimatedButton *aniOkButton;
@property(readonly, nonatomic) AWEAnimatedButton *aniCloseButton;
@property(readonly, nonatomic) AWEAnimatedButton *speedControlButton;
@property(readonly, nonatomic) AWEAnimatedButton *deleteButton;
@property(readonly, nonatomic) AWEAnimatedButton *rotateButton;
@property(readonly, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionRightMaskView;
@property(readonly, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionLeftMaskView;
@property(readonly, nonatomic) UIView *cursorView;
@property(readonly, nonatomic) UICollectionView *videosCollectionView;
@property(readonly, nonatomic) UICollectionView *framesCollectionView;
@property(readonly, nonatomic) HTSVideoSpeedControl *speedControl;
@property(readonly, nonatomic) AWEVideoRangeSlider *videoRangeSlider;
@property(readonly, nonatomic) struct CGSize coverItemSize;
@property(readonly, nonatomic) struct CGSize normalItemSize;
- (void)footerViewDidDisappear;
- (void)footerViewWillDisappear;
- (void)footerViewDidAppear;
- (void)footerViewWillAppear;
- (_Bool)isInVideoSegmentsEditing;
- (_Bool)isInSingleSegmentEditing;
- (void)segmentedClipsEndAnimationWithCompletion:(void (^)(void))arg1;
- (void)segmentedClipsStartAnimationWithCell:(AWEVideoListCell *)arg1;
- (_Bool)shouldContinueProceedure;
- (double)currentPanelHeight;
- (UIView *)containerView;

@optional
@property(nonatomic) _Bool enableVideoSegementsEdit;
- (void)didFinishDeleteAssetModelAtIndex:(long long)arg1;
- (void)undoMusicSelection;
- (void)updateMusicList:(NSArray *)arg1 error:(NSError *)arg2;
- (void)setSpeedControlHidden:(_Bool)arg1;
@end

