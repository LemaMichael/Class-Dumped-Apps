//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBTimestamp;

@interface CappedPromotion : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBTimestamp *cappedUntil; // @dynamic cappedUntil;
@property(nonatomic) _Bool hasCappedUntil; // @dynamic hasCappedUntil;
@property(nonatomic) int impressionCappingId; // @dynamic impressionCappingId;

@end
