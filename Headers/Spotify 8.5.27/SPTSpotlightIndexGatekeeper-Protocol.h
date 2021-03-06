//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError;
@protocol SPTSpotlightIndex;

@protocol SPTSpotlightIndexGatekeeper <NSObject>
- (void)indexDidDrop:(id <SPTSpotlightIndex>)arg1;
- (void)indexDidEndIndexing:(id <SPTSpotlightIndex>)arg1 error:(NSError *)arg2;
- (void)indexDidStartIndexing:(id <SPTSpotlightIndex>)arg1;
- (_Bool)shouldUpdateIndex:(id <SPTSpotlightIndex>)arg1;
@end

