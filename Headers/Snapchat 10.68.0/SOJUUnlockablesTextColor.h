//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUUnlockablesTextColor-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface SOJUUnlockablesTextColor : NSObject <SOJUUnlockablesTextColor>
{
    NSArray *_color;
    NSArray *_colorStop;
    NSString *_colorTransform;
    NSNumber *_colorGradientAngleDegree;
    NSArray *_colorTransformParams;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSArray *colorTransformParams; // @synthesize colorTransformParams=_colorTransformParams;
@property(readonly, copy, nonatomic) NSNumber *colorGradientAngleDegree; // @synthesize colorGradientAngleDegree=_colorGradientAngleDegree;
@property(readonly, copy, nonatomic) NSString *colorTransform; // @synthesize colorTransform=_colorTransform;
@property(readonly, copy, nonatomic) NSArray *colorStop; // @synthesize colorStop=_colorStop;
@property(readonly, copy, nonatomic) NSArray *color; // @synthesize color=_color;
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
- (id)initWithColor:(id)arg1 colorStop:(id)arg2 colorTransform:(id)arg3 colorGradientAngleDegree:(id)arg4 colorTransformParams:(id)arg5;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (double)colorGradientAngleDegreeValue;
- (long long)colorTransformEnum;
- (id)initWithProtoBuf:(id)arg1;
- (id)initWithProtoBinary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

