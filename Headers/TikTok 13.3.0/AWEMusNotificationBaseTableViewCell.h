//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEMusNotificationModel, NSDictionary;

@interface AWEMusNotificationBaseTableViewCell : UITableViewCell
{
    AWEMusNotificationModel *_mNoticeModel;
}

+ (struct UIEdgeInsets)buttonContentEdgeInsets;
+ (id)buttonTitleAttributes;
@property(retain, nonatomic) AWEMusNotificationModel *mNoticeModel; // @synthesize mNoticeModel=_mNoticeModel;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didTapAvatarView;
- (void)didSelectCellAtIndexPath:(id)arg1;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect)aspectFillModeFrameOfContentWithContentSize:(struct CGSize)arg1 containerSize:(struct CGSize)arg2;
- (void)setNotificationImageView:(id)arg1 withURLList:(id)arg2 imageViewSize:(struct CGSize)arg3 cornerRadius:(double)arg4 placeholderImage:(CDUnknownBlockType)arg5;
- (void)setCoverImageView:(id)arg1 withURLList:(id)arg2 imageViewSize:(struct CGSize)arg3;
- (void)setAvatarImageView:(id)arg1 withURLList:(id)arg2 imageViewSize:(struct CGSize)arg3 userOpaquePlaceHolder:(_Bool)arg4;
- (void)setAvatarImageView:(id)arg1 withURLList:(id)arg2 imageViewSize:(struct CGSize)arg3;
- (id)attributedStringWithFormatString:(id)arg1 params:(id)arg2 attributes:(id)arg3;
- (id)attributedStringWithFormatString:(id)arg1 params:(id)arg2;
@property(readonly, nonatomic) NSDictionary *timestampAttributes;
@property(readonly, nonatomic) NSDictionary *highlightedTitleAttributes;
@property(readonly, nonatomic) NSDictionary *highlightedAttributes;
@property(readonly, nonatomic) NSDictionary *commonAttributes;
- (void)avatarTapped:(id)arg1;
- (void)configAvatarViewForTapAction:(id)arg1;
- (void)transferToAwemeWithItemID:(id)arg1 enterFrom:(id)arg2;
- (void)transferToUserProfileWithUserID:(id)arg1 enterFrom:(id)arg2 enterMethod:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

