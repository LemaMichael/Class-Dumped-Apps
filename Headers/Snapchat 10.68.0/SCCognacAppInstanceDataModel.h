//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacAppInstanceDataModel-Protocol.h"

@class NSDate, NSString;

@interface SCCognacAppInstanceDataModel : NSObject <SCCognacAppInstanceDataModel>
{
    _Bool _terminated;
    NSString *_instanceId;
    NSString *_appId;
    NSString *_conversationId;
    NSDate *_expirationTimestamp;
    double _expirationDuration;
    long long _version;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) _Bool terminated; // @synthesize terminated=_terminated;
@property(readonly, nonatomic) double expirationDuration; // @synthesize expirationDuration=_expirationDuration;
@property(readonly, copy, nonatomic) NSDate *expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(readonly, copy, nonatomic) NSString *instanceId; // @synthesize instanceId=_instanceId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setFloat64:(double)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt64:(long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInstanceId:(id)arg1 appId:(id)arg2 conversationId:(id)arg3 expirationTimestamp:(id)arg4 expirationDuration:(double)arg5 terminated:(_Bool)arg6 version:(long long)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
