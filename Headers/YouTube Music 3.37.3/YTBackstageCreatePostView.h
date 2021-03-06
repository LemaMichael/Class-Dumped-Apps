//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"
#import "YTBackstagePollEditorViewDelegate-Protocol.h"
#import "YTBackstageZeroStatePromoViewDelegate-Protocol.h"
#import "YTDropdownButtonDelegate-Protocol.h"
#import "YTImageViewLoadingDelegate-Protocol.h"
#import "YTPageStyleProvider-Protocol.h"
#import "YTPageStyling-Protocol.h"
#import "YTThumbnailMapping-Protocol.h"

@class CALayer, FLXLayout, GIMMe, NSArray, NSMutableArray, NSMutableDictionary, NSString, QTMActivityIndicator, UIImage, UIScrollView, YTBackstagePollEditorView, YTBackstageZeroStatePromoView, YTCreateCommentTextView, YTDropdownButton, YTFormattedStringLabel, YTIBackstagePostDialogRenderer, YTImageService, YTImageView, YTLabel, YTQTMButton, YTUserMentionsView, YTVideoView;
@protocol YTBackstageCreatePostViewDelegate, YTPageStyleProvider;

@interface YTBackstageCreatePostView : UIView <UITextViewDelegate, YTBackstagePollEditorViewDelegate, YTBackstageZeroStatePromoViewDelegate, YTImageViewLoadingDelegate, YTDropdownButtonDelegate, YTThumbnailMapping, YTPageStyling, YTPageStyleProvider>
{
    double _textViewCurrentHeight;
    CALayer *_imageAttachmentViewTintLayer;
    YTImageService *_imageService;
    _Bool _zeroStatePromoViewDismissed;
    _Bool _hasPrefilledContent;
    NSMutableArray *_userMentionedChannelIds;
    NSMutableDictionary *_userMentionedChannelIdsToReplace;
    GIMMe *_gimme;
    id <YTPageStyleProvider> _pageStyleProviderDelegate;
    id <YTBackstageCreatePostViewDelegate> _viewDelegate;
    long long _imageUploadState;
    YTFormattedStringLabel *_textPlaceholderLabel;
    YTCreateCommentTextView *_textView;
    YTUserMentionsView *_userMentionView;
    YTBackstageZeroStatePromoView *_zeroStatePromoView;
    YTBackstagePollEditorView *_pollEditorView;
    YTIBackstagePostDialogRenderer *_renderer;
    UIView *_bannerView;
    UIView *_bannerImage;
    YTFormattedStringLabel *_bannerTitleLabel;
    YTFormattedStringLabel *_bannerTextLabel;
    UIView *_bannerFooter;
    YTFormattedStringLabel *_bannerFooterLabel;
    YTFormattedStringLabel *_bannerLinkLabel;
    UIView *_bannerHairline;
    UIScrollView *_contentView;
    YTImageView *_authorThumbnail;
    YTQTMButton *_imageButton;
    QTMActivityIndicator *_activityIndicator;
    YTQTMButton *_attachmentCloseButton;
    YTQTMButton *_imageAttachmentRetryUploadButton;
    YTLabel *_imageAttachmentRetryUploadButtonLabel;
    YTImageView *_imageAttachmentView;
    YTVideoView *_videoAttachmentView;
    YTQTMButton *_pollButton;
    YTDropdownButton *_accessRestrictionsDropdownButton;
    FLXLayout *_layout;
    NSArray *_thumbnailMappings;
}

@property(retain, nonatomic) NSArray *thumbnailMappings; // @synthesize thumbnailMappings=_thumbnailMappings;
@property(retain, nonatomic) FLXLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) YTDropdownButton *accessRestrictionsDropdownButton; // @synthesize accessRestrictionsDropdownButton=_accessRestrictionsDropdownButton;
@property(retain, nonatomic) YTQTMButton *pollButton; // @synthesize pollButton=_pollButton;
@property(retain, nonatomic) YTVideoView *videoAttachmentView; // @synthesize videoAttachmentView=_videoAttachmentView;
@property(retain, nonatomic) YTImageView *imageAttachmentView; // @synthesize imageAttachmentView=_imageAttachmentView;
@property(retain, nonatomic) YTLabel *imageAttachmentRetryUploadButtonLabel; // @synthesize imageAttachmentRetryUploadButtonLabel=_imageAttachmentRetryUploadButtonLabel;
@property(retain, nonatomic) YTQTMButton *imageAttachmentRetryUploadButton; // @synthesize imageAttachmentRetryUploadButton=_imageAttachmentRetryUploadButton;
@property(retain, nonatomic) YTQTMButton *attachmentCloseButton; // @synthesize attachmentCloseButton=_attachmentCloseButton;
@property(retain, nonatomic) QTMActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) YTQTMButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) YTImageView *authorThumbnail; // @synthesize authorThumbnail=_authorThumbnail;
@property(retain, nonatomic) UIScrollView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *bannerHairline; // @synthesize bannerHairline=_bannerHairline;
@property(retain, nonatomic) YTFormattedStringLabel *bannerLinkLabel; // @synthesize bannerLinkLabel=_bannerLinkLabel;
@property(retain, nonatomic) YTFormattedStringLabel *bannerFooterLabel; // @synthesize bannerFooterLabel=_bannerFooterLabel;
@property(retain, nonatomic) UIView *bannerFooter; // @synthesize bannerFooter=_bannerFooter;
@property(retain, nonatomic) YTFormattedStringLabel *bannerTextLabel; // @synthesize bannerTextLabel=_bannerTextLabel;
@property(retain, nonatomic) YTFormattedStringLabel *bannerTitleLabel; // @synthesize bannerTitleLabel=_bannerTitleLabel;
@property(retain, nonatomic) UIView *bannerImage; // @synthesize bannerImage=_bannerImage;
@property(retain, nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) YTIBackstagePostDialogRenderer *renderer; // @synthesize renderer=_renderer;
@property(retain, nonatomic) YTBackstagePollEditorView *pollEditorView; // @synthesize pollEditorView=_pollEditorView;
@property(retain, nonatomic) YTBackstageZeroStatePromoView *zeroStatePromoView; // @synthesize zeroStatePromoView=_zeroStatePromoView;
@property(retain, nonatomic) YTUserMentionsView *userMentionView; // @synthesize userMentionView=_userMentionView;
@property(readonly, nonatomic) YTCreateCommentTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) YTFormattedStringLabel *textPlaceholderLabel; // @synthesize textPlaceholderLabel=_textPlaceholderLabel;
@property(nonatomic) long long imageUploadState; // @synthesize imageUploadState=_imageUploadState;
@property(nonatomic) __weak id <YTBackstageCreatePostViewDelegate> viewDelegate; // @synthesize viewDelegate=_viewDelegate;
@property(nonatomic) __weak id <YTPageStyleProvider> pageStyleProviderDelegate; // @synthesize pageStyleProviderDelegate=_pageStyleProviderDelegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)updateTextViewWithEditableText:(id)arg1;
- (void)adjustContentOffsetWithAttachmentVisible:(_Bool)arg1;
- (void)showAttachmentButtons;
- (void)hideAttachmentButtons;
- (void)decorateImageAttachmentByUploadState;
- (void)didTapImageAttachmentRetryUploadButton;
- (void)didTapAttachmentCloseButton;
- (void)didTapPollButton;
- (void)showPollEditor:(id)arg1;
- (void)didTapImageButton;
- (void)animateZeroStatePromoWithHidden:(_Bool)arg1;
- (void)dropdownButtonDidOpenMenu:(id)arg1;
- (void)dropdownButton:(id)arg1 didSelectOption:(id)arg2;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)didTapPromoDismissButton;
- (void)didUpdatePollCreation;
- (void)didCancelPollCreation;
- (void)imageViewDidLoad:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)root;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)arg1;
@property(readonly, nonatomic) long long postType;
@property(retain, nonatomic) UIImage *imageAttachment;
@property(readonly, nonatomic) long long pageStyle;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)replaceTextWithChip:(id)arg1 channelName:(id)arg2 channelId:(id)arg3 shouldAppendSingleSpace:(_Bool)arg4 startLocation:(unsigned long long)arg5;
- (id)postTextForCreation;
@property(readonly, nonatomic) int accessRestriction;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)dealloc;
@property(readonly, nonatomic) _Bool hasPostContent;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

