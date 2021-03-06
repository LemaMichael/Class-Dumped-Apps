//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSCoreClientParameters.h"

@class GMSx_GMMApiParametersProto, GMSx_GMMNavigationSdkParametersProto, NSArray;

@interface GMSAPIClientParameters : GMSCoreClientParameters
{
    _Bool _hadFirstLoad;
    GMSx_GMMApiParametersProto *_apiParams;
    GMSx_GMMNavigationSdkParametersProto *_navigationSDKParams;
    NSArray *_optionalPaintFeatures;
}

+ (id)groupTypes;
@property(retain) NSArray *optionalPaintFeatures; // @synthesize optionalPaintFeatures=_optionalPaintFeatures;
@property(retain) GMSx_GMMNavigationSdkParametersProto *navigationSDKParams; // @synthesize navigationSDKParams=_navigationSDKParams;
@property(retain) GMSx_GMMApiParametersProto *apiParams; // @synthesize apiParams=_apiParams;
- (void).cxx_destruct;
- (void)updateClientProperties:(id)arg1;
- (_Bool)needsRefetch;
- (_Bool)updateTypedParamGroup:(id)arg1;

@end

