//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FPSDelegate-Protocol.h"

@class FPSCounter, NSMutableSet, NSString;

@interface QoeDataProfiler : NSObject <FPSDelegate>
{
    _Bool _trackFps;
    _Bool _trackBattery;
    _Bool _trackMemory;
    _Bool _trackCpu;
    _Bool _active;
    FPSCounter *_fpsCounter;
    NSMutableSet *_activeProfiles;
}

@property(retain) NSMutableSet *activeProfiles; // @synthesize activeProfiles=_activeProfiles;
@property(retain) FPSCounter *fpsCounter; // @synthesize fpsCounter=_fpsCounter;
@property _Bool active; // @synthesize active=_active;
@property _Bool trackCpu; // @synthesize trackCpu=_trackCpu;
@property _Bool trackMemory; // @synthesize trackMemory=_trackMemory;
@property _Bool trackBattery; // @synthesize trackBattery=_trackBattery;
@property _Bool trackFps; // @synthesize trackFps=_trackFps;
- (void).cxx_destruct;
- (void)fpsUpdate:(int)arg1;
- (void)removeProfile:(id)arg1;
- (id)newProfile;
- (void)stopProfiling;
- (void)startProfiling:(double)arg1;
- (void)synchronizedStore:(CDUnknownBlockType)arg1;
- (void)storeFps:(int)arg1;
- (void)storeMemory:(double)arg1 free:(double)arg2 used:(double)arg3;
- (void)storeCpu:(double)arg1 activeProcessors:(unsigned long long)arg2;
- (void)storeBattery:(double)arg1 state:(long long)arg2;
- (void)collectAndStoreData;
- (void)schedule:(double)arg1;
- (id)initForTrackingFps:(_Bool)arg1 battery:(_Bool)arg2 memory:(_Bool)arg3 cpu:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

