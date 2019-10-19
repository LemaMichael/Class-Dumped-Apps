//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCServerConfigListener-Protocol.h"
#import "SCStickerPackMetadataThrottleInfo-Protocol.h"

@class NSString;

@interface SCStickerPackMetadataThrottleInfo : NSObject <SCServerConfigListener, SCStickerPackMetadataThrottleInfo>
{
    _Bool _shouldThrottle;
    double _throttlePeriod;
}

@property(readonly, nonatomic) _Bool shouldThrottle; // @synthesize shouldThrottle=_shouldThrottle;
@property(readonly, nonatomic) double throttlePeriod; // @synthesize throttlePeriod=_throttlePeriod;
- (void)serverConfigDidChange:(id)arg1;
- (void)_updateFromServerConfig:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
