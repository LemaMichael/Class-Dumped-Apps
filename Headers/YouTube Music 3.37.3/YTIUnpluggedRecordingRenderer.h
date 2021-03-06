//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString;

@interface YTIUnpluggedRecordingRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *completeText; // @dynamic completeText;
@property(nonatomic) _Bool hasCompleteText; // @dynamic hasCompleteText;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasNoRecordingText; // @dynamic hasNoRecordingText;
@property(nonatomic) _Bool hasRecordingText; // @dynamic hasRecordingText;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpcomingText; // @dynamic hasUpcomingText;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *noRecordingText; // @dynamic noRecordingText;
@property(retain, nonatomic) YTIFormattedString *recordingText; // @dynamic recordingText;
@property(retain, nonatomic) NSMutableArray *recordingsArray; // @dynamic recordingsArray;
@property(readonly, nonatomic) unsigned long long recordingsArray_Count; // @dynamic recordingsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIFormattedString *upcomingText; // @dynamic upcomingText;

@end

