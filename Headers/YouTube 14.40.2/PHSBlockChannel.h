//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PHSChannel.h"

@interface PHSBlockChannel : PHSChannel
{
    CDUnknownBlockType _block;
}

+ (id)channelWithBlockMainThread:(CDUnknownBlockType)arg1;
+ (id)channelWithBlockMainQueue:(CDUnknownBlockType)arg1;
+ (id)channelWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)deliverMessage:(id)arg1;
- (id)initForMainThreadWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end

