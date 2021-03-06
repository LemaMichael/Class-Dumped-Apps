//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NIFormElement.h"

@class NSString;
@protocol UITextFieldDelegate;

@interface NITextInputFormElement : NIFormElement
{
    _Bool _isPassword;
    NSString *_placeholderText;
    NSString *_value;
    id <UITextFieldDelegate> _delegate;
}

+ (id)passwordInputElementWithID:(long long)arg1 placeholderText:(id)arg2 value:(id)arg3;
+ (id)passwordInputElementWithID:(long long)arg1 placeholderText:(id)arg2 value:(id)arg3 delegate:(id)arg4;
+ (id)textInputElementWithID:(long long)arg1 placeholderText:(id)arg2 value:(id)arg3;
+ (id)textInputElementWithID:(long long)arg1 placeholderText:(id)arg2 value:(id)arg3 delegate:(id)arg4;
@property(nonatomic) id <UITextFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isPassword; // @synthesize isPassword=_isPassword;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
- (void).cxx_destruct;
- (Class)cellClass;

@end

