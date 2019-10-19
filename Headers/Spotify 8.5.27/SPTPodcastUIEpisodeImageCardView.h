//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTPodcastUIHighlightableView.h"

@class GLUEGradientView, GLUEImageView, GLUELabel, SPTPodcastUIEpisodeImageCardPlaceholderTextView, UIProgressView, UIStackView, UIView;
@protocol SPTPodcastUIEpisodeImageCardStyle;

@interface SPTPodcastUIEpisodeImageCardView : SPTPodcastUIHighlightableView
{
    _Bool _backgroundImageExists;
    id <SPTPodcastUIEpisodeImageCardStyle> _podcastStyle;
    GLUELabel *_titleLabel;
    GLUELabel *_metadataLabel;
    SPTPodcastUIEpisodeImageCardPlaceholderTextView *_imagePlaceholderTextView;
    UIStackView *_labelStackView;
    UIView *_imageContainerView;
    GLUEGradientView *_imageGradientView;
    GLUEImageView *_thumbnailImageView;
    UIView *_thumbnailContainerView;
    GLUEImageView *_episodeImageView;
    UIProgressView *_progressView;
}

@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) GLUEImageView *episodeImageView; // @synthesize episodeImageView=_episodeImageView;
@property(retain, nonatomic) UIView *thumbnailContainerView; // @synthesize thumbnailContainerView=_thumbnailContainerView;
@property(retain, nonatomic) GLUEImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) GLUEGradientView *imageGradientView; // @synthesize imageGradientView=_imageGradientView;
@property(retain, nonatomic) UIView *imageContainerView; // @synthesize imageContainerView=_imageContainerView;
@property(retain, nonatomic) UIStackView *labelStackView; // @synthesize labelStackView=_labelStackView;
@property(nonatomic) _Bool backgroundImageExists; // @synthesize backgroundImageExists=_backgroundImageExists;
@property(retain, nonatomic) SPTPodcastUIEpisodeImageCardPlaceholderTextView *imagePlaceholderTextView; // @synthesize imagePlaceholderTextView=_imagePlaceholderTextView;
@property(retain, nonatomic) GLUELabel *metadataLabel; // @synthesize metadataLabel=_metadataLabel;
@property(retain, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) id <SPTPodcastUIEpisodeImageCardStyle> podcastStyle; // @synthesize podcastStyle=_podcastStyle;
- (void).cxx_destruct;
- (id)gradientStyleForBackgroundColor:(id)arg1;
- (void)applyGradientStyleForBackgroundColor:(id)arg1;
- (id)textColorOnBackgroundColor:(id)arg1;
- (void)translatesAutoresizingMaskIntoConstraintsForSubviewsOfView:(id)arg1 newValue:(_Bool)arg2;
- (void)applyStyle;
@property(nonatomic) float progress;
- (void)prepareForReuse;
- (void)updateEpisodeImage:(id)arg1 animated:(_Bool)arg2;
- (_Bool)needsColorExtraction;
- (void)styleWithExtractedColorFromImage:(id)arg1 animated:(_Bool)arg2;
- (void)updateShowImage:(id)arg1 animated:(_Bool)arg2;
- (void)setViewToInitialState;
- (void)setupLabels;
- (void)styleLayoutWithColor:(id)arg1 animated:(_Bool)arg2;
- (void)buildViewLayout;
- (id)initWithFrame:(struct CGRect)arg1 style:(id)arg2;

@end
