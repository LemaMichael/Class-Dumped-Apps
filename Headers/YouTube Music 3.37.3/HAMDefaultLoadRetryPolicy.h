//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMBaseComponent.h"

#import "HAMLoadRetryPolicy-Protocol.h"

@class HAMExponentialBackoffCalculator, NSError, NSMutableArray, NSString;

@interface HAMDefaultLoadRetryPolicy : HAMBaseComponent <HAMLoadRetryPolicy>
{
    int _maxErrorCount;
    HAMExponentialBackoffCalculator *_backoffCalculator;
    NSMutableArray *_errors;
    CDUnknownBlockType _retryBlock;
    int _retryID;
}

- (void).cxx_destruct;
- (void)executeRetryBlockWithRetryID:(int)arg1;
- (void)cancelRetry;
- (void)scheduleRetryWithBlock:(CDUnknownBlockType)arg1;
- (void)didCompleteLoadWithError:(id)arg1;
@property(readonly, nonatomic) _Bool retryScheduled;
@property(readonly, nonatomic) _Bool canRetry;
@property(readonly, nonatomic) NSError *error;
- (id)initWithContext:(id)arg1 maxErrorCount:(int)arg2;
- (id)initWithContext:(id)arg1 maxErrorCount:(int)arg2 backoffCalculator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
