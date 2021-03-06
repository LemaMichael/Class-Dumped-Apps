//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

#import "GOOControlledTextField-Protocol.h"
#import "GOOTextFieldTraits-Protocol.h"
#import "GOOValidatedTextField-Protocol.h"

@class GOOTextFieldController, NSDictionary, NSString, QTMColorGroup, UIButton, UIColor, UIFont, UIImage, UITextPosition, UITextRange, UIView;
@protocol GOOTextFieldCharacterCounter, GOOTextFieldValidator, UITextInputDelegate, UITextInputTokenizer;

@interface GOOTextField : UITextField <GOOControlledTextField, GOOTextFieldTraits, GOOValidatedTextField>
{
    UIButton *_internalClearButton;
    UIColor *_clearButtonColor;
    NSString *_titleTruncationMode;
    GOOTextFieldController *_controller;
    UIImage *_clearButtonImage;
}

@property(retain, nonatomic) UIImage *clearButtonImage; // @synthesize clearButtonImage=_clearButtonImage;
@property(retain, nonatomic) GOOTextFieldController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) NSString *titleTruncationMode; // @synthesize titleTruncationMode=_titleTruncationMode;
@property(retain, nonatomic) UIColor *clearButtonColor; // @synthesize clearButtonColor=_clearButtonColor;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (struct CGRect)clearButtonRectForBounds:(struct CGRect)arg1;
- (struct CGRect)editingRectForBounds:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)setEnabled:(_Bool)arg1;
@property(retain, nonatomic) UIFont *font;
@property(retain, nonatomic) UIColor *helperTextColor;
@property(copy, nonatomic) NSString *helperText;
- (void)setAttributedPlaceholder:(id)arg1;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *text;
- (struct CGRect)textRectThatFitsForBounds:(struct CGRect)arg1;
@property(nonatomic) __weak id <GOOTextFieldValidator> validator;
@property(nonatomic) long long underlineViewMode;
@property(nonatomic) __weak id <GOOTextFieldCharacterCounter> characterCounter;
@property(nonatomic) unsigned long long characterLimit;
@property(retain, nonatomic) UIColor *borderColor;
@property(retain, nonatomic) UIColor *errorColor;
@property(retain, nonatomic) UIColor *placeholderColor;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) QTMColorGroup *colorGroup;
@property(nonatomic) long long presentationStyle;
@property(readonly, nonatomic) __weak UIButton *internalClearButton; // @synthesize internalClearButton=_internalClearButton;
- (void)validate;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)commonInitialization;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEditing) _Bool editing;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) _Bool hasText;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id insertDictationResultPlaceholder;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(readonly, nonatomic) UITextRange *markedTextRange;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(copy) UITextRange *selectedTextRange;
@property(nonatomic) long long selectionAffinity;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;
@property(readonly, nonatomic) UIView *textInputView;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;

@end

