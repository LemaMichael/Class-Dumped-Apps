//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAStaticTableViewController.h>

#import "WAParticipantPickerViewControllerDelegate-Protocol.h"

@class NSDate, NSString, WAActivityLabel, WAPrivacyPolicy, WATableRow;
@protocol WADeviceDate;

@interface WAPrivacySettingsPicker : WAStaticTableViewController <WAParticipantPickerViewControllerDelegate>
{
    WATableRow *_nobodyRow;
    WATableRow *_contactsRow;
    WATableRow *_allUsersRow;
    WATableRow *_blacklistRow;
    WAActivityLabel *_activityLabel;
    NSDate<WADeviceDate> *_activityStartTime;
    WAPrivacyPolicy *_privacyPolicy;
    unsigned long long _privacyCategory;
    NSString *_titleString;
}

- (void).cxx_destruct;
- (void)participantPicker:(id)arg1 didSelectContacts:(id)arg2;
- (void)participantPickerDidCancel:(id)arg1;
- (void)privacyPolicyDidChange:(id)arg1;
- (void)hideActivity;
- (void)showActivity;
- (void)selectValue:(unsigned long long)arg1;
- (void)deselectSelectedRowAnimated:(_Bool)arg1;
- (void)updateRows;
- (void)updateNobodyRowWithEnabledState:(_Bool)arg1;
- (void)setUpTableView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initForCategory:(unsigned long long)arg1 title:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
