//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeRequestService.h"

@class YTApiaryResourceParser;

@interface YTShareRPCService : YTBaseInnerTubeRequestService
{
    YTApiaryResourceParser *_editNonGaiaConnectionStateParser;
    YTApiaryResourceParser *_sendShareParser;
    YTApiaryResourceParser *_contactMenuParser;
}

- (void).cxx_destruct;
- (void)makeGetContactMenuRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makeEditNonGaiaConnectionStateRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (void)makeSendShareRequest:(id)arg1 responseBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

