//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface AWEPOICouponShareSettingInfo : MTLModel <MTLJSONSerializing>
{
    _Bool _canShareCoupon;
    NSString *_shareTitle;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool canShareCoupon; // @synthesize canShareCoupon=_canShareCoupon;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

