//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class FieldRules;

@interface RepeatedRules : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasItems; // @dynamic hasItems;
@property(nonatomic) _Bool hasMaxItems; // @dynamic hasMaxItems;
@property(nonatomic) _Bool hasMinItems; // @dynamic hasMinItems;
@property(nonatomic) _Bool hasUnique; // @dynamic hasUnique;
@property(retain, nonatomic) FieldRules *items; // @dynamic items;
@property(nonatomic) unsigned long long maxItems; // @dynamic maxItems;
@property(nonatomic) unsigned long long minItems; // @dynamic minItems;
@property(nonatomic) _Bool unique; // @dynamic unique;

@end

