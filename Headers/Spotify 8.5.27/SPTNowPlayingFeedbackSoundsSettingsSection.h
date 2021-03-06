//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SettingsSection.h"

@class SPTNowPlayingLogger, SettingsSwitchTableViewCell;

@interface SPTNowPlayingFeedbackSoundsSettingsSection : SettingsSection
{
    SettingsSwitchTableViewCell *_feedbackSoundCell;
    SPTNowPlayingLogger *_nowPlayingLogger;
}

@property(readonly, nonatomic) SPTNowPlayingLogger *nowPlayingLogger; // @synthesize nowPlayingLogger=_nowPlayingLogger;
@property(retain, nonatomic) SettingsSwitchTableViewCell *feedbackSoundCell; // @synthesize feedbackSoundCell=_feedbackSoundCell;
- (void).cxx_destruct;
- (void)feedbackSwitchChanged:(id)arg1;
- (id)cellForRow:(long long)arg1;
- (long long)numberOfRows;
- (unsigned long long)categoryPosition;
- (id)initWithSettingsViewController:(id)arg1 nowPlayingLogger:(id)arg2;

@end

