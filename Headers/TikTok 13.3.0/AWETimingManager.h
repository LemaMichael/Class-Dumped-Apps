//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface AWETimingManager : NSObject
{
    NSMutableDictionary *_timingDict;
    NSObject<OS_dispatch_semaphore> *_lock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *timingDict; // @synthesize timingDict=_timingDict;
- (void).cxx_destruct;
- (void)cancelTimingForKey:(id)arg1;
- (double)stopTimingForKey:(id)arg1;
- (double)timeIntervalForKey:(id)arg1;
- (void)startTimingForKey:(id)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

