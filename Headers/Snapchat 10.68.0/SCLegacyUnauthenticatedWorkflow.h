//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacyLogInWorkflowDelegate-Protocol.h"
#import "SCLoginRegisterUserActionDelegate-Protocol.h"
#import "SCOneTapLoginLandingPageDelegate-Protocol.h"

@class NSString, SCLazy, SCOneTapLoginServices;
@protocol SCUnauthenticatedPageRouter;

@interface SCLegacyUnauthenticatedWorkflow : NSObject <SCLoginRegisterUserActionDelegate, SCLegacyLogInWorkflowDelegate, SCOneTapLoginLandingPageDelegate>
{
    id <SCUnauthenticatedPageRouter> _unauthenticatedPageRouter;
    SCLazy *_applicationPreferences;
    SCOneTapLoginServices *_oneTapLoginServices;
    _Bool _didStartLogin;
}

- (void).cxx_destruct;
- (void)oneTapLoginAuthenticationFinishedWithLoginResponse:(id)arg1 tempIdentity:(id)arg2;
- (void)oneTapLoginLandingPageExited;
- (void)signUpSelected;
- (void)logInSelected;
- (void)didDismissLogin;
- (void)didTapLoginButton;
- (void)beginWorkflow;
- (id)initWithUnauthenticatedPageRouter:(id)arg1 applicationPreferences:(id)arg2 oneTapLoginServices:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

