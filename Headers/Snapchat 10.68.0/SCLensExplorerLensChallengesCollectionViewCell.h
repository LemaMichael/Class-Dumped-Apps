//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "SCActionable-Protocol.h"
#import "SCViewModelConfigurable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class CAGradientLayer, NSString, SCLensChallengesSectionCellViewModel, SCLensFeedCellLayout, SCNetworkImageView, UIButton, UILabel, UIView;
@protocol SCActionHandling;

@interface SCLensExplorerLensChallengesCollectionViewCell : UICollectionViewCell <UIGestureRecognizerDelegate, SCViewModelConfigurable, SCActionable>
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_joinNowButtonView;
    UIButton *_joinNowButton;
    UILabel *_joinNowLabel;
    UILabel *_newChallengeLabel;
    SCNetworkImageView *_coverImageView;
    CAGradientLayer *_gradientLayer;
    SCLensFeedCellLayout *_layout;
    id <SCActionHandling> _actionHandler;
    SCLensChallengesSectionCellViewModel *_viewModel;
}

+ (struct CGSize)sizeWithViewModel:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) SCLensChallengesSectionCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) id <SCActionHandling> actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)_setupKarma;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)_joinNowButtonTapped:(id)arg1;
- (void)_contentViewDidTap:(id)arg1;
- (void)_setButtonTitle:(id)arg1;
- (id)_newChallengeLabel;
- (void)_initializeJoinNowButton;
- (void)_initializeSubviews;
- (void)_configureGestureRecognizers;
- (void)setImageDownloader:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
