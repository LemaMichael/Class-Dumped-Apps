//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCNativeMessagingServices : NSObject
{
    SCLazy *_nativeSessionManager;
    SCLazy *_arroyoConversationIdsManager;
    SCLazy *_arroyoOneOnOneConversationsManager;
    SCLazy *_nativeFeedManager;
    SCLazy *_feedClearDataManager;
}

@property(readonly, nonatomic) SCLazy *feedClearDataManager; // @synthesize feedClearDataManager=_feedClearDataManager;
@property(readonly, nonatomic) SCLazy *nativeFeedManager; // @synthesize nativeFeedManager=_nativeFeedManager;
@property(readonly, nonatomic) SCLazy *arroyoOneOnOneConversationsManager; // @synthesize arroyoOneOnOneConversationsManager=_arroyoOneOnOneConversationsManager;
@property(readonly, nonatomic) SCLazy *arroyoConversationIdsManager; // @synthesize arroyoConversationIdsManager=_arroyoConversationIdsManager;
@property(readonly, nonatomic) SCLazy *nativeSessionManager; // @synthesize nativeSessionManager=_nativeSessionManager;
- (void).cxx_destruct;
- (id)initWithNativeSessionManager:(id)arg1 arroyoConversationIdsManager:(id)arg2 arroyoOneOnOneConversationsManager:(id)arg3 nativeFeedManager:(id)arg4 feedClearDataManager:(id)arg5;

@end
