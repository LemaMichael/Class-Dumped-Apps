//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCPBDynamicContentSetting : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long autoRefreshDelayInMilli; // @dynamic autoRefreshDelayInMilli;
@property(nonatomic) float autoRefreshMessageXLandscape; // @dynamic autoRefreshMessageXLandscape;
@property(nonatomic) float autoRefreshMessageXPortrait; // @dynamic autoRefreshMessageXPortrait;
@property(nonatomic) float autoRefreshMessageYLandscape; // @dynamic autoRefreshMessageYLandscape;
@property(nonatomic) float autoRefreshMessageYPortrait; // @dynamic autoRefreshMessageYPortrait;
@property(copy, nonatomic) NSString *dynamicFilterRefreshHint; // @dynamic dynamicFilterRefreshHint;
@property(copy, nonatomic) NSString *dynamicFilterUpdatingMessage; // @dynamic dynamicFilterUpdatingMessage;

@end

