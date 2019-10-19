//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString, YTIThumbnailDetails;

@interface YTIMobileStreamEndscreenRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPageTitle; // @dynamic hasPageTitle;
@property(nonatomic) _Bool hasStreamInfo; // @dynamic hasStreamInfo;
@property(nonatomic) _Bool hasStreamPrivacy; // @dynamic hasStreamPrivacy;
@property(nonatomic) _Bool hasStreamThumbnail; // @dynamic hasStreamThumbnail;
@property(nonatomic) _Bool hasStreamTitle; // @dynamic hasStreamTitle;
@property(retain, nonatomic) NSMutableArray *navigationButtonsArray; // @dynamic navigationButtonsArray;
@property(readonly, nonatomic) unsigned long long navigationButtonsArray_Count; // @dynamic navigationButtonsArray_Count;
@property(retain, nonatomic) YTIFormattedString *pageTitle; // @dynamic pageTitle;
@property(retain, nonatomic) YTIFormattedString *streamInfo; // @dynamic streamInfo;
@property(nonatomic) int streamPrivacy; // @dynamic streamPrivacy;
@property(retain, nonatomic) NSMutableArray *streamStatsArray; // @dynamic streamStatsArray;
@property(readonly, nonatomic) unsigned long long streamStatsArray_Count; // @dynamic streamStatsArray_Count;
@property(retain, nonatomic) YTIThumbnailDetails *streamThumbnail; // @dynamic streamThumbnail;
@property(retain, nonatomic) YTIFormattedString *streamTitle; // @dynamic streamTitle;

@end
