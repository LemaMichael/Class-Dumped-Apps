//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface AWEModernFullScreenTransManager : NSObject
{
    _Bool _isTransition;
    NSObject<OS_dispatch_queue> *_executeQueue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executeQueue; // @synthesize executeQueue=_executeQueue;
@property(nonatomic) _Bool isTransition; // @synthesize isTransition=_isTransition;
- (void).cxx_destruct;
- (void)updateTransitionStatus:(_Bool)arg1 delay:(double)arg2;
- (void)updateTransitionStatus:(_Bool)arg1;
- (_Bool)isTransitioning;

@end
