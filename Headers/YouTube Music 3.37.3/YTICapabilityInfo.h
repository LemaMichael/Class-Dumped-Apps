//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTICapabilityInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *disabledCapabilitiesArray; // @dynamic disabledCapabilitiesArray;
@property(readonly, nonatomic) unsigned long long disabledCapabilitiesArray_Count; // @dynamic disabledCapabilitiesArray_Count;
@property(copy, nonatomic) NSString *golden; // @dynamic golden;
@property(nonatomic) _Bool hasGolden; // @dynamic hasGolden;
@property(nonatomic) _Bool hasProfile; // @dynamic hasProfile;
@property(nonatomic) _Bool hasSnapshot; // @dynamic hasSnapshot;
@property(copy, nonatomic) NSString *profile; // @dynamic profile;
@property(copy, nonatomic) NSString *snapshot; // @dynamic snapshot;
@property(retain, nonatomic) NSMutableArray *supportedCapabilitiesArray; // @dynamic supportedCapabilitiesArray;
@property(readonly, nonatomic) unsigned long long supportedCapabilitiesArray_Count; // @dynamic supportedCapabilitiesArray_Count;

@end

