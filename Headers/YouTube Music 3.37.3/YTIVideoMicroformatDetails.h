//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIVideoMicroformatDetails : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *durationIso8601; // @dynamic durationIso8601;
@property(nonatomic) long long durationSeconds; // @dynamic durationSeconds;
@property(copy, nonatomic) NSString *externalVideoId; // @dynamic externalVideoId;
@property(nonatomic) _Bool hasDurationIso8601; // @dynamic hasDurationIso8601;
@property(nonatomic) _Bool hasDurationSeconds; // @dynamic hasDurationSeconds;
@property(nonatomic) _Bool hasExternalVideoId; // @dynamic hasExternalVideoId;

@end

