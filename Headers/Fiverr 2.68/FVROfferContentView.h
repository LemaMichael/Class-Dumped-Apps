//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol FVROfferContentViewDelegate;

@interface FVROfferContentView : UIView
{
    int _type;
    id <FVROfferContentViewDelegate> _delegate;
    UIView *_cellseperatorView;
    UIImageView *_IconImageView;
    UILabel *_textLabel;
    UIButton *_contentViewButton;
}

@property(nonatomic) __weak UIButton *contentViewButton; // @synthesize contentViewButton=_contentViewButton;
@property(nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak UIImageView *IconImageView; // @synthesize IconImageView=_IconImageView;
@property(nonatomic) __weak UIView *cellseperatorView; // @synthesize cellseperatorView=_cellseperatorView;
@property(nonatomic) __weak id <FVROfferContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contentButtonClicked:(id)arg1;
- (void)showBottomSeperatorView:(_Bool)arg1;
- (void)configureCellWithIcon:(id)arg1 text:(id)arg2 type:(int)arg3;
- (void)awakeFromNib;

@end

