//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface TIMPBNMarkConversationReadNotify : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) int conversationType; // @dynamic conversationType;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationType; // @dynamic hasConversationType;
@property(nonatomic) _Bool hasReadIndex; // @dynamic hasReadIndex;
@property(nonatomic) long long readIndex; // @dynamic readIndex;

@end
