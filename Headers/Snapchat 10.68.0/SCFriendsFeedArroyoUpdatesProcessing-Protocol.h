//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString, SCNMessagingConversation;
@protocol SCDocObjectTransactionContext><SCDocObjectFetching;

@protocol SCFriendsFeedArroyoUpdatesProcessing
- (void)processUpsertConversation:(SCNMessagingConversation *)arg1 messages:(NSArray *)arg2 conversationId:(NSString *)arg3 transactionContext:(id <SCDocObjectTransactionContext><SCDocObjectFetching>)arg4;
@end
