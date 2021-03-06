//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMusicDetailBaseHeaderView.h"

@class AWEBillboardLabel, AWECollectionButton, AWEMusicModel, AWEMusicPlatformView, AWERelatedChallengeMusicView, AWEUserCountDescView, AWEVerifiedUserView, NSString, UIButton, UIImageView, UILabel, UIView;

@interface AWEMusicDetailHeaderView : AWEMusicDetailBaseHeaderView
{
    _Bool _audioPlayerLoading;
    UIImageView *_headerBackgroundView;
    UIImageView *_coverImageView;
    UIImageView *_playImageView;
    UILabel *_authorNameLabel;
    AWEUserCountDescView *_userCountView;
    UIButton *_editTitleButton;
    UIView *_separateLineView;
    AWEMusicPlatformView *_entryView;
    AWEVerifiedUserView *_verifiedUserView;
    UIView *_thirdPlatformLineView;
    AWERelatedChallengeMusicView *_relatedView;
    AWEMusicModel *_audioModel;
    UIButton *_musicPlanEntryButton;
    UIImageView *_musicPlanEntryImageView;
    AWECollectionButton *_collectBtn;
    AWEBillboardLabel *_titleLabel;
    UIButton *_billboardRankButton;
    UIImageView *_authorNameArrow;
    UIButton *_editTitleNewButton;
    AWECollectionButton *_musicToneButton;
    long long _musicToneType;
    NSString *_enterFromPageString;
}

@property(retain, nonatomic) NSString *enterFromPageString; // @synthesize enterFromPageString=_enterFromPageString;
@property(nonatomic) _Bool audioPlayerLoading; // @synthesize audioPlayerLoading=_audioPlayerLoading;
@property(nonatomic) long long musicToneType; // @synthesize musicToneType=_musicToneType;
@property(retain, nonatomic) AWECollectionButton *musicToneButton; // @synthesize musicToneButton=_musicToneButton;
@property(retain, nonatomic) UIButton *editTitleNewButton; // @synthesize editTitleNewButton=_editTitleNewButton;
@property(retain, nonatomic) UIImageView *authorNameArrow; // @synthesize authorNameArrow=_authorNameArrow;
@property(retain, nonatomic) UIButton *billboardRankButton; // @synthesize billboardRankButton=_billboardRankButton;
@property(retain, nonatomic) AWEBillboardLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWECollectionButton *collectBtn; // @synthesize collectBtn=_collectBtn;
@property(retain, nonatomic) UIImageView *musicPlanEntryImageView; // @synthesize musicPlanEntryImageView=_musicPlanEntryImageView;
@property(retain, nonatomic) UIButton *musicPlanEntryButton; // @synthesize musicPlanEntryButton=_musicPlanEntryButton;
@property(retain, nonatomic) AWEMusicModel *audioModel; // @synthesize audioModel=_audioModel;
@property(retain, nonatomic) AWERelatedChallengeMusicView *relatedView; // @synthesize relatedView=_relatedView;
@property(retain, nonatomic) UIView *thirdPlatformLineView; // @synthesize thirdPlatformLineView=_thirdPlatformLineView;
@property(retain, nonatomic) AWEVerifiedUserView *verifiedUserView; // @synthesize verifiedUserView=_verifiedUserView;
@property(retain, nonatomic) AWEMusicPlatformView *entryView; // @synthesize entryView=_entryView;
@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) UIButton *editTitleButton; // @synthesize editTitleButton=_editTitleButton;
@property(retain, nonatomic) AWEUserCountDescView *userCountView; // @synthesize userCountView=_userCountView;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIImageView *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
- (void).cxx_destruct;
- (void)p_trackUnavailableWithStatus:(id)arg1;
- (struct CGRect)titleRect;
- (void)_stopAnimation;
- (void)_startAnimation;
- (void)pauseAudio;
- (void)reloadWithScrollOffset:(double)arg1;
- (void)didMoveToSuperview;
- (void)albumPlayClick:(id)arg1;
- (void)switchPlayStatus;
- (void)_refreshAudioStatus:(unsigned long long)arg1;
- (void)resumeAnimationWithLayer:(id)arg1;
- (void)pauseAnimationWithLayer:(id)arg1;
- (void)playerWrapper:(id)arg1 didChangePlayStatus:(unsigned long long)arg2;
- (void)editTitleClick;
- (void)onMusicToneButtonClicked:(id)arg1;
- (void)goToBillboardWithEID:(id)arg1;
- (void)ownerNicknameClick:(id)arg1;
- (_Bool)isSingleLineTitle;
- (double)titleLabelHeight;
- (double)headerViewHeight;
- (double)infoHeightBasedOnCollectionButton;
- (double)infoHeightBasedOnCover;
- (void)updateWithModel:(id)arg1 newTitleName:(id)arg2;
- (void)updateWithModel:(id)arg1;
- (_Bool)canShowExternalMusicEntry;
- (void)configThirdPlatformInfo;
- (void)configVerifiedUser;
- (void)setContentAlpha:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

