//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWELocationCity, AWELocationCountry, AWELocationDistrict, NSArray, NSString;

@interface AWELocationReverseGeoModel : MTLModel <MTLJSONSerializing>
{
    AWELocationCountry *_country;
    NSArray *_subdivisions;
    AWELocationCity *_city;
    AWELocationDistrict *_district;
}

+ (id)subdivisionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWELocationDistrict *district; // @synthesize district=_district;
@property(retain, nonatomic) AWELocationCity *city; // @synthesize city=_city;
@property(retain, nonatomic) NSArray *subdivisions; // @synthesize subdivisions=_subdivisions;
@property(retain, nonatomic) AWELocationCountry *country; // @synthesize country=_country;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

