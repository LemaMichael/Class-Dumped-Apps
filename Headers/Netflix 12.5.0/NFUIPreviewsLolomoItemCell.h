//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LolomoAbstractEntityItemCell.h"

#import "LolomoItemCell-Protocol.h"
#import "NFUICellFactoryItemProtocol-Protocol.h"
#import "NFUIRenderTimerDelegateProtocol-Protocol.h"

@class CAGradientLayer, CAShapeLayer, NFUILabel, NFUIRenderTimer, NFUITitleTreatmentView, NSString, UIImage, UIImageViewAligned;
@protocol LolomoViewDelegate><LolomoActionDelegate;

@interface NFUIPreviewsLolomoItemCell : LolomoAbstractEntityItemCell <LolomoItemCell, NFUIRenderTimerDelegateProtocol, NFUICellFactoryItemProtocol>
{
    UIImageViewAligned *_imageView;
    NFUITitleTreatmentView *_titleTreatmentView;
    UIImage *_panelArtImage;
    UIImage *_watchedPanelArtImage;
    UIImage *_titleTreatmentImage;
    UIImage *_watchedtitleTreatmentImage;
    CAGradientLayer *_imageGradient;
    CAShapeLayer *_imageOutline;
    unsigned long long _panelArtImageState;
    unsigned long long _titleTreatmentImageState;
    NFUILabel *_titleLabel;
}

+ (id)dequeueForItemAtIndexPath:(id)arg1 inCollectionView:(id)arg2 withLolomoViewDelegate:(id)arg3;
+ (void)registerInCollectionView:(id)arg1 withLolomoViewDelegate:(id)arg2;
+ (id)reuseIdentifier;
+ (_Bool)shouldReturnClassForType:(id)arg1 withModel:(id)arg2;
@property(retain, nonatomic) NFUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned long long titleTreatmentImageState; // @synthesize titleTreatmentImageState=_titleTreatmentImageState;
@property(nonatomic) unsigned long long panelArtImageState; // @synthesize panelArtImageState=_panelArtImageState;
@property(retain, nonatomic) CAShapeLayer *imageOutline; // @synthesize imageOutline=_imageOutline;
@property(retain, nonatomic) CAGradientLayer *imageGradient; // @synthesize imageGradient=_imageGradient;
@property(retain, nonatomic) UIImage *watchedtitleTreatmentImage; // @synthesize watchedtitleTreatmentImage=_watchedtitleTreatmentImage;
@property(retain, nonatomic) UIImage *titleTreatmentImage; // @synthesize titleTreatmentImage=_titleTreatmentImage;
@property(retain, nonatomic) UIImage *watchedPanelArtImage; // @synthesize watchedPanelArtImage=_watchedPanelArtImage;
@property(retain, nonatomic) UIImage *panelArtImage; // @synthesize panelArtImage=_panelArtImage;
@property(retain, nonatomic) NFUITitleTreatmentView *titleTreatmentView; // @synthesize titleTreatmentView=_titleTreatmentView;
@property(retain, nonatomic) UIImageViewAligned *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (struct CGRect)defaultTitleTreatmentFrame;
- (id)grayscaleImage:(id)arg1;
- (void)renderWatchedStateIfNeededWithViewModel:(id)arg1;
- (void)markReady;
- (void)animateImageOutline;
- (void)setHighlighted:(_Bool)arg1;
- (void)willShowWithLolomoCollectionAnimated;
- (void)reportImagesPainted;
- (void)adjustFrameForCurrentTitleTreatmentImage;
- (void)setTitleTreatmentImage:(id)arg1 withViewModel:(id)arg2;
- (void)setPanelArtImage:(id)arg1 withViewModel:(id)arg2;
- (void)resetPanelArtWithUrl:(id)arg1 titleTreatmentWithUrl:(id)arg2 viewModel:(id)arg3;
- (void)loadDisplayArt:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)viewInitialized:(_Bool)arg1;
- (struct CGSize)calculatedSize:(struct CGSize)arg1 withModel:(id)arg2 withCollectionView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isForReuse;
@property(nonatomic) __weak id <LolomoViewDelegate><LolomoActionDelegate> lolomoViewDelegate;
@property(nonatomic) __weak NFUIRenderTimer *renderTimer;
@property(readonly) Class superclass;
@property(readonly, nonatomic) __weak id viewModel;

@end
