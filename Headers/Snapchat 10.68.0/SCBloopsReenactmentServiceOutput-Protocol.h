//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SCBloopsModel, SCBloopsReenactmentResult, SCBloopsReenactmentService;

@protocol SCBloopsReenactmentServiceOutput <NSObject>
- (void)bloopsReenactmentService:(id <SCBloopsReenactmentService>)arg1 didFailReenactmentResultForModel:(id <SCBloopsModel>)arg2 withError:(NSError *)arg3;
- (void)bloopsReenactmentService:(id <SCBloopsReenactmentService>)arg1 isReadyToShowReenactmentResult:(id <SCBloopsReenactmentResult>)arg2;
@end
