//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCSnapchattersBirthday : NSObject <NSCopying>
{
    unsigned char _month;
    unsigned char _day;
}

@property(readonly, nonatomic) unsigned char day; // @synthesize day=_day;
@property(readonly, nonatomic) unsigned char month; // @synthesize month=_month;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMonth:(unsigned char)arg1 day:(unsigned char)arg2;

@end

