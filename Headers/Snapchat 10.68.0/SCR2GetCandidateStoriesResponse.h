//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBStringInt64Dictionary, NSMutableArray;

@interface SCR2GetCandidateStoriesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *candidateStoriesArray; // @dynamic candidateStoriesArray;
@property(readonly, nonatomic) unsigned long long candidateStoriesArray_Count; // @dynamic candidateStoriesArray_Count;
@property(retain, nonatomic) GPBStringInt64Dictionary *dataTimestampMsecs; // @dynamic dataTimestampMsecs;
@property(readonly, nonatomic) unsigned long long dataTimestampMsecs_Count; // @dynamic dataTimestampMsecs_Count;

@end

