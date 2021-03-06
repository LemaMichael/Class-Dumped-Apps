//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMFlexibleHeaderBackgroundView.h"

#import "UITextFieldDelegate-Protocol.h"

@class GOOTextField, NSString, QTMButton, UIView, YTPlaylistPrivacyButton;
@protocol YTMMusicPlaylistEditHeaderViewDelegate;

@interface YTMMusicPlaylistEditHeaderView : YTMFlexibleHeaderBackgroundView <UITextFieldDelegate>
{
    GOOTextField *_titleTextField;
    GOOTextField *_descriptionTextField;
    QTMButton *_doneButton;
    YTPlaylistPrivacyButton *_privacyButton;
    UIView *_contentView;
    UIView *_backdropView;
    id <YTMMusicPlaylistEditHeaderViewDelegate> _delegate;
}

@property(nonatomic) __weak id <YTMMusicPlaylistEditHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)titleTextFieldDidChange:(id)arg1;
- (double)doneButtonPadding;
- (void)didPressDoneButton:(id)arg1;
- (double)maximumHeight;
- (double)minimumHeight;
@property(nonatomic) int privacyStatus;
@property(copy, nonatomic) NSString *playlistDescriptionPlaceholder;
@property(copy, nonatomic) NSString *playlistDescription;
@property(copy, nonatomic) NSString *titlePlaceholder;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

