//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSAsyncTransactionScheduler, NSMutableArray;

@interface HTSAsyncTransaction : NSObject
{
    NSMutableArray *_operations;
    HTSAsyncTransactionScheduler *_scheduler;
    CDUnknownBlockType _completionBlock;
    unsigned long long _state;
}

@property unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)_ensureTransactionData;
- (void)completeTransaction;
- (void)cancel;
- (void)commit;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

