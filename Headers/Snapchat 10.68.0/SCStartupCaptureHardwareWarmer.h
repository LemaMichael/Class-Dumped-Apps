//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCQueuePerformer;

@interface SCStartupCaptureHardwareWarmer : NSObject
{
    _Bool _warmupScheduled;
    _Bool _needToScheduleCameraWarmupForHeadlessMode;
    SCQueuePerformer *_captureHardwareWarmerPerformer;
}

- (void).cxx_destruct;
- (void)applicationDidEnterBackground;
- (void)applicationEnterForegroundCheckForCameraWarmupInCaseHeadless;
- (void)warmupCaptureHardwareForNormalColdStart:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)markHeadlessLaunchNotToCameraScreen;
- (void)markHeadlessColdStart;
- (id)init;

@end

