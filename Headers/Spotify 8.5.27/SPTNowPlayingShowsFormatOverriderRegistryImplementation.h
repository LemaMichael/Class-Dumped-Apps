//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNowPlayingShowsFormatOverriderRegistry-Protocol.h"

@class NSHashTable, NSString;

@interface SPTNowPlayingShowsFormatOverriderRegistryImplementation : NSObject <SPTNowPlayingShowsFormatOverriderRegistry>
{
    NSHashTable *_registrants;
}

@property(retain, nonatomic) NSHashTable *registrants; // @synthesize registrants=_registrants;
- (void).cxx_destruct;
- (void)removeRegistrant:(id)arg1;
- (void)addRegistrant:(id)arg1;
- (_Bool)shouldPresentShowsFormatNPVForTrack:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

