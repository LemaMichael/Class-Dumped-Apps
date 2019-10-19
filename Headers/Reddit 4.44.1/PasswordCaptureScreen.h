//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CaptureScreen.h"

@class CaptureContentTextEntry;

@interface PasswordCaptureScreen : CaptureScreen
{
    _Bool _isPasswordValid;
    CaptureContentTextEntry *_textEntryContent;
}

@property(nonatomic) _Bool isPasswordValid; // @synthesize isPasswordValid=_isPasswordValid;
@property(retain, nonatomic) CaptureContentTextEntry *textEntryContent; // @synthesize textEntryContent=_textEntryContent;
- (void).cxx_destruct;
- (void)hidePasswordError;
- (void)showPasswordError;
- (_Bool)validateContent;
- (void)validatePassword:(id)arg1 withDelay:(double)arg2;
- (_Bool)validateTextEntryString:(id)arg1 forTextEntryContent:(id)arg2;
- (void)toggleRevealPassword;
- (id)contentItems;

@end
