//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCNConfigConfigurationKey.h"

@class FeatureProvidedSignals;

@interface SCCircumstanceEngineConfigurationKey : SCNConfigConfigurationKey
{
    _Bool _readThroughDBIfCacheMissed;
    FeatureProvidedSignals *_featureProvidedSignals;
}

+ (id)ConfigurationKeyWithKey:(id)arg1 id:(id)arg2 featureProvidedSignals:(id)arg3 readThroughDBIfCacheMissed:(_Bool)arg4;
@property(nonatomic) _Bool readThroughDBIfCacheMissed; // @synthesize readThroughDBIfCacheMissed=_readThroughDBIfCacheMissed;
@property(retain, nonatomic) FeatureProvidedSignals *featureProvidedSignals; // @synthesize featureProvidedSignals=_featureProvidedSignals;
- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 id:(id)arg2 featureProvidedSignals:(id)arg3 readThroughDBIfCacheMissed:(_Bool)arg4;

@end

