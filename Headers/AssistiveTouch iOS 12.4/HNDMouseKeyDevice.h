//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HNDMouseDevice.h"

@class AXDispatchTimer;

@interface HNDMouseKeyDevice : HNDMouseDevice
{
    AXDispatchTimer *_repeatTimer;
}

- (void).cxx_destruct;
- (void)processKeyRepeatWithDeltaX:(double)arg1 andDeltaY:(double)arg2;
- (double)mouseKeysRepeatDelay;
- (double)mouseKeysMovementDelay;
- (long long)mouseKeysMovementMultiplier;
- (_Bool)handleHIDEvent:(id)arg1;
- (_Bool)load;
- (void)dealloc;
- (id)init;

@end

