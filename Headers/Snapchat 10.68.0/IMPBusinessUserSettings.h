//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class IMPBusinessUserSettings_NotificationSettings;

@interface IMPBusinessUserSettings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasNotificationSettings; // @dynamic hasNotificationSettings;
@property(nonatomic) long long newestReadNotificationTimestamp; // @dynamic newestReadNotificationTimestamp;
@property(retain, nonatomic) IMPBusinessUserSettings_NotificationSettings *notificationSettings; // @dynamic notificationSettings;
@property(nonatomic) int profileManagementViewCount; // @dynamic profileManagementViewCount;
@property(nonatomic) _Bool showStoryAttribution; // @dynamic showStoryAttribution;

@end

