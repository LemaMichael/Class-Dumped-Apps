//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface AWEASMusicCategoryTableViewCell : UITableViewCell
{
    UIImageView *_logoImageView;
    UILabel *_categoryNameLabel;
}

+ (double)recommendedHeight;
+ (id)identifier;
@property(retain, nonatomic) UILabel *categoryNameLabel; // @synthesize categoryNameLabel=_categoryNameLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (void)configWithMusicCategoryModel:(id)arg1;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

