//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIStallDetectorSettings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasStallBreakpadUploadProductId; // @dynamic hasStallBreakpadUploadProductId;
@property(nonatomic) _Bool hasStallEnableUploadingBreakpadReports; // @dynamic hasStallEnableUploadingBreakpadReports;
@property(nonatomic) _Bool hasStallFractionOfRunsToUploadBreakpadReports; // @dynamic hasStallFractionOfRunsToUploadBreakpadReports;
@property(nonatomic) _Bool hasStallLoggingThresholdMs; // @dynamic hasStallLoggingThresholdMs;
@property(copy, nonatomic) NSString *stallBreakpadUploadProductId; // @dynamic stallBreakpadUploadProductId;
@property(nonatomic) _Bool stallEnableUploadingBreakpadReports; // @dynamic stallEnableUploadingBreakpadReports;
@property(nonatomic) float stallFractionOfRunsToUploadBreakpadReports; // @dynamic stallFractionOfRunsToUploadBreakpadReports;
@property(nonatomic) float stallLoggingThresholdMs; // @dynamic stallLoggingThresholdMs;

@end

