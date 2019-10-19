//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIButtonSupportedRenderers, YTICommand, YTIEditableDetails, YTIFormattedString, YTILightsourceColorPaletteData, YTILikeButtonSupportedRenderers, YTILikeData, YTIPlaylistCollectionPlaylistPickerSupportedRenderers, YTIPlaylistHeaderAddToPlaylistButtonSupportedRenderers, YTIPlaylistHeaderBannerSupportedRenderers, YTIPlaylistHeaderChannelHeaderSupportedRenderers, YTIPlaylistHeaderFabSupportedRenderers, YTIPlaylistHeaderMenuSupportedRenderers, YTIPlaylistHeaderMoreActionsSupportedRenderers, YTIPlaylistHeaderRenderer_PlaylistHeaderOfflineabilitySupportedRenderers, YTIPlaylistHeaderShareButtonSupportedRenderers, YTIPlaylistSaveButtonSupportedRenderers, YTIPlaylistThumbnailSupportedRenderers, YTIRenderer, YTIShareData, YTIThumbnailDetails;

@interface YTIPlaylistHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;
+ (id)playEndpointWithPlaylistID:(id)arg1 videoID:(id)arg2 index:(unsigned long long)arg3 useOfflineWatchNavigationEndpoint:(_Bool)arg4;
+ (id)playlistHeaderRendererWithOfflinePlaylist:(id)arg1 firstVideoID:(id)arg2 firstVideoIndex:(unsigned long long)arg3 shuffleStartVideoID:(id)arg4 shuffleStartIndex:(unsigned long long)arg5 useOfflineWatchNavigationEndpoint:(_Bool)arg6;
- (id)yt_shufflePlayButton;
- (id)yt_shareButton;
- (id)yt_playButton;
- (id)yt_playEndpoint;
- (id)yt_headerRendererTitle;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIPlaylistHeaderAddToPlaylistButtonSupportedRenderers *addToPlaylistButton; // @dynamic addToPlaylistButton;
@property(retain, nonatomic) YTIThumbnailDetails *avatar; // @dynamic avatar;
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) NSMutableArray *briefStatsArray; // @dynamic briefStatsArray;
@property(readonly, nonatomic) unsigned long long briefStatsArray_Count; // @dynamic briefStatsArray_Count;
@property(retain, nonatomic) YTIPlaylistHeaderChannelHeaderSupportedRenderers *channelHeader; // @dynamic channelHeader;
@property(retain, nonatomic) YTIPlaylistCollectionPlaylistPickerSupportedRenderers *collection; // @dynamic collection;
@property(retain, nonatomic) YTILightsourceColorPaletteData *colorPalette; // @dynamic colorPalette;
@property(retain, nonatomic) YTICommand *copyEndpoint; // @dynamic copyEndpoint;
@property(retain, nonatomic) YTIRenderer *deleteButton; // @dynamic deleteButton;
@property(retain, nonatomic) YTIFormattedString *descriptionText; // @dynamic descriptionText;
@property(retain, nonatomic) YTIRenderer *editButton; // @dynamic editButton;
@property(retain, nonatomic) YTICommand *editEndpoint; // @dynamic editEndpoint;
@property(retain, nonatomic) YTICommand *editSeasonEndpoint; // @dynamic editSeasonEndpoint;
@property(retain, nonatomic) YTIEditableDetails *editableDetails; // @dynamic editableDetails;
@property(retain, nonatomic) YTICommand *editorEndpoint; // @dynamic editorEndpoint;
@property(retain, nonatomic) NSMutableArray *expandableMetadatasArray; // @dynamic expandableMetadatasArray;
@property(readonly, nonatomic) unsigned long long expandableMetadatasArray_Count; // @dynamic expandableMetadatasArray_Count;
@property(retain, nonatomic) YTIPlaylistHeaderFabSupportedRenderers *fab; // @dynamic fab;
@property(copy, nonatomic) NSString *flaggingAction; // @dynamic flaggingAction;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasAddToPlaylistButton; // @dynamic hasAddToPlaylistButton;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasChannelHeader; // @dynamic hasChannelHeader;
@property(nonatomic) _Bool hasCollection; // @dynamic hasCollection;
@property(nonatomic) _Bool hasColorPalette; // @dynamic hasColorPalette;
@property(nonatomic) _Bool hasCopyEndpoint; // @dynamic hasCopyEndpoint;
@property(nonatomic) _Bool hasDeleteButton; // @dynamic hasDeleteButton;
@property(nonatomic) _Bool hasDescriptionText; // @dynamic hasDescriptionText;
@property(nonatomic) _Bool hasEditButton; // @dynamic hasEditButton;
@property(nonatomic) _Bool hasEditEndpoint; // @dynamic hasEditEndpoint;
@property(nonatomic) _Bool hasEditSeasonEndpoint; // @dynamic hasEditSeasonEndpoint;
@property(nonatomic) _Bool hasEditableDetails; // @dynamic hasEditableDetails;
@property(nonatomic) _Bool hasEditorEndpoint; // @dynamic hasEditorEndpoint;
@property(nonatomic) _Bool hasFab; // @dynamic hasFab;
@property(nonatomic) _Bool hasFlaggingAction; // @dynamic hasFlaggingAction;
@property(nonatomic) _Bool hasIsEditable; // @dynamic hasIsEditable;
@property(nonatomic) _Bool hasIsPrivate; // @dynamic hasIsPrivate;
@property(nonatomic) _Bool hasLikeButton; // @dynamic hasLikeButton;
@property(nonatomic) _Bool hasLikeData; // @dynamic hasLikeData;
@property(nonatomic) _Bool hasLikesCountWithLikeText; // @dynamic hasLikesCountWithLikeText;
@property(nonatomic) _Bool hasLikesCountWithoutLikeText; // @dynamic hasLikesCountWithoutLikeText;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasMoreActionsMenu; // @dynamic hasMoreActionsMenu;
@property(nonatomic) _Bool hasNotificationPreferenceToggleButton; // @dynamic hasNotificationPreferenceToggleButton;
@property(nonatomic) _Bool hasNumVideosText; // @dynamic hasNumVideosText;
@property(nonatomic) _Bool hasOfflineability; // @dynamic hasOfflineability;
@property(nonatomic) _Bool hasOwnerEndpoint; // @dynamic hasOwnerEndpoint;
@property(nonatomic) _Bool hasOwnerText; // @dynamic hasOwnerText;
@property(nonatomic) _Bool hasPlayButtonText; // @dynamic hasPlayButtonText;
@property(nonatomic) _Bool hasPlaylistHeaderBanner; // @dynamic hasPlaylistHeaderBanner;
@property(nonatomic) _Bool hasPlaylistId; // @dynamic hasPlaylistId;
@property(nonatomic) _Bool hasPlaylistInfoNavigationEndpoint; // @dynamic hasPlaylistInfoNavigationEndpoint;
@property(nonatomic) _Bool hasPrimaryButton; // @dynamic hasPrimaryButton;
@property(nonatomic) _Bool hasPrivacy; // @dynamic hasPrivacy;
@property(nonatomic) _Bool hasSaveButton; // @dynamic hasSaveButton;
@property(nonatomic) _Bool hasSecondaryButton; // @dynamic hasSecondaryButton;
@property(nonatomic) _Bool hasShareButton; // @dynamic hasShareButton;
@property(nonatomic) _Bool hasShareData; // @dynamic hasShareData;
@property(nonatomic) _Bool hasShortViewCountText; // @dynamic hasShortViewCountText;
@property(nonatomic) _Bool hasShouldColorSampleThumbnail; // @dynamic hasShouldColorSampleThumbnail;
@property(nonatomic) _Bool hasShouldFloatTitle; // @dynamic hasShouldFloatTitle;
@property(nonatomic) _Bool hasShouldHideTitleOnTranslucentHeader; // @dynamic hasShouldHideTitleOnTranslucentHeader;
@property(nonatomic) _Bool hasSortFilterMenu; // @dynamic hasSortFilterMenu;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasThumbnailRenderer; // @dynamic hasThumbnailRenderer;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTotalLengthText; // @dynamic hasTotalLengthText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasTranslationEditorEndpoint; // @dynamic hasTranslationEditorEndpoint;
@property(nonatomic) _Bool hasViewCountText; // @dynamic hasViewCountText;
@property(nonatomic) _Bool isEditable; // @dynamic isEditable;
@property(nonatomic) _Bool isPrivate; // @dynamic isPrivate;
@property(retain, nonatomic) YTILikeButtonSupportedRenderers *likeButton; // @dynamic likeButton;
@property(retain, nonatomic) YTILikeData *likeData; // @dynamic likeData;
@property(retain, nonatomic) YTIFormattedString *likesCountWithLikeText; // @dynamic likesCountWithLikeText;
@property(retain, nonatomic) YTIFormattedString *likesCountWithoutLikeText; // @dynamic likesCountWithoutLikeText;
@property(retain, nonatomic) YTIFormattedString *metadata; // @dynamic metadata;
@property(retain, nonatomic) YTIPlaylistHeaderMoreActionsSupportedRenderers *moreActionsMenu; // @dynamic moreActionsMenu;
@property(retain, nonatomic) YTIButtonSupportedRenderers *notificationPreferenceToggleButton; // @dynamic notificationPreferenceToggleButton;
@property(retain, nonatomic) NSMutableArray *notificationsArray; // @dynamic notificationsArray;
@property(readonly, nonatomic) unsigned long long notificationsArray_Count; // @dynamic notificationsArray_Count;
@property(retain, nonatomic) YTIFormattedString *numVideosText; // @dynamic numVideosText;
@property(retain, nonatomic) YTIPlaylistHeaderRenderer_PlaylistHeaderOfflineabilitySupportedRenderers *offlineability; // @dynamic offlineability;
@property(retain, nonatomic) YTICommand *ownerEndpoint; // @dynamic ownerEndpoint;
@property(retain, nonatomic) YTIFormattedString *ownerText; // @dynamic ownerText;
@property(retain, nonatomic) YTIRenderer *playButton; // @dynamic playButton;
@property(retain, nonatomic) YTIFormattedString *playButtonText; // @dynamic playButtonText;
@property(retain, nonatomic) YTICommand *playEndpoint; // @dynamic playEndpoint;
@property(readonly, nonatomic) int playOneOfCase; // @dynamic playOneOfCase;
@property(retain, nonatomic) NSMutableArray *playlistBadgesArray; // @dynamic playlistBadgesArray;
@property(readonly, nonatomic) unsigned long long playlistBadgesArray_Count; // @dynamic playlistBadgesArray_Count;
@property(retain, nonatomic) YTIPlaylistHeaderBannerSupportedRenderers *playlistHeaderBanner; // @dynamic playlistHeaderBanner;
@property(copy, nonatomic) NSString *playlistId; // @dynamic playlistId;
@property(retain, nonatomic) YTICommand *playlistInfoNavigationEndpoint; // @dynamic playlistInfoNavigationEndpoint;
@property(retain, nonatomic) YTIRenderer *primaryButton; // @dynamic primaryButton;
@property(nonatomic) int privacy; // @dynamic privacy;
@property(retain, nonatomic) YTIPlaylistSaveButtonSupportedRenderers *saveButton; // @dynamic saveButton;
@property(retain, nonatomic) YTIRenderer *secondaryButton; // @dynamic secondaryButton;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(retain, nonatomic) YTIPlaylistHeaderShareButtonSupportedRenderers *shareButton; // @dynamic shareButton;
@property(retain, nonatomic) YTIShareData *shareData; // @dynamic shareData;
@property(retain, nonatomic) YTIFormattedString *shortViewCountText; // @dynamic shortViewCountText;
@property(nonatomic) _Bool shouldColorSampleThumbnail; // @dynamic shouldColorSampleThumbnail;
@property(nonatomic) _Bool shouldFloatTitle; // @dynamic shouldFloatTitle;
@property(nonatomic) _Bool shouldHideTitleOnTranslucentHeader; // @dynamic shouldHideTitleOnTranslucentHeader;
@property(readonly, nonatomic) int shuffleOneOfCase; // @dynamic shuffleOneOfCase;
@property(retain, nonatomic) YTIRenderer *shufflePlayButton; // @dynamic shufflePlayButton;
@property(retain, nonatomic) YTICommand *shufflePlayEndpoint; // @dynamic shufflePlayEndpoint;
@property(retain, nonatomic) YTIPlaylistHeaderMenuSupportedRenderers *sortFilterMenu; // @dynamic sortFilterMenu;
@property(retain, nonatomic) NSMutableArray *statsArray; // @dynamic statsArray;
@property(readonly, nonatomic) unsigned long long statsArray_Count; // @dynamic statsArray_Count;
@property(retain, nonatomic) YTIFormattedString *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIPlaylistThumbnailSupportedRenderers *thumbnailRenderer; // @dynamic thumbnailRenderer;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIFormattedString *totalLengthText; // @dynamic totalLengthText;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTICommand *translationEditorEndpoint; // @dynamic translationEditorEndpoint;
@property(retain, nonatomic) YTIFormattedString *viewCountText; // @dynamic viewCountText;

@end
