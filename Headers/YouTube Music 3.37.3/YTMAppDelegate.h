//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import "FLXRTLLayoutDelegate-Protocol.h"
#import "MDXDeviceConnectivityInfoProtocol-Protocol.h"
#import "UIApplicationDelegate-Protocol.h"
#import "YTAudioSessionDelegate-Protocol.h"
#import "YTMFirstAppLaunchReporterDelegate-Protocol.h"
#import "YTMMusicAppMetadataObserverProtocol-Protocol.h"
#import "YTStorageControllerObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSDate, NSString, UIWindow, YTApplication, YTCarPlayController, YTColdConfig, YTCrashController, YTMAppResponder, YTMAudioRouteLoggingController, YTMFirstAppLaunchReporter, YTMNavigation, YTMTypeStyle, YTMWorkerController, YTMainWindow;
@protocol MDXServices, YTAdsPlayerServices, YTDataServices, YTMServices, YTNonCriticalStartupScheduler;

@interface YTMAppDelegate : UIResponder <MDXDeviceConnectivityInfoProtocol, FLXRTLLayoutDelegate, YTAudioSessionDelegate, YTMFirstAppLaunchReporterDelegate, YTMMusicAppMetadataObserverProtocol, YTStorageControllerObserver, YTSystemNotificationsObserver, YTUserChangedObserver, UIApplicationDelegate>
{
    YTApplication *_application;
    YTMainWindow *_mainWindow;
    YTMNavigation *_navigation;
    YTMAppResponder *_appResponder;
    YTMWorkerController *_workerController;
    YTCrashController *_crashController;
    YTColdConfig *_coldConfig;
    YTMAudioRouteLoggingController *_audioRouteLoggingController;
    YTCarPlayController *_carPlayController;
    NSDate *_applicationInitDate;
    YTMFirstAppLaunchReporter *_firstAppLaunchReporter;
    id <YTNonCriticalStartupScheduler> _nonCriticalStartupScheduler;
    _Bool _didHandleShareLinkURLOnColdStart;
    id <MDXServices> _MDXServices;
    id <YTAdsPlayerServices> _adsPlayerServices;
    YTMTypeStyle *_typeStyle;
    id <YTMServices> _services;
    id <YTDataServices> _dataServices;
    GIMMe *_gimme;
}

@property(retain, nonatomic) GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) YTApplication *application; // @synthesize application=_application;
@property(readonly, nonatomic) id <YTDataServices> dataServices; // @synthesize dataServices=_dataServices;
@property(readonly, nonatomic) id <YTMServices> services; // @synthesize services=_services;
- (void).cxx_destruct;
- (void)reportFirstAppLaunch;
- (void)setupLogging;
- (id)createBindingWithModules:(id)arg1;
- (id)keysProvider;
- (void)tearDownGimme;
- (void)tearDownApplication;
- (id)setupEventGroupHandlers;
- (void)startSystemHealthMonitoring;
- (void)setupDogfoodUpdateMonitor;
- (id)modulesToBindWithGlobalConfig:(id)arg1 userDefaults:(id)arg2 appConfig:(id)arg3 appResponder:(id)arg4 applicationState:(long long)arg5 musicAppMetadata:(id)arg6;
- (id)settingsWithUserDefaults:(id)arg1 musicAppMetadata:(id)arg2 innerTubeConfigs:(id)arg3 parentResponder:(id)arg4;
- (void)handleIntent:(id)arg1 viaIntentsExtension:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setSiriShortcutsEligibleForBackgroudPlayWithMusicAppMetaData:(id)arg1;
- (void)musicAppMetadataDidChange:(id)arg1;
- (void)userWillChange;
- (void)userDidChange;
- (_Bool)shouldAudioSessionActivateInBackground;
- (void)firstAppLaunchReporterFinishedReportingAttempt:(id)arg1;
- (void)availableStorageDidBecomeEmpty;
- (void)createApplication:(id)arg1;
- (void)setupApplication:(id)arg1;
- (void)updateCrashControllerIsApplicationInBackground:(_Bool)arg1;
- (long long)userInterfaceLayoutDirection;
- (void)handleConnectionError:(id)arg1 deviceInfo:(id)arg2;
- (_Bool)isCurrentUserRedSubscriber;
- (void)appDidReceiveMemoryWarning:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)application:(id)arg1 handleIntent:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 performFetchWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (id)application:(id)arg1 viewControllerWithRestorationIdentifierPath:(id)arg2 coder:(id)arg3;
- (_Bool)application:(id)arg1 shouldRestoreApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 shouldSaveApplicationState:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (_Bool)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2;
@property(retain, nonatomic) UIWindow *window;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

