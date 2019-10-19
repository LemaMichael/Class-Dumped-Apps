//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUSecurityFideliusDeviceRecipientInfo-Protocol.h"

@class NSNumber, NSString;

@interface SOJUSecurityFideliusDeviceRecipientInfo : NSObject <SOJUSecurityFideliusDeviceRecipientInfo>
{
    NSString *_senderOutDelta;
    NSString *_senderOutDeltaCheck;
    NSNumber *_counter;
    NSString *_na;
    NSString *_phi;
    NSString *_tag;
    NSString *_recipientOutDelta;
    NSString *_recipientOutDeltaCheck;
    NSString *_senderUserId;
    NSString *_recipientUserId;
    NSNumber *_recipientVersion;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *recipientVersion; // @synthesize recipientVersion=_recipientVersion;
@property(readonly, copy, nonatomic) NSString *recipientUserId; // @synthesize recipientUserId=_recipientUserId;
@property(readonly, copy, nonatomic) NSString *senderUserId; // @synthesize senderUserId=_senderUserId;
@property(readonly, copy, nonatomic) NSString *recipientOutDeltaCheck; // @synthesize recipientOutDeltaCheck=_recipientOutDeltaCheck;
@property(readonly, copy, nonatomic) NSString *recipientOutDelta; // @synthesize recipientOutDelta=_recipientOutDelta;
@property(readonly, copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, copy, nonatomic) NSString *phi; // @synthesize phi=_phi;
@property(readonly, copy, nonatomic) NSString *na; // @synthesize na=_na;
@property(readonly, copy, nonatomic) NSNumber *counter; // @synthesize counter=_counter;
@property(readonly, copy, nonatomic) NSString *senderOutDeltaCheck; // @synthesize senderOutDeltaCheck=_senderOutDeltaCheck;
@property(readonly, copy, nonatomic) NSString *senderOutDelta; // @synthesize senderOutDelta=_senderOutDelta;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSenderOutDelta:(id)arg1 senderOutDeltaCheck:(id)arg2 counter:(id)arg3 na:(id)arg4 phi:(id)arg5 tag:(id)arg6 recipientOutDelta:(id)arg7 recipientOutDeltaCheck:(id)arg8 senderUserId:(id)arg9 recipientUserId:(id)arg10 recipientVersion:(id)arg11;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)recipientVersionValue;
- (int)counterValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
