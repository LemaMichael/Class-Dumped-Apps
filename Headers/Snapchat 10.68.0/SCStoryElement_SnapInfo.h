//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSMutableDictionary, NSString, SASAudioStitch, SCContextContextHint, SCLocalizedStringSet, SCMTOneSnapInfo, SCMTPublicMediaInfo, SCMTStreamingMediaInfo, SCMTThumbnailInfo;

@interface SCStoryElement_SnapInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *attachmentURL; // @dynamic attachmentURL;
@property(retain, nonatomic) SASAudioStitch *audioStitch; // @dynamic audioStitch;
@property(retain, nonatomic) SCContextContextHint *contextHint; // @dynamic contextHint;
@property(copy, nonatomic) NSString *creatorId; // @dynamic creatorId;
@property(copy, nonatomic) NSString *deprecatedTitle; // @dynamic deprecatedTitle;
@property(nonatomic) _Bool hasAudioStitch; // @dynamic hasAudioStitch;
@property(nonatomic) _Bool hasContextHint; // @dynamic hasContextHint;
@property(nonatomic) _Bool hasLensMetadata; // @dynamic hasLensMetadata;
@property(nonatomic) _Bool hasLocalitySubtitle; // @dynamic hasLocalitySubtitle;
@property(nonatomic) _Bool hasPublicMediaInfo; // @dynamic hasPublicMediaInfo;
@property(nonatomic) _Bool hasStreamingMediaInfo; // @dynamic hasStreamingMediaInfo;
@property(nonatomic) _Bool hasStreamingSnapInfo; // @dynamic hasStreamingSnapInfo;
@property(nonatomic) _Bool hasStreamingThumbnailInfo; // @dynamic hasStreamingThumbnailInfo;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool isZipped; // @dynamic isZipped;
@property(retain, nonatomic) SCLocalizedStringSet *localitySubtitle; // @dynamic localitySubtitle;
@property(retain, nonatomic) NSMutableDictionary *localizedAddresses; // @dynamic localizedAddresses;
@property(readonly, nonatomic) unsigned long long localizedAddresses_Count; // @dynamic localizedAddresses_Count;
@property(copy, nonatomic) NSString *mediaIv; // @dynamic mediaIv;
@property(copy, nonatomic) NSString *mediaKey; // @dynamic mediaKey;
@property(copy, nonatomic) NSString *mediaURL; // @dynamic mediaURL;
@property(copy, nonatomic) NSString *overlayText; // @dynamic overlayText;
@property(retain, nonatomic) SCMTPublicMediaInfo *publicMediaInfo; // @dynamic publicMediaInfo;
@property(copy, nonatomic) NSString *snapMediaId; // @dynamic snapMediaId;
@property(nonatomic) int snapMediaType; // @dynamic snapMediaType;
@property(nonatomic) int source; // @dynamic source;
@property(retain, nonatomic) SCMTStreamingMediaInfo *streamingMediaInfo; // @dynamic streamingMediaInfo;
@property(retain, nonatomic) SCMTOneSnapInfo *streamingSnapInfo; // @dynamic streamingSnapInfo;
@property(retain, nonatomic) SCMTThumbnailInfo *streamingThumbnailInfo; // @dynamic streamingThumbnailInfo;
@property(nonatomic) _Bool suppressContext; // @dynamic suppressContext;
@property(retain, nonatomic) SCLocalizedStringSet *title; // @dynamic title;
@property(retain, nonatomic) NSMutableArray *titlesForMaxZoomArray; // @dynamic titlesForMaxZoomArray;
@property(readonly, nonatomic) unsigned long long titlesForMaxZoomArray_Count; // @dynamic titlesForMaxZoomArray_Count;
@property(copy, nonatomic) NSString *unlockablesSnapInfo; // @dynamic unlockablesSnapInfo;
@property(copy, nonatomic) NSString *venueId; // @dynamic venueId;

@end
