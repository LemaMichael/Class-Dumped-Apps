//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString;

@interface YTIAnalyticsRealtimeHeaderRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *displayValue; // @dynamic displayValue;
@property(nonatomic) long long end; // @dynamic end;
@property(nonatomic) _Bool hasDisplayValue; // @dynamic hasDisplayValue;
@property(nonatomic) _Bool hasEnd; // @dynamic hasEnd;
@property(nonatomic) _Bool hasMinutesOffset; // @dynamic hasMinutesOffset;
@property(nonatomic) _Bool hasStart; // @dynamic hasStart;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) long long minutesOffset; // @dynamic minutesOffset;
@property(nonatomic) long long start; // @dynamic start;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end
