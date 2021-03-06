//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"

@class NSString, UIWindow;

@interface GNSPermissionsManager : NSObject <UIAlertViewDelegate>
{
    _Bool _isShowingDialog;
    UIWindow *_window;
    CDUnknownBlockType _dialogDismissalBlock;
}

+ (void)reset;
@property(copy, nonatomic) CDUnknownBlockType dialogDismissalBlock; // @synthesize dialogDismissalBlock=_dialogDismissalBlock;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) _Bool isShowingDialog; // @synthesize isShowingDialog=_isShowingDialog;
- (void).cxx_destruct;
- (void)ifNoDialogIsShownCallBlock:(CDUnknownBlockType)arg1;
- (void)askForPermissionIfDisabled:(CDUnknownBlockType)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)askForPermissionWithDismissedBlock:(CDUnknownBlockType)arg1;
- (void)showDetailedDialogWithDismissedBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

