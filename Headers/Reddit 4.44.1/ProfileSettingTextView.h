//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "BaseTextViewDelegate-Protocol.h"

@class BaseLabel, BaseTextView, NSString;
@protocol ProfileSettingTextViewDelegate;

@interface ProfileSettingTextView : BaseView <BaseTextViewDelegate>
{
    BaseLabel *_mainLabel;
    BaseLabel *_detailLabel;
    BaseTextView *_textView;
    double _textViewHeight;
    long long _characterLengthWarningThreshold;
    long long _characterLengthLimit;
    id <ProfileSettingTextViewDelegate> _delegate;
    BaseTextView *_titleCharacterLimitIndicatorView;
}

@property(retain, nonatomic) BaseTextView *titleCharacterLimitIndicatorView; // @synthesize titleCharacterLimitIndicatorView=_titleCharacterLimitIndicatorView;
@property(nonatomic) __weak id <ProfileSettingTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long characterLengthLimit; // @synthesize characterLengthLimit=_characterLengthLimit;
@property(nonatomic) long long characterLengthWarningThreshold; // @synthesize characterLengthWarningThreshold=_characterLengthWarningThreshold;
@property(nonatomic) double textViewHeight; // @synthesize textViewHeight=_textViewHeight;
@property(readonly, nonatomic) BaseTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) BaseLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) BaseLabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void).cxx_destruct;
- (_Bool)textViewShouldChangeSize:(id)arg1;
- (void)textView:(id)arg1 didChangeToNewSize:(struct CGSize)arg2;
- (_Bool)baseTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

