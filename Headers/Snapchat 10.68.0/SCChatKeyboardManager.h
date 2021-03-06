//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SCLazy, UITextInputMode, UIView;
@protocol SCChatKeyboardManagerDataSource;

@interface SCChatKeyboardManager : NSObject <SCTraceEnabled>
{
    NSMutableDictionary *_inputModesSnapshotMapping;
    NSArray *_inputModes;
    SCLazy *_flattenedRenderStrategy;
    _Bool _isShowingKeyboard;
    id <SCChatKeyboardManagerDataSource> _dataSource;
    double _keyboardHeight;
    UIView *_keyboardSnapshotView;
    UITextInputMode *_lastKnownInputMode;
}

@property(retain, nonatomic) UITextInputMode *lastKnownInputMode; // @synthesize lastKnownInputMode=_lastKnownInputMode;
@property(nonatomic) _Bool isShowingKeyboard; // @synthesize isShowingKeyboard=_isShowingKeyboard;
@property(retain, nonatomic) UIView *keyboardSnapshotView; // @synthesize keyboardSnapshotView=_keyboardSnapshotView;
@property(readonly, nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) __weak id <SCChatKeyboardManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)textInputCurrentInputModeDidChange:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(readonly, nonatomic) double keyboardSnapshotHeight;
- (id)_getCurrentInputModeForTextField:(id)arg1;
- (id)_snapshottedKeyboardView:(id)arg1;
- (void)_snapshotKeyboardIfNeededForInputView:(id)arg1 inputMode:(id)arg2;
- (void)snapshotKeyboardIfNeeded;
- (_Bool)canSnapshotTextInputView:(id)arg1;
@property(readonly, nonatomic, getter=isKeyboardSnapshotVisible) _Bool keyboardSnapshotVisible;
- (void)removeKeyboardSnapshot;
- (id)_snapshotForCurrentInputModeIfAvailableAllowsEmoji:(_Bool)arg1 textInputView:(id)arg2 inputMode:(id)arg3;
- (_Bool)addKeyboardSnapshotToView:(id)arg1 isExiting:(_Bool)arg2;
- (id)initWithFlattenedRenderStrategy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

