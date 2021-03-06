//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMDRecordStoreObject-Protocol.h"

@class NSDictionary, NSLock, NSString;
@protocol HMDApplicationSessionUpdate;

@interface HMDApplicationSession : NSObject <HMDRecordStoreObject>
{
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _duration
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _memoryUsage
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _freeDisk
    // Error parsing type: {atomic<double>="__a_"Ad}, name: _freeMemory
    // Error parsing type: {atomic<unsigned long>="__a_"AQ}, name: _localID
    double _timestamp;
    NSDictionary *_customParams;
    NSDictionary *_filters;
    id <HMDApplicationSessionUpdate> _delegate;
    NSString *_sessionID;
    double _timeInSession;
    NSString *_eternalSessionID;
    NSString *_osVersion;
    NSString *_appVersion;
    NSString *_buildVersion;
    NSString *_sdkVersion;
    NSLock *_accessLock;
}

+ (id)HMD_BGTool_overrideIvarTypeForIvarNameWithoutPrefixUnderscore:(id)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)bg_ignoreKeys;
+ (id)tableName;
@property(retain, nonatomic) NSLock *accessLock; // @synthesize accessLock=_accessLock;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain) NSString *eternalSessionID; // @synthesize eternalSessionID=_eternalSessionID;
@property(nonatomic) double timeInSession; // @synthesize timeInSession=_timeInSession;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) __weak id <HMDApplicationSessionUpdate> delegate; // @synthesize delegate=_delegate;
@property double timestamp; // @synthesize timestamp=_timestamp;
- (void).cxx_destruct;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
-     // Error parsing type: ^{atomic<double>=Ad}24@0:8@16, name: ivarAddressForAtomicDoubleType:
@property(retain) NSDictionary *filters; // @synthesize filters=_filters;
@property(copy) NSDictionary *customParams; // @synthesize customParams=_customParams;
@property double freeMemory; // @dynamic freeMemory;
@property double freeDisk; // @dynamic freeDisk;
@property double memoryUsage; // @dynamic memoryUsage;
@property double duration; // @dynamic duration;
@property unsigned long long localID; // @dynamic localID;
- (void)dealloc;
@property(readonly, getter=isBackgroundStatus) _Bool backgroundStatus; // @dynamic backgroundStatus;
- (void)observeForgroundNotification;
- (void)observeBackgroundNotification;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

