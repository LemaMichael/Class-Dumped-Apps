//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RocketOpenSDKWebAuthViewDelegate-Protocol.h"

@class NSMutableDictionary, NSString, RocketOpenSDKWebAuthViewController;
@protocol RocketOpenSDKLogDelegate;

@interface RocketOpenSDKApplicationDelegate : NSObject <RocketOpenSDKWebAuthViewDelegate>
{
    _Bool _needPreload;
    NSMutableDictionary *_req2servicesMapper;
    NSMutableDictionary *_name2servicesMapper;
    RocketOpenSDKWebAuthViewController *_webVC;
    id <RocketOpenSDKLogDelegate> _logDelegate;
}

+ (_Bool)webAuthSupported;
+ (void)preloadWebAuthUIWithReq:(id)arg1;
+ (void)clearPreloadWebAuthCache;
+ (void)preloadWebAuthWithReq:(id)arg1;
+ (_Bool)sendMsgToBytedanceAPPsWithResp:(id)arg1;
+ (_Bool)sendAuthToBytedanceAPPsWithReq:(id)arg1 viewController:(id)arg2 delegate:(id)arg3 webFirst:(_Bool)arg4;
+ (void)webAuthToBytedanceAPPsWithReq:(id)arg1 viewController:(id)arg2 delegate:(id)arg3;
+ (_Bool)sendAuthToBytedanceAPPsWithReq:(id)arg1 viewController:(id)arg2 delegate:(id)arg3;
+ (_Bool)sendMsgToBytedanceAPPsWithReq:(id)arg1;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (id)URLServicerForServiceName:(id)arg1;
+ (id)URLServicerForReq:(id)arg1;
+ (void)registerServiceClass:(Class)arg1;
+ (void)doLog:(id)arg1;
+ (void)unregisterLogDelegate;
+ (void)registerLogDelegate:(id)arg1;
+ (id)sharedDelegate;
@property(nonatomic) __weak id <RocketOpenSDKLogDelegate> logDelegate; // @synthesize logDelegate=_logDelegate;
@property(nonatomic) _Bool needPreload; // @synthesize needPreload=_needPreload;
@property(retain, nonatomic) RocketOpenSDKWebAuthViewController *webVC; // @synthesize webVC=_webVC;
@property(retain, nonatomic) NSMutableDictionary *name2servicesMapper; // @synthesize name2servicesMapper=_name2servicesMapper;
@property(retain, nonatomic) NSMutableDictionary *req2servicesMapper; // @synthesize req2servicesMapper=_req2servicesMapper;
- (void).cxx_destruct;
- (void)finishWithResp:(id)arg1 sdkDelegate:(id)arg2;
- (id)URLServicerForServiceName:(id)arg1;
- (id)URLServicerForReq:(id)arg1;
- (void)registerServiceClass:(Class)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
