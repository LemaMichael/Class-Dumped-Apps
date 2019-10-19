//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTLogTestModule-Protocol.h"

@class NSString;

@interface TTLogServer : NSObject <TTLogTestModule>
{
}

+ (_Bool)debugLogEnable;
+ (_Bool)logEnable;
+ (void)clearLogServer;
+ (_Bool)autoStartLogger;
+ (void)setAutoStartLogger:(_Bool)arg1;
+ (id)logServerAddress;
+ (void)setLogServerAddress:(id)arg1;
+ (void)sendValueToLogServer:(id)arg1 parameters:(id)arg2;
+ (void)sendValueToLogServer:(id)arg1;
+ (void)stopLogger;
+ (void)startAutoStartLogger;
+ (void)startLogger;
+ (void)configWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
