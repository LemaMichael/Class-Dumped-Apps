//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCDynamicCaptionTextColor;

@interface SCDynamicCaptionTextShadow : NSObject <NSCopying, NSCoding>
{
    SCDynamicCaptionTextColor *_color;
    double _xOffset;
    double _yOffset;
    double _radius;
}

@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) double yOffset; // @synthesize yOffset=_yOffset;
@property(readonly, nonatomic) double xOffset; // @synthesize xOffset=_xOffset;
@property(readonly, copy, nonatomic) SCDynamicCaptionTextColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithColor:(id)arg1 xOffset:(double)arg2 yOffset:(double)arg3 radius:(double)arg4;
- (id)initWithCoder:(id)arg1;

@end

