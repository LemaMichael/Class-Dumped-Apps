//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UITextViewDelegate.h"
#import "YTPageStyleProvider.h"
#import "YTPageStyling.h"
#import "YTThumbnailMapping.h"

@class GOOTextField, NSString, UITapGestureRecognizer, YTIThumbnailDetails, YTPrivacySelectButton, YTSettingsLinkCell, YTVideoThumbnailView;

@interface YTPlaylistEditorView : UIScrollView <UITextViewDelegate, YTPageStyleProvider, YTPageStyling, YTThumbnailMapping>
{
    YTVideoThumbnailView *_playlistThumbnailView;
    YTIThumbnailDetails *_thumbnail;
    YTSettingsLinkCell *_contributionSettingsLinkCell;
    UITapGestureRecognizer *_contributionLinkTapGestureRecognizer;
    GOOTextField *_nameTextField;
    GOOTextField *_descriptionTextField;
    YTPrivacySelectButton *_privacyButton;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
}

@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(readonly, nonatomic) YTPrivacySelectButton *privacyButton; // @synthesize privacyButton=_privacyButton;
@property(readonly, nonatomic) GOOTextField *descriptionTextField; // @synthesize descriptionTextField=_descriptionTextField;
@property(readonly, nonatomic) GOOTextField *nameTextField; // @synthesize nameTextField=_nameTextField;
- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) long long pageStyle;
- (id)thumbnailMappings;
- (void)layoutSubviews;
- (void)textViewDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setContributionSettingsLinkStyleVisiblyDisabled;
- (void)setContributionSettingsLinkEnabled:(_Bool)arg1;
- (void)removeContributionSettingsLinkTapTarget;
- (void)showContributionSettingsLinkWithTitle:(id)arg1 tapTarget:(id)arg2 action:(SEL)arg3;
- (void)setThumbnail:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
