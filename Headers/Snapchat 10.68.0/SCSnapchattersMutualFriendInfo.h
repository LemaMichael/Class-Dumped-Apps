//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class SCSnapchattersBirthday;

@interface SCSnapchattersMutualFriendInfo : NSObject <NSCopying>
{
    _Bool _isBestFriend;
    int _snapStreakCount;
    SCSnapchattersBirthday *_birthday;
    double _addedByFriendTimestamp;
}

@property(readonly, nonatomic) double addedByFriendTimestamp; // @synthesize addedByFriendTimestamp=_addedByFriendTimestamp;
@property(readonly, nonatomic) _Bool isBestFriend; // @synthesize isBestFriend=_isBestFriend;
@property(readonly, nonatomic) int snapStreakCount; // @synthesize snapStreakCount=_snapStreakCount;
@property(readonly, copy, nonatomic) SCSnapchattersBirthday *birthday; // @synthesize birthday=_birthday;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBirthday:(id)arg1 snapStreakCount:(int)arg2 isBestFriend:(_Bool)arg3 addedByFriendTimestamp:(double)arg4;

@end
