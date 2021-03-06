//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "YTPageStyling.h"

@class NSHashTable, NSString, UILabel, UITapGestureRecognizer, YTColorPalette, YTImageView, YTQTMButton;

@interface MDXQueueView : UIView <YTPageStyling>
{
    UIView *_headerView;
    YTColorPalette *_colorPalette;
    YTQTMButton *_overflowButton;
    UIView *_playlistView;
    UILabel *_emptyPlaylistMessage;
    YTImageView *_collapseArrow;
    UILabel *_titleLabel;
    NSHashTable *_queueViewObservers;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
- (void).cxx_destruct;
- (void)didTapHeaderOverflowButton:(id)arg1;
- (void)didTapHeader;
- (void)updateColors;
- (double)playlistViewHeight;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (void)dealloc;
- (void)showEmptyPlaylistPlaceholder;
- (void)showPlaylist;
- (void)removeQueueViewObserver:(id)arg1;
- (void)addQueueViewObserver:(id)arg1;
- (id)initWithPlaylistView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

