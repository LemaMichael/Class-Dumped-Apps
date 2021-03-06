//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSTimer, UIControl;

@interface AWEParallelActionsManager : NSObject
{
    _Bool _lockStatus;
    NSTimer *_autoUnlockTimer;
    UIControl *_lockedControl;
    NSArray *_exceptionClasses;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSArray *exceptionClasses; // @synthesize exceptionClasses=_exceptionClasses;
@property(retain, nonatomic) UIControl *lockedControl; // @synthesize lockedControl=_lockedControl;
@property(retain, nonatomic) NSTimer *autoUnlockTimer; // @synthesize autoUnlockTimer=_autoUnlockTimer;
@property(nonatomic) _Bool lockStatus; // @synthesize lockStatus=_lockStatus;
- (void).cxx_destruct;
- (_Bool)isCurrentLockingControl:(id)arg1;
- (_Bool)locked;
- (void)invalidateTimer;
- (void)unlockImmediately;
- (void)unlockAfterDelay:(double)arg1;
- (void)unlock;
- (_Bool)tryLock;
- (void)lock:(id)arg1;

@end

