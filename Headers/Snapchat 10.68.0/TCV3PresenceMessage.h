//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface TCV3PresenceMessage : NSObject
{
    NSString *_conversationId;
    NSArray *_recipients;
    NSDictionary *_legacyPresences;
    NSDictionary *_extendedPresences;
    NSDictionary *_presencesMetadata;
    NSNumber *_sequenceNumber;
}

+ (id)PresenceMessageWithConversationId:(id)arg1 recipients:(id)arg2 legacyPresences:(id)arg3 extendedPresences:(id)arg4 presencesMetadata:(id)arg5 sequenceNumber:(id)arg6;
@property(readonly, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, nonatomic) NSDictionary *presencesMetadata; // @synthesize presencesMetadata=_presencesMetadata;
@property(readonly, nonatomic) NSDictionary *extendedPresences; // @synthesize extendedPresences=_extendedPresences;
@property(readonly, nonatomic) NSDictionary *legacyPresences; // @synthesize legacyPresences=_legacyPresences;
@property(readonly, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;
@property(readonly, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (id)description;
- (id)initWithConversationId:(id)arg1 recipients:(id)arg2 legacyPresences:(id)arg3 extendedPresences:(id)arg4 presencesMetadata:(id)arg5 sequenceNumber:(id)arg6;

@end

