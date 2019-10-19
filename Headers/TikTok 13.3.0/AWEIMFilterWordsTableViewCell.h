//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSIndexPath, NSString, UIButton, UITextField, UIView;
@protocol AWEIMFilterWordsProtocol;

@interface AWEIMFilterWordsTableViewCell : UITableViewCell <UITextFieldDelegate>
{
    _Bool _isDeleteAction;
    unsigned long long _cellType;
    id <AWEIMFilterWordsProtocol> _delegate;
    NSIndexPath *_indexPath;
    UIButton *_actionButton;
    UITextField *_contentEditView;
    UIView *_lineView;
}

+ (id)identifier;
@property(nonatomic) _Bool isDeleteAction; // @synthesize isDeleteAction=_isDeleteAction;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UITextField *contentEditView; // @synthesize contentEditView=_contentEditView;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) __weak id <AWEIMFilterWordsProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)beginEditing;
- (void)actionCalled;
- (void)updateContent:(id)arg1 withType:(unsigned long long)arg2;
- (void)_setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
