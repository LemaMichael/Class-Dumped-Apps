//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPEventFieldProviderBase-Protocol.h"

@class NSString;

@protocol AMPEventFieldProvider <AMPEventFieldProviderBase>
- (long long)appStartupType;
- (NSString *)linkId;
- (long long)deeplinkSourceType;
- (_Bool)isAppOpenFromDeepLink;
- (NSString *)clientId;
- (_Bool)hasBitmoji;
- (NSString *)schemeName;
- (NSString *)appVersion;
- (NSString *)osVersion;
- (NSString *)devicePlatform;
- (NSString *)deviceModel;
- (long long)connectionDownloadBandwidthBps;
- (NSString *)userLocale;
- (_Bool)travelModeEnabled;
- (long long)connectivityType;
- (NSString *)userAgent;
- (NSString *)userGuid;
- (NSString *)userName;
@end

