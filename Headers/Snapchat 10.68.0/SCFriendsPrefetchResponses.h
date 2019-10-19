//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary;

@interface SCFriendsPrefetchResponses : NSObject <NSCopying, NSCoding>
{
    NSArray *_incomingFriendNotificationInfos;
    NSDictionary *_sojuResponseDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *sojuResponseDictionary; // @synthesize sojuResponseDictionary=_sojuResponseDictionary;
@property(readonly, copy, nonatomic) NSArray *incomingFriendNotificationInfos; // @synthesize incomingFriendNotificationInfos=_incomingFriendNotificationInfos;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIncomingFriendNotificationInfos:(id)arg1 sojuResponseDictionary:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
