//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GLUEImageView, UIButton, UILabel;

@interface SPTSearchAutocompleteTableViewCell : UITableViewCell
{
    UILabel *_titleLabel;
    UIButton *_fillButton;
    GLUEImageView *_leadingAccessoryView;
}

+ (double)preferredHeight;
@property(retain, nonatomic) GLUEImageView *leadingAccessoryView; // @synthesize leadingAccessoryView=_leadingAccessoryView;
@property(retain, nonatomic) UIButton *fillButton; // @synthesize fillButton=_fillButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setupConstraints;
- (void)setupTheme;
- (void)setupLeadingAccessoryView;
- (void)setupFillButton;
- (void)setupTitleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
