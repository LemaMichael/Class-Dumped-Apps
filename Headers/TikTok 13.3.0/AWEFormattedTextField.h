//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@class AWEFormattedTextFieldDelegate, NSCharacterSet, NSString;

@interface AWEFormattedTextField : UITextField
{
    NSString *_formatString;
    NSCharacterSet *_allowedCharacterSet;
    AWEFormattedTextFieldDelegate *_textFieldDelegate;
}

+ (void)selectTextForInput:(id)arg1 atRange:(struct _NSRange)arg2;
+ (struct _NSRange)cursorRangeWithFormat:(id)arg1 originCursorRange:(struct _NSRange)arg2;
+ (struct _NSRange)cursorRangeWithReplaceRange:(struct _NSRange)arg1 stringLength:(unsigned long long)arg2;
+ (struct _NSRange)originalRangeWithFormat:(id)arg1 formattedRange:(struct _NSRange)arg2;
+ (id)originalStringWithFormat:(id)arg1 inputString:(id)arg2;
+ (id)formattedStringWithFormat:(id)arg1 inputString:(id)arg2;
+ (id)trimmedStringForString:(id)arg1 allowedCharacterSet:(id)arg2;
@property(retain, nonatomic) AWEFormattedTextFieldDelegate *textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;
@property(copy, nonatomic) NSCharacterSet *allowedCharacterSet; // @synthesize allowedCharacterSet=_allowedCharacterSet;
@property(copy, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) NSString *originText;

@end

