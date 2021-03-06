//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class IconButton3, NFUILabel, NFUIProfileEntity, NSString, UIImageView, UILocalizedTextField, UIStackView, UISwitch;
@protocol ProfileEditViewDelegateProtocol;

@interface ProfileEditView : UIView <UITextFieldDelegate>
{
    id <ProfileEditViewDelegateProtocol> _delegate;
    NFUIProfileEntity *_profile;
    UILocalizedTextField *_profileNameField;
    UIImageView *_avatarImage;
    UIView *_containerView;
    UISwitch *_forKidsSwitch;
    NFUILabel *_forKidsLabel;
    IconButton3 *_deleteButton;
    NFUILabel *_changeLabel;
    NFUILabel *_kidsWarningLabel;
    UIStackView *_mainStackView;
    UIStackView *_forKidsStackView;
    UIStackView *_bottomStackView;
    NSString *_mutatedAvatarName;
    NSString *_mutatedAvatarUrlString;
}

+ (id)profileEditViewForCurrentIdiom;
@property(retain, nonatomic) NSString *mutatedAvatarUrlString; // @synthesize mutatedAvatarUrlString=_mutatedAvatarUrlString;
@property(retain, nonatomic) NSString *mutatedAvatarName; // @synthesize mutatedAvatarName=_mutatedAvatarName;
@property(nonatomic) __weak UIStackView *bottomStackView; // @synthesize bottomStackView=_bottomStackView;
@property(nonatomic) __weak UIStackView *forKidsStackView; // @synthesize forKidsStackView=_forKidsStackView;
@property(nonatomic) __weak UIStackView *mainStackView; // @synthesize mainStackView=_mainStackView;
@property(nonatomic) __weak NFUILabel *kidsWarningLabel; // @synthesize kidsWarningLabel=_kidsWarningLabel;
@property(nonatomic) __weak NFUILabel *changeLabel; // @synthesize changeLabel=_changeLabel;
@property(nonatomic) __weak IconButton3 *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(nonatomic) __weak NFUILabel *forKidsLabel; // @synthesize forKidsLabel=_forKidsLabel;
@property(nonatomic) __weak UISwitch *forKidsSwitch; // @synthesize forKidsSwitch=_forKidsSwitch;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIImageView *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(nonatomic) __weak UILocalizedTextField *profileNameField; // @synthesize profileNameField=_profileNameField;
@property(retain, nonatomic) NFUIProfileEntity *profile; // @synthesize profile=_profile;
@property(nonatomic) __weak id <ProfileEditViewDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configureLayout;
- (id)mutatedProfile;
- (void)forKidsSwitchChanged:(id)arg1;
- (void)toggleForKidsSwitch:(id)arg1;
- (void)avatarTapped:(id)arg1;
- (void)deleteButtonTapped:(id)arg1;
- (void)reloadAvatarImage;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)textSpacingViewForTextField:(id)arg1;
- (void)didMoveToSuperview;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

