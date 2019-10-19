//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface GNSBeaconStrategy : NSObject <NSCopying>
{
    _Bool _includeIBeacons;
    _Bool _allowInBackground;
    _Bool _lowPowerPreferred;
    _Bool _scanForDiscoveries;
}

+ (id)strategyWithParamsBlock:(CDUnknownBlockType)arg1;
+ (id)strategy;
@property(readonly, nonatomic) _Bool scanForDiscoveries; // @synthesize scanForDiscoveries=_scanForDiscoveries;
@property(readonly, nonatomic) _Bool lowPowerPreferred; // @synthesize lowPowerPreferred=_lowPowerPreferred;
@property(readonly, nonatomic) _Bool allowInBackground; // @synthesize allowInBackground=_allowInBackground;
@property(readonly, nonatomic) _Bool includeIBeacons; // @synthesize includeIBeacons=_includeIBeacons;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithParamsBlock:(CDUnknownBlockType)arg1;

@end
