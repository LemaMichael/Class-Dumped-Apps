//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class LiveRoomModel, UIImageView, UILabel;
@protocol IESLiveEnvironment, IESLiveTracker;

@interface IESLiveFinishLiveInfoView : UIView
{
    _Bool _showAudienceInfo;
    CDUnknownBlockType _toggleAudienceSourceInfo;
    CDUnknownBlockType _onClickTip;
    UILabel *_fanticketCountLabel;
    UILabel *_fansLabel;
    UILabel *_audienceCountLabel;
    UIImageView *_audienceTriangleImageView;
    UILabel *_contibutorCountLabel;
    UILabel *_fanticketDescriptionLabel;
    UILabel *_followDescriptionLabel;
    UILabel *_audienceDescriptionLabel;
    UILabel *_contributorDescriptionLabel;
    UIView *_containerView;
    UIView *_titleContainerView;
    LiveRoomModel *_roomModel;
    id <IESLiveEnvironment> _liveEnvironment;
    id <IESLiveTracker> _tracker;
    UILabel *_titleContainerLabel;
    UIImageView *_titleContainerImageView;
}

@property(retain, nonatomic) UIImageView *titleContainerImageView; // @synthesize titleContainerImageView=_titleContainerImageView;
@property(retain, nonatomic) UILabel *titleContainerLabel; // @synthesize titleContainerLabel=_titleContainerLabel;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <IESLiveEnvironment> liveEnvironment; // @synthesize liveEnvironment=_liveEnvironment;
@property(nonatomic) _Bool showAudienceInfo; // @synthesize showAudienceInfo=_showAudienceInfo;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(retain, nonatomic) UIView *titleContainerView; // @synthesize titleContainerView=_titleContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *contributorDescriptionLabel; // @synthesize contributorDescriptionLabel=_contributorDescriptionLabel;
@property(retain, nonatomic) UILabel *audienceDescriptionLabel; // @synthesize audienceDescriptionLabel=_audienceDescriptionLabel;
@property(retain, nonatomic) UILabel *followDescriptionLabel; // @synthesize followDescriptionLabel=_followDescriptionLabel;
@property(retain, nonatomic) UILabel *fanticketDescriptionLabel; // @synthesize fanticketDescriptionLabel=_fanticketDescriptionLabel;
@property(retain, nonatomic) UILabel *contibutorCountLabel; // @synthesize contibutorCountLabel=_contibutorCountLabel;
@property(retain, nonatomic) UIImageView *audienceTriangleImageView; // @synthesize audienceTriangleImageView=_audienceTriangleImageView;
@property(retain, nonatomic) UILabel *audienceCountLabel; // @synthesize audienceCountLabel=_audienceCountLabel;
@property(retain, nonatomic) UILabel *fansLabel; // @synthesize fansLabel=_fansLabel;
@property(retain, nonatomic) UILabel *fanticketCountLabel; // @synthesize fanticketCountLabel=_fanticketCountLabel;
@property(copy, nonatomic) CDUnknownBlockType onClickTip; // @synthesize onClickTip=_onClickTip;
@property(copy, nonatomic) CDUnknownBlockType toggleAudienceSourceInfo; // @synthesize toggleAudienceSourceInfo=_toggleAudienceSourceInfo;
- (void).cxx_destruct;
- (void)relayoutLabels;
- (void)showLiveTipWebViewController;
- (void)updateWithPageBannerModel:(id)arg1;
- (void)updateWithRoomModel:(id)arg1;
- (id)makeLiveInfoTitleView;
- (void)tapAudienceInfo;
- (id)makeForSmallLabel;
- (id)makeForLargeLabel;
- (_Bool)shouldShowLiveInfoTitle;
- (void)loadViews;
- (id)initWithRoomModel:(id)arg1;

@end
