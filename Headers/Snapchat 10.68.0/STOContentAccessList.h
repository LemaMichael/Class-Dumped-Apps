//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface STOContentAccessList : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool isWhitelist; // @dynamic isWhitelist;
@property(retain, nonatomic) NSMutableArray *listArray; // @dynamic listArray;
@property(readonly, nonatomic) unsigned long long listArray_Count; // @dynamic listArray_Count;

@end

