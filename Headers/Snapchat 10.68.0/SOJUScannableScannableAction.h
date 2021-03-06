//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUScannableScannableAction-Protocol.h"

@class NSNumber, NSString;

@interface SOJUScannableScannableAction : NSObject <SOJUScannableScannableAction>
{
    NSString *_idValue;
    NSString *_type;
    NSString *_data;
    NSString *_status;
    NSNumber *_priority;
    NSNumber *_timeCreated;
    NSNumber *_timeExpired;
    NSString *_devDescription;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSString *devDescription; // @synthesize devDescription=_devDescription;
@property(readonly, copy, nonatomic) NSNumber *timeExpired; // @synthesize timeExpired=_timeExpired;
@property(readonly, copy, nonatomic) NSNumber *timeCreated; // @synthesize timeCreated=_timeCreated;
@property(readonly, copy, nonatomic) NSNumber *priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *data; // @synthesize data=_data;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
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
- (id)initWithIdValue:(id)arg1 type:(id)arg2 data:(id)arg3 status:(id)arg4 priority:(id)arg5 timeCreated:(id)arg6 timeExpired:(id)arg7 devDescription:(id)arg8;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (long long)timeExpiredValue;
- (long long)timeCreatedValue;
- (int)priorityValue;
- (long long)statusEnum;
- (long long)typeEnum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

