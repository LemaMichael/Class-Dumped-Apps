//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIFrameworkUpdateTransport, YTIResponseContext;

@interface YTISetSettingResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) YTIFrameworkUpdateTransport *frameworkUpdates; // @dynamic frameworkUpdates;
@property(nonatomic) _Bool hasFrameworkUpdates; // @dynamic hasFrameworkUpdates;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasSettingItemId; // @dynamic hasSettingItemId;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(copy, nonatomic) NSString *settingItemId; // @dynamic settingItemId;

@end
