//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;
@protocol SCOperaWebAppChatAffordanceDataSource, SCOperaWebAppChatAffordanceDelegate;

@interface SCOperaWebAppChatAffordanceView : UIView
{
    id <SCOperaWebAppChatAffordanceDelegate> _delegate;
    id <SCOperaWebAppChatAffordanceDataSource> _dataSource;
    UIImageView *_newChatsAffordanceCarat;
    UILabel *_label;
    unsigned long long _newChatsAffordancePosition;
}

- (void).cxx_destruct;
- (void)chatAffordanceTapped;
- (_Bool)isVisible;
- (_Bool)constrainedOnTop;
- (_Bool)constrainedOnBottom;
- (void)updateLabelForHidden;
- (void)updateLabelForBottom;
- (void)updateLabelForTop;
- (void)_setImageForBottom:(_Bool)arg1;
- (void)_setLabelText:(id)arg1;
- (double)height;
- (double)width;
- (struct CGSize)labelTextSize;
- (void)_initializeSubviews;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;

@end
