//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CJSDKParamConfig : NSObject
{
    NSString *_version;
    NSString *_sdkName;
    NSString *_merchantId;
}

+ (id)reportCommonParams;
+ (id)defaultConfig;
@property(copy, nonatomic) NSString *merchantId; // @synthesize merchantId=_merchantId;
@property(copy, nonatomic) NSString *sdkName; // @synthesize sdkName=_sdkName;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;

@end

