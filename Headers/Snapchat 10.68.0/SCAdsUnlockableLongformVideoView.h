//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatValue, GPBInt64Value;

@interface SCAdsUnlockableLongformVideoView : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMediaDurationSec; // @dynamic hasMediaDurationSec;
@property(nonatomic) _Bool hasOpenTimestampMs; // @dynamic hasOpenTimestampMs;
@property(nonatomic) _Bool hasRenderedTimestampMs; // @dynamic hasRenderedTimestampMs;
@property(nonatomic) _Bool hasViewTimeSec; // @dynamic hasViewTimeSec;
@property(retain, nonatomic) GPBFloatValue *mediaDurationSec; // @dynamic mediaDurationSec;
@property(retain, nonatomic) GPBInt64Value *openTimestampMs; // @dynamic openTimestampMs;
@property(retain, nonatomic) GPBInt64Value *renderedTimestampMs; // @dynamic renderedTimestampMs;
@property(retain, nonatomic) GPBFloatValue *viewTimeSec; // @dynamic viewTimeSec;

@end

