//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class QTMButton, YTFormattedStringLabel;

@interface YTShareNavigationBarView : UIView
{
    UIView *_shadowView;
    QTMButton *_addContactButton;
    QTMButton *_backButton;
    YTFormattedStringLabel *_titleLabel;
}

@property(readonly, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) QTMButton *backButton; // @synthesize backButton=_backButton;
@property(readonly, nonatomic) QTMButton *addContactButton; // @synthesize addContactButton=_addContactButton;
- (void).cxx_destruct;
- (double)topInset;
- (void)removeAddContactButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setAddContactButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)removeBackButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setBackButtonTarget:(id)arg1 action:(SEL)arg2;
- (void)setTitle:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithColorStyle:(id)arg1;

@end

