//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTLightweightCell.h"

#import "YTLightweightLongPressMenuHandling-Protocol.h"
#import "YTMMusicPlayButtonViewDelegate-Protocol.h"
#import "YTMSubtitleBadgesViewDelegate-Protocol.h"
#import "YTScrollFocusItem-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class NSString, UILabel, UIView, YTIMusicSpotlightItemRenderer, YTMMusicThumbnailView, YTMPotentialOverlaysStackView, YTMSubtitleBadgesView;
@protocol YTMLightweightMusicSpotlightItemCellDelegate, YTScrollFocusItem, YTScrollFocusUpdater;

@interface YTMLightweightMusicSpotlightItemCell : YTLightweightCell <YTMMusicPlayButtonViewDelegate, YTMSubtitleBadgesViewDelegate, YTThumbnailMapping, YTLightweightLongPressMenuHandling, YTScrollFocusItem>
{
    YTIMusicSpotlightItemRenderer *_renderer;
    UILabel *_headerLabel;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_subtitleContainer;
    YTMSubtitleBadgesView *_subtitleBadgesView;
    YTMPotentialOverlaysStackView *_overlaysStackView;
    id <YTMLightweightMusicSpotlightItemCellDelegate> _delegate;
    id <YTScrollFocusUpdater> _scrollFocusUpdater;
    id <YTScrollFocusItem> _scrollFocusItemDelegate;
    YTMMusicThumbnailView *_musicThumbnailView;
}

+ (id)subtitleLabelFont;
+ (id)titleLabelFont;
+ (id)headerLabelFont;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) YTMMusicThumbnailView *musicThumbnailView; // @synthesize musicThumbnailView=_musicThumbnailView;
@property(nonatomic) __weak id <YTScrollFocusItem> scrollFocusItemDelegate; // @synthesize scrollFocusItemDelegate=_scrollFocusItemDelegate;
@property(nonatomic) __weak id <YTScrollFocusUpdater> scrollFocusUpdater; // @synthesize scrollFocusUpdater=_scrollFocusUpdater;
@property(nonatomic) __weak id <YTMLightweightMusicSpotlightItemCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setUpOverlayViews:(id)arg1;
- (id)currentThumbnailView;
- (void)hideAndResetAllThumbnails;
- (void)initializeThumbnailRenderer;
- (void)removePlayerObservationForPlayButtonView:(id)arg1 playbackIDMatcher:(id)arg2;
- (void)addPlayerObservationForPlayButtonView:(id)arg1 playbackIDMatcher:(id)arg2;
- (_Bool)isScrollFocusSelectableForTypes:(id)arg1;
- (void)scrollFocusDidChangeWithContext:(id)arg1;
@property(readonly, nonatomic) long long scrollFocusItemType;
- (id)yt_longPressAccessibilityHintString;
- (id)yt_menuRenderer;
- (id)doubleTapNavigationEndpoint;
- (void)subtitleBadgesView:(id)arg1 visibleIconCountChangedTo:(unsigned long long)arg2;
- (id)renderer;
- (void)setRenderer:(id)arg1;
- (id)thumbnailMappings;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hiddenEnclosed;
@property(readonly) Class superclass;

@end

