//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextField.h>

@protocol SIGHeaderEditingTextFieldDelgate;

@interface SIGHeaderEditingTextField : UITextField
{
    id <SIGHeaderEditingTextFieldDelgate> _editingDelegate;
}

@property(nonatomic) __weak id <SIGHeaderEditingTextFieldDelgate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (void)setPlaceholder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
