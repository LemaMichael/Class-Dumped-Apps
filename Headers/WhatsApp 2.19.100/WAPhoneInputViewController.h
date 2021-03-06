//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "MFMailComposeViewControllerDelegate-Protocol.h"
#import "WACountryPickerControllerDelegate-Protocol.h"
#import "WAVerificationLinkHandling-Protocol.h"

@class NSString, UIAlertController, UILabel, UIView, WACountryInfo, WACountryNameTableViewCell, WALinkLabel, WAOverlayView, WAPhoneNumberInputView, WATableRow;
@protocol WAPhoneInputViewControllerDelegate;

@interface WAPhoneInputViewController : WAStaticTableViewController <WACountryPickerControllerDelegate, MFMailComposeViewControllerDelegate, WAVerificationLinkHandling>
{
    WACountryNameTableViewCell *_countryNameCell;
    WATableRow *_rowInputFields;
    WAPhoneNumberInputView *_phoneNumberInputView;
    UIView *_headerView;
    UILabel *_headerViewLabel;
    UIView *_footerView;
    WALinkLabel *_footerViewLabel;
    WALinkLabel *_warningMessage;
    UIAlertController *_phoneConfirmAlert;
    WAOverlayView *_overlayView;
    WACountryInfo *_prefillCountry;
    NSString *_prefillPhoneNumber;
    _Bool _firstLayoutCompletion;
    _Bool _registrationUI;
    _Bool _showFooterView;
    id <WAPhoneInputViewControllerDelegate> _delegate;
    NSString *_verificationCodeFromURL;
    NSString *_disallowedUnformattedPhoneNumber;
    WACountryInfo *_selectedCountry;
    NSString *_normalizedPhoneNumber;
}

+ (_Bool)usesManagedTableViewHeaderFooter;
@property(nonatomic) _Bool showFooterView; // @synthesize showFooterView=_showFooterView;
@property(copy, nonatomic) NSString *normalizedPhoneNumber; // @synthesize normalizedPhoneNumber=_normalizedPhoneNumber;
@property(retain, nonatomic) WACountryInfo *selectedCountry; // @synthesize selectedCountry=_selectedCountry;
@property(copy, nonatomic) NSString *disallowedUnformattedPhoneNumber; // @synthesize disallowedUnformattedPhoneNumber=_disallowedUnformattedPhoneNumber;
@property(nonatomic) _Bool registrationUI; // @synthesize registrationUI=_registrationUI;
@property(copy, nonatomic) NSString *verificationCodeFromURL; // @synthesize verificationCodeFromURL=_verificationCodeFromURL;
@property(nonatomic) __weak id <WAPhoneInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)launchedFromVerificationURLWithCode:(id)arg1;
- (void)countryPicker:(id)arg1 didSelectCountry:(id)arg2;
- (void)showCountryPicker;
- (_Bool)phoneNumberTextFieldShouldReturn:(id)arg1;
- (void)phoneNumberTextFieldDidChange:(id)arg1;
- (void)prefillWithPhoneNumber:(id)arg1 country:(id)arg2;
- (void)resetPhoneNumber;
- (void)sendDailerFieldStatsWithNewChat:(_Bool)arg1;
- (void)cancelAction:(id)arg1;
- (void)promptToUseDifferentNumberOrMigrateWithFormattedPhoneNumber:(id)arg1;
- (void)doneAction:(id)arg1;
- (void)countryCodeChangedAction:(id)arg1;
- (void)createHeaderViewForContactsIfNeeded;
- (void)createHeaderViewForRegistrationIfNeeded;
- (void)createHeaderViewLabel;
- (id)headerFont;
- (void)wa_fontSizeDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateFooterViewText;
- (void)setFooterViewVisible:(_Bool)arg1;
- (id)newAutoLayoutAwareTableViewFooter;
- (id)newAutoLayoutAwareTableViewHeader;
- (void)updateHeaderTextForRegistration;
- (void)setUpTableView;
- (void)viewDidLoad;
- (void)askToProceedToVerificationCodeRequestWithNormalizedPhoneNumber:(id)arg1 possibleMigration:(_Bool)arg2;
- (void)deviceCheckFailedWithError:(id)arg1;
- (void)deviceCheckFinishedWithResult:(id)arg1;
- (void)performSameDeviceCheck;
- (void)handleOpenURL:(id)arg1 fromLinkLabel:(id)arg2;
- (void)showContactsAccessPrompt;
- (void)confirmNewChat;
- (void)updateScreenTitle;
- (void)validateUserInput;
- (void)showOverlay:(id)arg1;
- (void)wa_applicationWillEnterForeground;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

