//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCCOREUUID, SCCTTopic_Metadata, SCCTTopic_StickerVisibility, StoryDoc_ID;

@interface SCCTTopic : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasRelatedStoryId; // @dynamic hasRelatedStoryId;
@property(nonatomic) _Bool hasStickerVisibility; // @dynamic hasStickerVisibility;
@property(nonatomic) _Bool hasTopicId; // @dynamic hasTopicId;
@property(retain, nonatomic) SCCTTopic_Metadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) StoryDoc_ID *relatedStoryId; // @dynamic relatedStoryId;
@property(retain, nonatomic) SCCTTopic_StickerVisibility *stickerVisibility; // @dynamic stickerVisibility;
@property(retain, nonatomic) SCCOREUUID *topicId; // @dynamic topicId;

@end

