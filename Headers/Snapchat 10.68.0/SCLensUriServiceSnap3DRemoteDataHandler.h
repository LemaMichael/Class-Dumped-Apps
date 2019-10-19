//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensUriServiceProviderRouteHandler-Protocol.h"

@class NSString, SCPromise;

@interface SCLensUriServiceSnap3DRemoteDataHandler : NSObject <SCLensUriServiceProviderRouteHandler>
{
    SCPromise *_dataPromise;
    _Bool _promiseCompleted;
}

+ (_Bool)_isWithinSizeLimitOfPayloadData:(id)arg1;
+ (id)_snappablesUriServiceErrorWithCode:(long long)arg1;
- (void).cxx_destruct;
- (id)_handleSendRequest:(id)arg1 defaultResponse:(id)arg2;
- (id)_handleInitRequest:(id)arg1 defaultResponse:(id)arg2;
- (void)handleRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)remoteDataFuture;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
