//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@protocol YTOfflineConfig <NSObject>
@property(nonatomic, getter=areOfflineAdFrequencyCapsIgnored) _Bool offlineAdFrequencyCapsIgnored;
@property(nonatomic, getter=isOfflineRefreshFast) _Bool offlineRefreshFast;
@property(retain, nonatomic) NSDate *offlineRefreshDate;
@property(nonatomic) int maximumOfflineVideoQuality;
@property(nonatomic) _Bool onlyDownloadOverWiFi;

@optional
@property(nonatomic) double offlineRefreshInterval;
@property(nonatomic) int maximumOfflineAudioQuality;
@end

