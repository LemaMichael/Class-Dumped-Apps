//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface ELMPBLocalEntitiesConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasResultField; // @dynamic hasResultField;
@property(retain, nonatomic) NSMutableArray *mappingsArray; // @dynamic mappingsArray;
@property(readonly, nonatomic) unsigned long long mappingsArray_Count; // @dynamic mappingsArray_Count;
@property(nonatomic) int resultField; // @dynamic resultField;

@end
