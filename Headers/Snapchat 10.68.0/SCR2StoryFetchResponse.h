//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCR2SearchResponse, SCR2Status;

@interface SCR2StoryFetchResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *compositeStoryId; // @dynamic compositeStoryId;
@property(copy, nonatomic) NSString *destinationId; // @dynamic destinationId;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasStoryMetadata; // @dynamic hasStoryMetadata;
@property(retain, nonatomic) SCR2Status *status; // @dynamic status;
@property(retain, nonatomic) SCR2SearchResponse *storyMetadata; // @dynamic storyMetadata;

@end

