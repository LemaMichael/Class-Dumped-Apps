//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PRMCollectible.h"

#import "PRMDeferredCollectible-Protocol.h"
#import "PRMProvidableCollectible-Protocol.h"

@class NSString;

@interface PRMTimerCollectible : PRMCollectible <PRMDeferredCollectible, PRMProvidableCollectible>
{
    _Bool _isLongTerm;
    unsigned long long _timeoutInMs;
    unsigned long long _startTime;
    unsigned long long _durationMs;
}

+ (unsigned long long)collectibleType;
+ (void)setDefaultTimeoutInMs:(unsigned long long)arg1;
@property(nonatomic) _Bool isLongTerm; // @synthesize isLongTerm=_isLongTerm;
@property(readonly, nonatomic) unsigned long long durationMs; // @synthesize durationMs=_durationMs;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned long long timeoutInMs; // @synthesize timeoutInMs=_timeoutInMs;
- (void)stopCollecting;
- (void)startCollecting;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

