//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HNDDeviceDetector;

@protocol HNDDeviceDetectorDelegate <NSObject>
- (void)deviceDetector:(HNDDeviceDetector *)arg1 unloadDevicesPassingTest:(_Bool (^)(HNDDevice *))arg2;
- (void)deviceDetector:(HNDDeviceDetector *)arg1 didFindDevice:(struct __IOHIDDevice *)arg2;
@end

