//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BugsnagConfiguration, NSOperationQueue, NSURLSession;

@interface BugsnagApiClient : NSObject
{
    NSOperationQueue *_sendQueue;
    BugsnagConfiguration *_config;
    NSURLSession *_generatedSession;
}

@property(retain, nonatomic) NSURLSession *generatedSession; // @synthesize generatedSession=_generatedSession;
@property(readonly) BugsnagConfiguration *config; // @synthesize config=_config;
@property(readonly) NSOperationQueue *sendQueue; // @synthesize sendQueue=_sendQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (id)prepareRequest:(id)arg1 headers:(id)arg2;
- (id)prepareSession;
- (void)sendItems:(unsigned long long)arg1 withPayload:(id)arg2 toURL:(id)arg3 headers:(id)arg4 onCompletion:(CDUnknownBlockType)arg5;
- (id)deliveryOperation;
- (void)flushPendingData;
- (id)initWithConfig:(id)arg1 queueName:(id)arg2;

@end
