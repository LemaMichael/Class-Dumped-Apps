//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface AWEMixVideoDetailListCell : UITableViewCell
{
    UIImageView *_mixVideoCoverView;
    UILabel *_titleLabel;
    UILabel *_durationLabel;
    UILabel *_playLabel;
}

@property(retain, nonatomic) UILabel *playLabel; // @synthesize playLabel=_playLabel;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *mixVideoCoverView; // @synthesize mixVideoCoverView=_mixVideoCoverView;
- (void).cxx_destruct;
- (id)secondsFormatStringWithDuration:(id)arg1;
- (id)minuteFormatStringWithDuration:(id)arg1;
- (id)getFormatTimeStringWithDuration:(id)arg1;
- (void)updateAwemeModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

