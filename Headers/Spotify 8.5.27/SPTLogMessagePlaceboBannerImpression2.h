//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessagePlaceboBannerImpression2 : SPTLogMessage
{
    NSString *_configurationIdValue;
    NSString *_impressionTypeValue;
    NSString *_impressionUriValue;
}

+ (id)messageWithConfigurationId:(id)arg1 impressionType:(id)arg2 impressionUri:(id)arg3;
@property(copy, nonatomic) NSString *impressionUriValue; // @synthesize impressionUriValue=_impressionUriValue;
@property(copy, nonatomic) NSString *impressionTypeValue; // @synthesize impressionTypeValue=_impressionTypeValue;
@property(copy, nonatomic) NSString *configurationIdValue; // @synthesize configurationIdValue=_configurationIdValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end

