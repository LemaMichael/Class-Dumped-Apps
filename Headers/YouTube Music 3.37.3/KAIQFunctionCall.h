//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface KAIQFunctionCall : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *argumentArray; // @dynamic argumentArray;
@property(readonly, nonatomic) unsigned long long argumentArray_Count; // @dynamic argumentArray_Count;
@property(nonatomic) _Bool hasIsFromContext; // @dynamic hasIsFromContext;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasParsingScore; // @dynamic hasParsingScore;
@property(nonatomic) _Bool isFromContext; // @dynamic isFromContext;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) double parsingScore; // @dynamic parsingScore;

@end
