//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCollectionViewCell.h"

#import "YTCollectionViewCellProtocol.h"
#import "YTSubscribableChannelCell.h"
#import "YTThumbnailMapping.h"

@class NSString, YTCompactChannelMetadataView, YTICompactChannelRenderer, YTImageView, YTSubscribeSwitch;

@interface YTCompactChannelCell : YTCollectionViewCell <YTThumbnailMapping, YTSubscribableChannelCell, YTCollectionViewCellProtocol>
{
    YTICompactChannelRenderer *_entry;
    YTImageView *_thumbnailImageView;
    YTSubscribeSwitch *_subscribeSwitch;
    id <YTResponder> _parentResponder;
    YTCompactChannelMetadataView *_channelMetadataView;
}

+ (double)cellHeightForEntry:(id)arg1;
+ (struct CGSize)cellSizeForEntry:(id)arg1 size:(struct CGSize)arg2;
+ (double)paddingY;
@property(retain, nonatomic) YTCompactChannelMetadataView *channelMetadataView; // @synthesize channelMetadataView=_channelMetadataView;
- (void)setParentResponder:(id)arg1;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (void).cxx_destruct;
- (id)thumbnailMappings;
- (id)subscribeSwitch;
- (void)enableSubscribeSwitch;
- (id)entry;
- (void)setEntry:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews_regular;
- (void)layoutSubviews_compact;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)thumbnailSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

