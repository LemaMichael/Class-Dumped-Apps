//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUELabel, NSLayoutConstraint, NSString, SPTSnackbarWithActionViewStyle, UIButton;
@protocol GLUEStyleable;

@interface SPTSnackbarWithActionView : UIView <GLUEStyleable>
{
    GLUELabel *_textLabel;
    UIButton<GLUEStyleable> *_actionButton;
    SPTSnackbarWithActionViewStyle *_style;
    NSLayoutConstraint *_textLeadingConstraint;
    NSLayoutConstraint *_textTopConstraint;
    NSLayoutConstraint *_textBottomConstraint;
    NSLayoutConstraint *_buttonLeadingConstraint;
    NSLayoutConstraint *_buttonTrailingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *buttonTrailingConstraint; // @synthesize buttonTrailingConstraint=_buttonTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonLeadingConstraint; // @synthesize buttonLeadingConstraint=_buttonLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textBottomConstraint; // @synthesize textBottomConstraint=_textBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textTopConstraint; // @synthesize textTopConstraint=_textTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *textLeadingConstraint; // @synthesize textLeadingConstraint=_textLeadingConstraint;
@property(retain, nonatomic) SPTSnackbarWithActionViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIButton<GLUEStyleable> *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) GLUELabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)updateConstraintsValues;
- (void)addLayoutConstraints;
- (void)applyStyle;
- (id)initWithStyle:(id)arg1 actionButton:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

