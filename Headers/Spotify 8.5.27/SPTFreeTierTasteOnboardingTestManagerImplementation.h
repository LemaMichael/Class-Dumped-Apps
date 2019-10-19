//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTFreeTierTasteOnboardingTestManager-Protocol.h"

@class NSString;
@protocol SPTFeatureFlagFactory, SPTFeatureFlagSignal, SPTFeatureSettingsItemFactory, SPTLocalSettings, SPTProductState;

@interface SPTFreeTierTasteOnboardingTestManagerImplementation : NSObject <SPTFeatureFlagSignalObserver, SPTFreeTierTasteOnboardingTestManager>
{
    _Bool _tasteOnboardingFirstTimeFlowEnabled;
    _Bool _tasteOnboardingFirstTimeFlowForcedEnabled;
    _Bool _onboardingCoordinationEnabled;
    _Bool _stockholmBlackStyleEnabled;
    _Bool _stockholmBlackStyleExperimentOn;
    _Bool _deeplinkBasedSkipEnabled;
    _Bool _deeplinkAdBasedSkipEnabled;
    _Bool _podcastInFirstTimeFlowEnabled;
    _Bool _podcastInFirstTimeFlowExperimentOn;
    id <SPTFeatureFlagFactory> _featureFlagFactory;
    id <SPTProductState> _productState;
    id <SPTLocalSettings> _localSettings;
    id <SPTFeatureSettingsItemFactory> _featureSettingsItemFactory;
    id <SPTFeatureFlagSignal> _tasteOnboardingFirstTimeFlowEnabledSignal;
    id <SPTFeatureFlagSignal> _tasteOnboardingFirstTimeFlowForcedEnabledSignal;
    id <SPTFeatureFlagSignal> _onboardingCoordinationEnabledFlagSignal;
    id <SPTFeatureFlagSignal> _stockholmBlackStyleEnabledAbbaSignal;
    id <SPTFeatureFlagSignal> _stockholmBlackStyleEnabledUserPolicySignal;
    id <SPTFeatureFlagSignal> _onboardingIPadEnabledFlagSignal;
    id <SPTFeatureFlagSignal> _deeplinkBasedSkipEnabledSignal;
    id <SPTFeatureFlagSignal> _deeplinkAdBasedSkipEnabledSignal;
    id <SPTFeatureFlagSignal> _homeMixEnabledSignal;
    id <SPTFeatureFlagSignal> _nftNewExperienceEnabledSignal;
    id <SPTFeatureFlagSignal> _podcastInFirstTimeFlowEnabledSignal;
}

@property(nonatomic, getter=isPodcastInFirstTimeFlowExperimentOn) _Bool podcastInFirstTimeFlowExperimentOn; // @synthesize podcastInFirstTimeFlowExperimentOn=_podcastInFirstTimeFlowExperimentOn;
@property(nonatomic, getter=isPodcastInFirstTimeFlowEnabled) _Bool podcastInFirstTimeFlowEnabled; // @synthesize podcastInFirstTimeFlowEnabled=_podcastInFirstTimeFlowEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> podcastInFirstTimeFlowEnabledSignal; // @synthesize podcastInFirstTimeFlowEnabledSignal=_podcastInFirstTimeFlowEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> nftNewExperienceEnabledSignal; // @synthesize nftNewExperienceEnabledSignal=_nftNewExperienceEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> homeMixEnabledSignal; // @synthesize homeMixEnabledSignal=_homeMixEnabledSignal;
@property(nonatomic, getter=isDeeplinkAdBasedSkipEnabled) _Bool deeplinkAdBasedSkipEnabled; // @synthesize deeplinkAdBasedSkipEnabled=_deeplinkAdBasedSkipEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> deeplinkAdBasedSkipEnabledSignal; // @synthesize deeplinkAdBasedSkipEnabledSignal=_deeplinkAdBasedSkipEnabledSignal;
@property(nonatomic, getter=isDeeplinkBasedSkipEnabled) _Bool deeplinkBasedSkipEnabled; // @synthesize deeplinkBasedSkipEnabled=_deeplinkBasedSkipEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> deeplinkBasedSkipEnabledSignal; // @synthesize deeplinkBasedSkipEnabledSignal=_deeplinkBasedSkipEnabledSignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> onboardingIPadEnabledFlagSignal; // @synthesize onboardingIPadEnabledFlagSignal=_onboardingIPadEnabledFlagSignal;
@property(nonatomic, getter=isStockholmBlackStyleExperimentOn) _Bool stockholmBlackStyleExperimentOn; // @synthesize stockholmBlackStyleExperimentOn=_stockholmBlackStyleExperimentOn;
@property(nonatomic, getter=isStockholmBlackStyleEnabled) _Bool stockholmBlackStyleEnabled; // @synthesize stockholmBlackStyleEnabled=_stockholmBlackStyleEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> stockholmBlackStyleEnabledUserPolicySignal; // @synthesize stockholmBlackStyleEnabledUserPolicySignal=_stockholmBlackStyleEnabledUserPolicySignal;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> stockholmBlackStyleEnabledAbbaSignal; // @synthesize stockholmBlackStyleEnabledAbbaSignal=_stockholmBlackStyleEnabledAbbaSignal;
@property(nonatomic, getter=isOnboardingCoordinationEnabled) _Bool onboardingCoordinationEnabled; // @synthesize onboardingCoordinationEnabled=_onboardingCoordinationEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> onboardingCoordinationEnabledFlagSignal; // @synthesize onboardingCoordinationEnabledFlagSignal=_onboardingCoordinationEnabledFlagSignal;
@property(nonatomic, getter=isTasteOnboardingFirstTimeFlowForcedEnabled) _Bool tasteOnboardingFirstTimeFlowForcedEnabled; // @synthesize tasteOnboardingFirstTimeFlowForcedEnabled=_tasteOnboardingFirstTimeFlowForcedEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> tasteOnboardingFirstTimeFlowForcedEnabledSignal; // @synthesize tasteOnboardingFirstTimeFlowForcedEnabledSignal=_tasteOnboardingFirstTimeFlowForcedEnabledSignal;
@property(nonatomic, getter=isTasteOnboardingFirstTimeFlowEnabled) _Bool tasteOnboardingFirstTimeFlowEnabled; // @synthesize tasteOnboardingFirstTimeFlowEnabled=_tasteOnboardingFirstTimeFlowEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> tasteOnboardingFirstTimeFlowEnabledSignal; // @synthesize tasteOnboardingFirstTimeFlowEnabledSignal=_tasteOnboardingFirstTimeFlowEnabledSignal;
@property(readonly, nonatomic) id <SPTFeatureSettingsItemFactory> featureSettingsItemFactory; // @synthesize featureSettingsItemFactory=_featureSettingsItemFactory;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) id <SPTFeatureFlagFactory> featureFlagFactory; // @synthesize featureFlagFactory=_featureFlagFactory;
- (void).cxx_destruct;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)setupDeeplinkAdBasedSkipEnabled;
- (void)setupDeeplinkBasedSkipEnabled;
- (void)setupStockholmBlackStyleEnabledAbbaFlag;
- (void)setupStockholmBlackStyleEnabledUserPolicyFlag;
- (void)setupOnboardingIPadEnabledFlag;
- (void)setupOnboardingCoordinationEnabledFlag;
- (void)setupForcedFirstTimeFlowSettingsKey;
- (void)setupFirstTimeFlowSettingsKey;
- (void)setupFlags;
- (void)dealloc;
- (id)initWithFeatureFlagFactory:(id)arg1 productState:(id)arg2 localSettings:(id)arg3 featureSettingsItemFactory:(id)arg4 homeMixEnabledSignal:(id)arg5 newExperienceEnabledSignal:(id)arg6 podcastInFirstTimeFlowEnabledSignal:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
