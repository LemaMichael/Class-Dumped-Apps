//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FIRMessagingLogger : NSObject
{
}

+ (id)formatMessageCode:(long long)arg1;
+ (id)standardLogger;
- (void)logFuncError:(const char *)arg1 messageCode:(long long)arg2 msg:(id)arg3;
- (void)logFuncWarning:(const char *)arg1 messageCode:(long long)arg2 msg:(id)arg3;
- (void)logFuncNotice:(const char *)arg1 messageCode:(long long)arg2 msg:(id)arg3;
- (void)logFuncInfo:(const char *)arg1 messageCode:(long long)arg2 msg:(id)arg3;
- (void)logFuncDebug:(const char *)arg1 messageCode:(long long)arg2 msg:(id)arg3;

@end
