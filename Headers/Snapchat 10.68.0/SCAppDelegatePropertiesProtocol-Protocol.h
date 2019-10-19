//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class SCAppNotification, SCAppStateTracker, SCBehaviorSubject, SCFailedUserEventNotificationController, SCHockeyAppDelegate, SCInAppNotificationController, SCQueuePerformer, SCSnapchatScopeGraph, SCStartupCaptureHardwareWarmer, SCStructuredStartupLogger, SCUserNotificationCenterController, SCUserSession, UIWindow;

@protocol SCAppDelegatePropertiesProtocol
@property(retain, nonatomic) UIWindow *window;
@property(retain, nonatomic) SCUserSession *userSession;
@property(retain, nonatomic) SCUserNotificationCenterController *userNotificationCenterController;
@property(readonly, nonatomic) SCStructuredStartupLogger *structuredStartupLogger;
@property(retain, nonatomic) SCSnapchatScopeGraph *scopeGraph;
@property(retain, nonatomic) SCAppNotification *remoteNotificationFromLaunch;
@property(readonly, nonatomic) SCQueuePerformer *performer;
@property(retain, nonatomic) SCBehaviorSubject *notificationLifecycleEvents;
@property(retain, nonatomic) SCAppNotification *launchingNotification;
@property(retain, nonatomic) SCInAppNotificationController *inAppNotificationController;
@property(retain, nonatomic) SCHockeyAppDelegate *hockeyAppDelegate;
@property(retain, nonatomic) SCFailedUserEventNotificationController *failedUserEventNotificationController;
@property(nonatomic) _Bool didUserTriggerEmergencyMode;
@property(nonatomic) _Bool didLaunchWithDidFinishLaunching;
@property(nonatomic) _Bool didLaunchWhenProtectedDataUnavailable;
@property(nonatomic) _Bool didBecomeActiveWithRemoteNotification;
@property(readonly, nonatomic) SCStartupCaptureHardwareWarmer *captureHardwareWarmer;
@property(retain, nonatomic) SCBehaviorSubject *backgroundPrefetchHandler;
@property(retain, nonatomic) SCAppStateTracker *appStateTracker;
@property(retain, nonatomic) SCAppNotification *appNotification;
@property(retain, nonatomic) SCBehaviorSubject *applicationLifecycleEvents;
@end
