//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCRegisterBackButtonDelegate-Protocol.h"
#import "SCRegisterEnterButtonDelegate-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString;

@protocol SCRegisterV2ViewDelegate <SCRegisterEnterButtonDelegate, SCRegisterBackButtonDelegate, TTTAttributedLabelDelegate>

@optional
- (void)startTypingPassword:(NSString *)arg1;
- (void)checkPasswordValidityRealTime;
- (void)checkUsernameValidityRealTime;
- (void)rotateUsernameSuggestion;
- (void)skipButtonClicked;
- (void)loginSignupSwitcherButtonPressed;
- (void)forgotPasswordClicked;
@end

