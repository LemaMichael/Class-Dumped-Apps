//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIEditVideoEndpoint_GalleryAsset, YTIVideoAttachmentSettings;

@interface YTIEditVideoEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIVideoAttachmentSettings *attachmentSettings; // @dynamic attachmentSettings;
@property(copy, nonatomic) NSString *clientVideoId; // @dynamic clientVideoId;
@property(retain, nonatomic) YTIEditVideoEndpoint_GalleryAsset *galleryAsset; // @dynamic galleryAsset;
@property(nonatomic) _Bool hasAttachmentSettings; // @dynamic hasAttachmentSettings;
@property(readonly, nonatomic) int targetOneOfCase; // @dynamic targetOneOfCase;

@end

