//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUnauthenticatedFeatureRouteActions-Protocol.h"

@class NSString, SCBusinessLogicHarness, SCScopeExposer;
@protocol SCUIContainer;

@interface SCUnauthenticatedFeatureUIRouteActions : NSObject <SCUnauthenticatedFeatureRouteActions>
{
    id <SCUIContainer> _unauthenticatedUIContainer;
    SCScopeExposer *_preRegistrationScopeExposer;
    SCScopeExposer *_registrationScopeExposer;
    SCScopeExposer *_logInScopeExposer;
    SCScopeExposer *_userVerificationScopeExposer;
    SCBusinessLogicHarness *_oneTapLoginLandingPageBusinessLogicHarness;
}

- (void).cxx_destruct;
- (void)endUserVerification;
- (void)startUserVerificationWithLoginResponse:(id)arg1 context:(id)arg2 delegate:(id)arg3;
- (void)endLogIn;
- (void)startLogIn:(id)arg1 lastLoginUsername:(id)arg2;
- (void)endPreRegistration;
- (void)startPreRegistration:(id)arg1;
- (void)endRegistration;
- (void)startRegistration:(id)arg1;
- (void)showOneTapLoginLandingPage:(id)arg1 loginButtonTitle:(id)arg2 bitmojiAvatar:(id)arg3 oneTapLoginAuthenticator:(id)arg4 applicationLoginLogger:(id)arg5 oneTapLoginLogger:(id)arg6 delegate:(id)arg7;
- (id)showUnauthenticatedLandingPage;
- (id)initWithUIContainer:(id)arg1 preRegistrationScopeExposer:(id)arg2 registrationScopeExposer:(id)arg3 logInScopeExposer:(id)arg4 userVerificationScopeExposer:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
