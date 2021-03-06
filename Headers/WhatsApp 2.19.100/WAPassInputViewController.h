//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAViewController.h>

#import "WAVerificationLinkHandling-Protocol.h"

@class NSLayoutConstraint, NSString, NSTimer, UIButton, UILabel, UIProgressView, UIScrollView, UIView, WAOneTimeCodeInputView, WAOverlayView;
@protocol WAPassInputViewControllerDelegate;

@interface WAPassInputViewController : WAViewController <WAVerificationLinkHandling>
{
    int _codeInputBlockState;
    WAOverlayView *_overlayView;
    double _keyboardHeight;
    NSTimer *_codeInputBlockProgressUpdateTimer;
    NSTimer *_codeRequestButtonsStateUpdateTimer;
    _Bool _shouldShowActivityIndicator;
    _Bool _registerRequestInProgress;
    UILabel *_titleLabel;
    _Bool _changePhoneNumberMode;
    id <WAPassInputViewControllerDelegate> _delegate;
    NSString *_verificationCodeFromURL;
    NSString *_acceptedVerificationCode;
    UIScrollView *_contentScrollView;
    NSLayoutConstraint *_contentViewMinimumHeight;
    UILabel *_labelHelperText1;
    UILabel *_labelHelperText2;
    WAOneTimeCodeInputView *_codeInputView;
    UIButton *_buttonRequestSMS;
    UIButton *_buttonRequestCall;
    UIView *_viewUIBlocked;
    NSLayoutConstraint *_viewUIBlockedHeight;
    UILabel *_labelUIBlocked;
    UIProgressView *_progressViewBlock;
}

+ (void)processAvailabilityOfVerificationMethodsInServerResponse:(id)arg1;
+ (_Bool)isDateDistantFuture:(id)arg1;
+ (void)asserHasValidOldPhoneNumber;
+ (_Bool)hasValidOldJabberID;
+ (id)controller;
@property(nonatomic) __weak UIProgressView *progressViewBlock; // @synthesize progressViewBlock=_progressViewBlock;
@property(nonatomic) __weak UILabel *labelUIBlocked; // @synthesize labelUIBlocked=_labelUIBlocked;
@property(nonatomic) __weak NSLayoutConstraint *viewUIBlockedHeight; // @synthesize viewUIBlockedHeight=_viewUIBlockedHeight;
@property(nonatomic) __weak UIView *viewUIBlocked; // @synthesize viewUIBlocked=_viewUIBlocked;
@property(nonatomic) __weak UIButton *buttonRequestCall; // @synthesize buttonRequestCall=_buttonRequestCall;
@property(nonatomic) __weak UIButton *buttonRequestSMS; // @synthesize buttonRequestSMS=_buttonRequestSMS;
@property(nonatomic) __weak WAOneTimeCodeInputView *codeInputView; // @synthesize codeInputView=_codeInputView;
@property(nonatomic) __weak UILabel *labelHelperText2; // @synthesize labelHelperText2=_labelHelperText2;
@property(nonatomic) __weak UILabel *labelHelperText1; // @synthesize labelHelperText1=_labelHelperText1;
@property(nonatomic) __weak NSLayoutConstraint *contentViewMinimumHeight; // @synthesize contentViewMinimumHeight=_contentViewMinimumHeight;
@property(nonatomic) __weak UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(readonly, nonatomic) NSString *acceptedVerificationCode; // @synthesize acceptedVerificationCode=_acceptedVerificationCode;
@property(nonatomic) _Bool changePhoneNumberMode; // @synthesize changePhoneNumberMode=_changePhoneNumberMode;
@property(copy, nonatomic) NSString *verificationCodeFromURL; // @synthesize verificationCodeFromURL=_verificationCodeFromURL;
@property(nonatomic) __weak id <WAPassInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)launchedFromVerificationURLWithCode:(id)arg1;
- (void)enterVerificationCodeFromURL:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)wa_fontSizeDidChange;
- (void)wa_applicationDidBecomeActive;
- (void)wa_tintColorDidChange;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)presentLearnMoreAlert:(id)arg1 message:(id)arg2;
- (void)presentAppStoreAlert:(id)arg1;
- (void)presentUnspecifiedErrorAlert;
- (void)presentGenericAlert:(id)arg1;
- (void)presentContactSupportAlert:(id)arg1 withContext:(id)arg2;
- (void)presentCodeEntryFailedAlertWithTitle:(id)arg1 message:(id)arg2;
- (void)validationOfCode:(id)arg1 failedWithError:(id)arg2;
- (void)validationOfCode:(id)arg1 finishedWithResult:(id)arg2;
- (void)validateCurrentCodeWithEntryMethod:(int)arg1;
- (void)oneTimeCodeInputView:(id)arg1 didFinishEnteringCode:(id)arg2;
- (_Bool)oneTimeCodeInputViewCanBecomeFirstResponder:(id)arg1;
@property(readonly, nonatomic) long long verificationCodeLength;
- (void)retryWithSavedPasscodeIfNeeded;
- (void)resetCodeInput;
- (void)activateCodeInputFieldIfPossible;
- (void)validateCodeInputBlockState;
- (void)updateCodeInputBlockProgress:(id)arg1;
- (void)startCodeInputBlockProgressUpdateTimer;
- (void)setCodeInputBlockState:(int)arg1;
- (void)setFullVerificationCode:(id)arg1;
- (void)codeRequestFailedWithError:(id)arg1;
- (void)codeRequestWithMethod:(id)arg1 finishedWithResult:(id)arg2;
- (void)requestVerificationCodeWithMethod:(id)arg1;
- (void)requestCall:(id)arg1;
- (void)requestSMS:(id)arg1;
- (void)validateStateOfCodeRequestButtons;
- (void)updateStateOfCodeRequestButtons:(id)arg1;
- (void)cancelCodeReminderNotification;
- (void)keyboardWillShow:(id)arg1;
- (void)finishController;
- (void)setHeaderLabelText:(_Bool)arg1;
- (void)hideOverlayWithCompletion:(CDUnknownBlockType)arg1 setViewTitle:(id)arg2;
- (void)showOverlay:(id)arg1 detailText:(id)arg2;
- (void)showOverlay:(id)arg1;
- (void)reloadFonts;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

