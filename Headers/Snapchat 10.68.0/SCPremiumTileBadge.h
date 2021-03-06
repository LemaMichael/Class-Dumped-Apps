//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCPremiumTileBadge : NSObject <NSCopying, NSCoding>
{
    unsigned int _backgroundColorArgb;
    unsigned int _textColorArgb;
    NSString *_title;
    long long _size;
}

@property(readonly, nonatomic) long long size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned int textColorArgb; // @synthesize textColorArgb=_textColorArgb;
@property(readonly, nonatomic) unsigned int backgroundColorArgb; // @synthesize backgroundColorArgb=_backgroundColorArgb;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 backgroundColorArgb:(unsigned int)arg2 textColorArgb:(unsigned int)arg3 size:(long long)arg4;
- (id)initWithCoder:(id)arg1;

@end

