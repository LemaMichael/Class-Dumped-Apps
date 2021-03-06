//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIApplicationDelegate.h"

@class AVAudioSession, GameControllerHandler_apple, NSString, UIWindow, minecraftpeViewControllerBase;

@interface minecraftpeAppDelegateBase : NSObject <UIApplicationDelegate>
{
    AVAudioSession *audioSession;
    NSString *audioSessionSoundCategory;
    unsigned long long bgTask;
    _Bool mWasLaunchedByPushNotification;
    basic_string_90719d97 mLaunchDeepLink;
    basic_string_90719d97 mLaunchMessageThreadId;
    _Bool mAppIsStarting;
    UIWindow *_window;
    minecraftpeViewControllerBase *_viewController;
    GameControllerHandler_apple *_gameControllerHandler;
}

@property(nonatomic) GameControllerHandler_apple *gameControllerHandler; // @synthesize gameControllerHandler=_gameControllerHandler;
@property(retain, nonatomic) minecraftpeViewControllerBase *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onAudioSessionMediaServiceReset:(id)arg1;
- (void)onAudioSessionInterruption:(id)arg1;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)removeNotifications:(id)arg1;
- (void)onActivateNotification:(id)arg1;
- (void)onReceiveNotification:(id)arg1;
- (void)registerForRemoteNotification;
- (void)onAppInit;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)setAudioEnabled:(_Bool)arg1;
- (void)dealloc;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)initAudio;
- (void)registerDefaultsFromFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

