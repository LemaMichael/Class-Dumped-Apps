//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

@class BaseLabel, Post;

@interface FeedPostViewCountView : BaseView
{
    Post *_post;
    BaseLabel *_viewCountLabel;
}

+ (double)topPaddingForPostType:(unsigned long long)arg1;
+ (struct CGSize)calculatedSizeWithData:(id)arg1;
@property(retain, nonatomic) BaseLabel *viewCountLabel; // @synthesize viewCountLabel=_viewCountLabel;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configureWithData:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

