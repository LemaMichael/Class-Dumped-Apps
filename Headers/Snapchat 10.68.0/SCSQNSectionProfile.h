//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCSQNSectionProfile : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned long long aggregationMinTimeMsecs; // @dynamic aggregationMinTimeMsecs;
@property(nonatomic) unsigned long long aggregationWindowMsecs; // @dynamic aggregationWindowMsecs;
@property(nonatomic) int sectionType; // @dynamic sectionType;
@property(retain, nonatomic) NSMutableArray *statsArray; // @dynamic statsArray;
@property(readonly, nonatomic) unsigned long long statsArray_Count; // @dynamic statsArray_Count;

@end

