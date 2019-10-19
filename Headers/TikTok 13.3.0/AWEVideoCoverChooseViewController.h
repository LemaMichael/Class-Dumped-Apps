//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEMediaSmallAnimationProtocol-Protocol.h"
#import "AWEVideoCoverImageSliderViewDelegate-Protocol.h"

@class AWEPlayer, AWEVideoCoverImageSliderView, AWEVideoImageGenerator, AWEVideoPublishViewModel, NSDictionary, NSNumber, NSString, UIButton, UIImage, UIImageView, UILabel, UIView;

@interface AWEVideoCoverChooseViewController : UIViewController <AWEVideoCoverImageSliderViewDelegate, AWEMediaSmallAnimationProtocol>
{
    _Bool _isInPublishView;
    CDUnknownBlockType _didDismissBlock;
    CDUnknownBlockType _willDismissBlock;
    NSDictionary *_chooseCoverExtraAttributes;
    UIImageView *_interactionImageView;
    AWEVideoPublishViewModel *_publishViewModel;
    UIButton *_cancelBtn;
    UIButton *_saveBtn;
    UIButton *_cancelIconBtn;
    UIButton *_saveIconBtn;
    UILabel *_titleLabel;
    UIView *_playerContainer;
    AWEPlayer *_player;
    AWEVideoImageGenerator *_imageGenerator;
    AWEVideoImageGenerator *_finalCoverImageGenerator;
    UIImageView *_finalCoverImageView;
    AWEVideoCoverImageSliderView *_coverImagesSliderView;
    UILabel *_bottomTitleLabel;
    double _finalChoosePercent;
    NSNumber *_totalVideoDuration;
    UIView *_bottomView;
    UIImage *_firstFrameImage;
}

@property(nonatomic) _Bool isInPublishView; // @synthesize isInPublishView=_isInPublishView;
@property(retain, nonatomic) UIImage *firstFrameImage; // @synthesize firstFrameImage=_firstFrameImage;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) NSNumber *totalVideoDuration; // @synthesize totalVideoDuration=_totalVideoDuration;
@property(nonatomic) double finalChoosePercent; // @synthesize finalChoosePercent=_finalChoosePercent;
@property(retain, nonatomic) UILabel *bottomTitleLabel; // @synthesize bottomTitleLabel=_bottomTitleLabel;
@property(retain, nonatomic) AWEVideoCoverImageSliderView *coverImagesSliderView; // @synthesize coverImagesSliderView=_coverImagesSliderView;
@property(retain, nonatomic) UIImageView *finalCoverImageView; // @synthesize finalCoverImageView=_finalCoverImageView;
@property(retain, nonatomic) AWEVideoImageGenerator *finalCoverImageGenerator; // @synthesize finalCoverImageGenerator=_finalCoverImageGenerator;
@property(retain, nonatomic) AWEVideoImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(retain, nonatomic) AWEPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) UIView *playerContainer; // @synthesize playerContainer=_playerContainer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *saveIconBtn; // @synthesize saveIconBtn=_saveIconBtn;
@property(retain, nonatomic) UIButton *cancelIconBtn; // @synthesize cancelIconBtn=_cancelIconBtn;
@property(retain, nonatomic) UIButton *saveBtn; // @synthesize saveBtn=_saveBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishViewModel; // @synthesize publishViewModel=_publishViewModel;
@property(retain, nonatomic) UIImageView *interactionImageView; // @synthesize interactionImageView=_interactionImageView;
@property(retain, nonatomic) NSDictionary *chooseCoverExtraAttributes; // @synthesize chooseCoverExtraAttributes=_chooseCoverExtraAttributes;
@property(copy, nonatomic) CDUnknownBlockType willDismissBlock; // @synthesize willDismissBlock=_willDismissBlock;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
- (void).cxx_destruct;
- (void)p_touchEnd:(double)arg1;
- (void)coverImageSliderView:(id)arg1 touchEnd:(double)arg2;
- (void)coverImageSliderView:(id)arg1 touchMoved:(double)arg2;
- (void)coverImageSliderView:(id)arg1 touchBegin:(double)arg2;
- (struct CGSize)p_perferredCoverSize;
- (double)mediaSmallBottomViewHeight;
- (struct CGRect)mediaSmallMediaContainerFrame;
- (id)mediaSmallBottomView;
- (id)mediaSmallMediaContainer;
- (void)p_dismissForSave:(_Bool)arg1;
- (void)didClickSaveBtn:(id)arg1;
- (void)didClickCancelBtn:(id)arg1;
- (void)reloadPreviewFrames:(CDUnknownBlockType)arg1;
- (void)loadFirstPreviewFrameWithCompletion:(CDUnknownBlockType)arg1;
- (void)showCoverImages;
- (void)configureViews;
- (void)configurePlayer;
- (_Bool)prefersStatusBarHidden;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModel:(id)arg1 player:(id)arg2 inPublishView:(_Bool)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
