//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSNumber, NSString, SOJUGeofilterResponse;

@protocol SCUnlockable <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) _Bool isSponsored;
@property(readonly, copy, nonatomic) NSString *unlockableId;
@property(readonly, nonatomic) long long eligibility;
@property(readonly, copy, nonatomic) NSNumber *overrideAssetTtl;
@property(readonly, copy, nonatomic) SOJUGeofilterResponse *raw;
@property(readonly, copy, nonatomic) NSDate *creationDate;
@property(readonly, nonatomic) long long source;
@end
