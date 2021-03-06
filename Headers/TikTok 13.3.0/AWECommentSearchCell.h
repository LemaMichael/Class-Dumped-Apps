//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface AWECommentSearchCell : UITableViewCell
{
    _Bool _following;
    UIImageView *_avatarImageView;
    UIImageView *_verifyBadgeView;
    UILabel *_nameLabel;
    UILabel *_subnameLabel;
    UILabel *_followingLabel;
    UILabel *_followingSeparatorLabel;
}

+ (id)identifier;
+ (id)defaultAvatarImage;
@property(retain, nonatomic) UILabel *followingSeparatorLabel; // @synthesize followingSeparatorLabel=_followingSeparatorLabel;
@property(retain, nonatomic) UILabel *followingLabel; // @synthesize followingLabel=_followingLabel;
@property(nonatomic) _Bool following; // @synthesize following=_following;
@property(retain, nonatomic) UILabel *subnameLabel; // @synthesize subnameLabel=_subnameLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *verifyBadgeView; // @synthesize verifyBadgeView=_verifyBadgeView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)p_init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configWithUser:(id)arg1 isDefaultSearch:(_Bool)arg2;

@end

