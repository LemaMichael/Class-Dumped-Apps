//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "GA11YMixinEmbedder.h"
#import "YTCollectionViewCellProtocol.h"
#import "YTPageStyling.h"
#import "YTReusableView.h"
#import "YTSubscribeSwitchContainer.h"
#import "YTThumbnailMapping.h"

@class NSString, UIView, YTFormattedStringLabel, YTITopicChannelDetailsRenderer, YTImageView, YTNotificationMultiToggleButton, YTNotificationOptionsButton, YTNotificationPreferenceToggleButton, YTSubscribeSwitch;

@interface YTTopicChannelDetailsCell : YTCollectionViewCell <GA11YMixinEmbedder, YTThumbnailMapping, YTCollectionViewCellProtocol, YTPageStyling, YTReusableView, YTSubscribeSwitchContainer>
{
    YTITopicChannelDetailsRenderer *_renderer;
    id <YTResponder> _parentResponder;
    YTSubscribeSwitch *_subscribeSwitch;
    id <GA11YMixinImpl> _accessibilityMixin;
    id <YTTopicChannelDetailsCellDelegate> _delegate;
    YTFormattedStringLabel *_titleLabel;
    YTImageView *_avatar;
    YTFormattedStringLabel *_subtitleLabel;
    UIView *_containerView;
    YTFormattedStringLabel *_subscriberCountLabel;
}

+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
@property(retain, nonatomic) YTFormattedStringLabel *subscriberCountLabel; // @synthesize subscriberCountLabel=_subscriberCountLabel;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) YTFormattedStringLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) YTImageView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <YTTopicChannelDetailsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) YTSubscribeSwitch *subscribeSwitch; // @synthesize subscribeSwitch=_subscribeSwitch;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)thumbnailMappings;
@property(readonly, nonatomic) YTNotificationPreferenceToggleButton *notificationToggleButton;
@property(readonly, nonatomic) YTNotificationMultiToggleButton *notificationMultiToggleButton;
@property(readonly, nonatomic) YTNotificationOptionsButton *notificationOptionsButton;
- (id)accessibleViews;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
@property(readonly, nonatomic) id <GA11YMixinImpl> accessibilityMixin; // @synthesize accessibilityMixin=_accessibilityMixin;
- (void)prepareForReuse;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

