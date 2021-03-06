//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesBackgroundStyle-Protocol.h"

@class NSNumber, NSString, SOJUUnlockablesTextColor, SOJUUnlockablesTextShadow;

@interface SOJUUnlockablesBackgroundStyle : NSObject <SOJUUnlockablesBackgroundStyle>
{
    SOJUUnlockablesTextColor *_color;
    SOJUUnlockablesTextShadow *_boxShadow;
    NSNumber *_borderRadius;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *borderRadius; // @synthesize borderRadius=_borderRadius;
@property(readonly, copy, nonatomic) SOJUUnlockablesTextShadow *boxShadow; // @synthesize boxShadow=_boxShadow;
@property(readonly, copy, nonatomic) SOJUUnlockablesTextColor *color; // @synthesize color=_color;
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
- (id)initWithColor:(id)arg1 boxShadow:(id)arg2 borderRadius:(id)arg3;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (double)borderRadiusValue;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

