//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, NSMutableArray;

@interface YTIIosUserNotificationsRegistrationConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *categoriesArray; // @dynamic categoriesArray;
@property(readonly, nonatomic) unsigned long long categoriesArray_Count; // @dynamic categoriesArray_Count;
@property(retain, nonatomic) GPBEnumArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;

@end
