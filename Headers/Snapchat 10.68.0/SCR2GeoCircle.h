//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCR2GeoLocation;

@interface SCR2GeoCircle : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCR2GeoLocation *center; // @dynamic center;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(nonatomic) double radiusInMeters; // @dynamic radiusInMeters;

@end

