//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDailyMixFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTDailyMixHubViewControllerFactory, SPTDailyMixLoggingService, SPTDailyMixManagerImplementation, SPTDailyMixUtils;
@protocol SPTAbbaService, SPTCollectionPlatformService, SPTContainerService, SPTDailyMixFeedbackUIModel, SPTGLUEService, SPTHubFrameworkService, SPTLocalSettings, SPTMadeForYouService, SPTNetworkService, SPTNowPlayingRemoteControlPolicy, SPTPlayerFeature, SPTRadioService, SPTRecentlyPlayedService, SPTSessionService;

@interface SPTDailyMixServiceImplementation : NSObject <SPTDailyMixFeature>
{
    _Bool _registeredWithRecentlyPlayed;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTAbbaService> _abbaService;
    id <SPTLocalSettings> _localSettings;
    id <SPTMadeForYouService> _madeForYouService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPlayerFeature> _playbackFeature;
    SPTDailyMixUtils *_dailyMixUtils;
    SPTDailyMixManagerImplementation *_dailyMixManager;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTNowPlayingRemoteControlPolicy> _dailyMixRemoteControlPolicy;
    id <SPTDailyMixFeedbackUIModel> _dailyMixFeedbackUIModel;
    id <SPTRadioService> _radioService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    SPTDailyMixLoggingService *_loggingService;
    id <SPTHubFrameworkService> _hubFrameworkService;
    id <SPTGLUEService> _glueService;
    SPTDailyMixHubViewControllerFactory *_hubViewControllerFactory;
}

+ (id)serviceIdentifier;
@property(nonatomic, getter=isRegisteredWithRecentlyPlayed) _Bool registeredWithRecentlyPlayed; // @synthesize registeredWithRecentlyPlayed=_registeredWithRecentlyPlayed;
@property(retain, nonatomic) SPTDailyMixHubViewControllerFactory *hubViewControllerFactory; // @synthesize hubViewControllerFactory=_hubViewControllerFactory;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTHubFrameworkService> hubFrameworkService; // @synthesize hubFrameworkService=_hubFrameworkService;
@property(retain, nonatomic) SPTDailyMixLoggingService *loggingService; // @synthesize loggingService=_loggingService;
@property(nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(nonatomic) __weak id <SPTRadioService> radioService; // @synthesize radioService=_radioService;
@property(retain, nonatomic) id <SPTDailyMixFeedbackUIModel> dailyMixFeedbackUIModel; // @synthesize dailyMixFeedbackUIModel=_dailyMixFeedbackUIModel;
@property(retain, nonatomic) id <SPTNowPlayingRemoteControlPolicy> dailyMixRemoteControlPolicy; // @synthesize dailyMixRemoteControlPolicy=_dailyMixRemoteControlPolicy;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(retain, nonatomic) SPTDailyMixManagerImplementation *dailyMixManager; // @synthesize dailyMixManager=_dailyMixManager;
@property(retain, nonatomic) SPTDailyMixUtils *dailyMixUtils; // @synthesize dailyMixUtils=_dailyMixUtils;
@property(nonatomic) __weak id <SPTPlayerFeature> playbackFeature; // @synthesize playbackFeature=_playbackFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTMadeForYouService> madeForYouService; // @synthesize madeForYouService=_madeForYouService;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
- (void).cxx_destruct;
- (void)registerDailyMixWithRecentlyPlayed;
- (id)provideDailyMixHubViewControllerFactory;
- (id)provideDailyMixLoggingService;
- (id)provideDailyMixRemoteControlPolicy;
- (id)provideStationViewController:(id)arg1 context:(id)arg2;
- (id)provideDailyMixManager;
- (id)provideDailyMixFeedbackUIModel;
- (id)provideDailyMixHubForURI:(id)arg1 context:(id)arg2;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

