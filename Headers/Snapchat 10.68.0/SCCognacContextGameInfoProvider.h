//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacComposerGameLauncherLifecycleDelegate-Protocol.h"
#import "SCCognacContextGameInfoProviding-Protocol.h"

@class NSString, SCEventListenerAnnouncer, SCUserSession;
@protocol NavigationDelegate;

@interface SCCognacContextGameInfoProvider : NSObject <SCCognacComposerGameLauncherLifecycleDelegate, SCCognacContextGameInfoProviding>
{
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    SCEventListenerAnnouncer *_eventAnnouncer;
}

+ (id)announcerIdentifier;
- (void).cxx_destruct;
- (void)gameLauncherDidCloseGame:(id)arg1;
- (void)gameLauncherWillLaunchGame:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)getUserContextToken;
- (id)buildGameLauncher;
- (id)initWithUserSession:(id)arg1 navigationDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

