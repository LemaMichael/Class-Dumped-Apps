//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUBitmojiGetOutfitsResponse-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUBitmojiGetOutfitsResponse : NSObject <SOJUBitmojiGetOutfitsResponse>
{
    NSArray *_fittingRoomTemplateIds;
    NSArray *_showcase;
    NSArray *_brands;
    NSNumber *_version;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *version; // @synthesize version=_version;
@property(readonly, copy, nonatomic) NSArray *brands; // @synthesize brands=_brands;
@property(readonly, copy, nonatomic) NSArray *showcase; // @synthesize showcase=_showcase;
@property(readonly, copy, nonatomic) NSArray *fittingRoomTemplateIds; // @synthesize fittingRoomTemplateIds=_fittingRoomTemplateIds;
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
- (id)initWithFittingRoomTemplateIds:(id)arg1 showcase:(id)arg2 brands:(id)arg3 version:(id)arg4;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (int)versionValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
