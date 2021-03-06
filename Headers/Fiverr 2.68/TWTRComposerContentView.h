//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWTRComposerThemedView.h"

@class NSLayoutConstraint, TWTRCardConfiguration, TWTRCardPreviewView, TWTRComposerTextViewDelegate, UILabel, UIScrollView, UITextView;

@interface TWTRComposerContentView : TWTRComposerThemedView
{
    UITextView *_textView;
    UIScrollView *_scrollView;
    TWTRCardPreviewView *_cardPreview;
    TWTRCardConfiguration *_cardConfig;
    CDUnknownBlockType _countChangeHandler;
    long long _remainingCharacterCount;
    TWTRComposerTextViewDelegate *_textViewDelegate;
    NSLayoutConstraint *_textViewHeightConstraint;
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) NSLayoutConstraint *textViewHeightConstraint; // @synthesize textViewHeightConstraint=_textViewHeightConstraint;
@property(retain, nonatomic) TWTRComposerTextViewDelegate *textViewDelegate; // @synthesize textViewDelegate=_textViewDelegate;
@property(readonly, nonatomic) long long remainingCharacterCount; // @synthesize remainingCharacterCount=_remainingCharacterCount;
@property(copy, nonatomic) CDUnknownBlockType countChangeHandler; // @synthesize countChangeHandler=_countChangeHandler;
@property(readonly, nonatomic) TWTRCardConfiguration *cardConfig; // @synthesize cardConfig=_cardConfig;
@property(readonly, nonatomic) TWTRCardPreviewView *cardPreview; // @synthesize cardPreview=_cardPreview;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)updateThemedViews;
- (void)togglePlaceholderLabelVisibility;
- (void)handleTextViewChangeWithContext:(id)arg1;
- (id)makeTextViewDelegate;
- (id)makePlaceholderLabel;
- (id)makeComposeEditor;
- (id)makeCardPreviewViewWithConfig:(id)arg1;
- (void)embedViewsInScrollView;
- (void)embedScrollView;
- (id)initWithFrame:(struct CGRect)arg1 cardConfiguration:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

