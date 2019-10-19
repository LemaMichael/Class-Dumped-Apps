//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSArray, NSDate, NSString;
@protocol SCPerforming, SCScheduledLensControllerDelegate;

@interface SCScheduledLensController : NSObject <NSCoding>
{
    id <SCScheduledLensControllerDelegate> _delegate;
    NSDate *_nextFetchDate;
    NSString *_preselectedLensId;
    NSArray *_activeScheduledLenses;
    NSArray *_activeRearScheduledLenses;
    NSArray *_preCachedScheduledLenses;
    id <SCPerforming> _performer;
}

@property(retain, nonatomic) id <SCPerforming> performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSArray *preCachedScheduledLenses; // @synthesize preCachedScheduledLenses=_preCachedScheduledLenses;
@property(retain, nonatomic) NSArray *activeRearScheduledLenses; // @synthesize activeRearScheduledLenses=_activeRearScheduledLenses;
@property(retain, nonatomic) NSArray *activeScheduledLenses; // @synthesize activeScheduledLenses=_activeScheduledLenses;
@property(retain, nonatomic) NSString *preselectedLensId; // @synthesize preselectedLensId=_preselectedLensId;
@property(retain, nonatomic) NSDate *nextFetchDate; // @synthesize nextFetchDate=_nextFetchDate;
@property(nonatomic) __weak id <SCScheduledLensControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clearCache;
- (void)updateCache;
- (id)_processNewGeofiltersList:(id)arg1 lensType:(long long)arg2;
- (void)_processScheduledLensesToCache:(id)arg1;
- (void)processResponse:(id)arg1;
- (void)nextFetchDateWithCompletion:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_ensureNonNilObjects;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(readonly, nonatomic) NSArray *cachedScheduledLensesToPrefetch;
@property(readonly, nonatomic) NSArray *cachedActiveRearScheduledLenses;
@property(readonly, nonatomic) NSArray *cachedActiveScheduledLenses;

@end
