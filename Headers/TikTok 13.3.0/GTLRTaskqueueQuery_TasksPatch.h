//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRTaskqueueQuery.h"

@class NSString;

@interface GTLRTaskqueueQuery_TasksPatch : GTLRTaskqueueQuery
{
}

+ (id)queryWithObject:(id)arg1 project:(id)arg2 taskqueue:(id)arg3 task:(id)arg4 newLeaseSeconds:(long long)arg5;

// Remaining properties
@property(nonatomic) long long newLeaseSeconds; // @dynamic newLeaseSeconds;
@property(copy, nonatomic) NSString *project; // @dynamic project;
@property(copy, nonatomic) NSString *task; // @dynamic task;
@property(copy, nonatomic) NSString *taskqueue; // @dynamic taskqueue;

@end
