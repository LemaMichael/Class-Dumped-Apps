//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface WeatherContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(copy, nonatomic) NSString *observationTime; // @dynamic observationTime;
@property(nonatomic) double tempC; // @dynamic tempC;
@property(nonatomic) double tempF; // @dynamic tempF;
@property(copy, nonatomic) NSString *weather; // @dynamic weather;
@property(copy, nonatomic) NSString *wind; // @dynamic wind;

@end

