//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface RPCReportLocations : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long earliestTimestampMillis; // @dynamic earliestTimestampMillis;
@property(nonatomic) _Bool hasEarliestTimestampMillis; // @dynamic hasEarliestTimestampMillis;
@property(nonatomic) _Bool hasLatencyMillis; // @dynamic hasLatencyMillis;
@property(nonatomic) _Bool hasLatestTimestampMillis; // @dynamic hasLatestTimestampMillis;
@property(nonatomic) long long latencyMillis; // @dynamic latencyMillis;
@property(nonatomic) long long latestTimestampMillis; // @dynamic latestTimestampMillis;

@end
