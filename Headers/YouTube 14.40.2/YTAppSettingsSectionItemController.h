//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTResponder.h"

@class GIMMe, NSString;

@interface YTAppSettingsSectionItemController : NSObject <YTResponder>
{
    id <YTAppSettingsSectionItemControllerDelegate> _controllerDelegate;
    id <YTAppSettingsViewControllerDelegate> _settingsViewControllerDelegate;
    _Bool _is1080PFormatOptionAvailable;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) _Bool is1080PFormatOptionAvailable; // @synthesize is1080PFormatOptionAvailable=_is1080PFormatOptionAvailable;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)updateMaxOfflineVideoQuality;
- (_Bool)showSettingsPickerForSetting:(int)arg1 withNavTitle:(id)arg2 sectionTitle:(id)arg3 defaultValue:(id)arg4;
- (id)settings;
- (id)openURLItemWithURL:(id)arg1 withTitle:(id)arg2;
- (id)pickerItemForSetting:(int)arg1 withTitle:(id)arg2 accessibilityIdentifier:(id)arg3 pickerSectionTitle:(id)arg4 defaultValue:(id)arg5;
- (id)boolSwitchItemForSetting:(int)arg1 withTitle:(id)arg2 titleDescription:(id)arg3 accessibilityIdentifier:(id)arg4;
- (id)initWithParentResponder:(id)arg1 controllerDelegate:(id)arg2 settingsViewControllerDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

