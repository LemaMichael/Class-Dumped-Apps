//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCProfileChatMediaFolderActionHandler.h"

@class NSString, SCLazy, SCProfileChatMediaDataSource, SCUserSession;

@interface SCProfileChatMediaActionHandler : SCProfileChatMediaFolderActionHandler
{
    SCProfileChatMediaDataSource *_profileChatMediaDataSource;
    SCUserSession *_userSession;
    SCLazy *_snapchattersDataProvider;
    NSString *_sessionId;
}

- (void).cxx_destruct;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithProfileChatMediaDataSource:(id)arg1 userSession:(id)arg2 snapchattersDataProvider:(id)arg3 sessionId:(id)arg4 openSource:(unsigned long long)arg5;

@end
