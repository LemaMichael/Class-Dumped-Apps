//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWELiveHotBrowserCollectionViewCellProtocol-Protocol.h"

@class AWELiveHotBrowserAnimationView, AWELiveStoryBrowserTagView, NSString, UIImageView, UILabel;

@interface AWELiveHotBrowserCollectionOverlyingViewCell : UICollectionViewCell <AWELiveHotBrowserCollectionViewCellProtocol>
{
    _Bool _didStoryViewOpened;
    _Bool _isFirstSetData;
    UIImageView *_avatarView;
    unsigned long long _style;
    AWELiveStoryBrowserTagView *_tagView;
    UILabel *_nameLabel;
    long long _index;
    AWELiveHotBrowserAnimationView *_animationViewForFeed;
    AWELiveHotBrowserAnimationView *_animationViewForConcern;
}

+ (Class)getImplementationClass;
+ (id)reuseIdentifier;
@property(retain, nonatomic) AWELiveHotBrowserAnimationView *animationViewForConcern; // @synthesize animationViewForConcern=_animationViewForConcern;
@property(retain, nonatomic) AWELiveHotBrowserAnimationView *animationViewForFeed; // @synthesize animationViewForFeed=_animationViewForFeed;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool isFirstSetData; // @synthesize isFirstSetData=_isFirstSetData;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) AWELiveStoryBrowserTagView *tagView; // @synthesize tagView=_tagView;
@property(nonatomic) _Bool didStoryViewOpened; // @synthesize didStoryViewOpened=_didStoryViewOpened;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (_Bool)_isLargeStyleOfAvatar;
- (void)stopAvatarAnimation;
- (void)startAvatarAnimation;
- (void)setData:(id)arg1;
- (void)remakeConstrains;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
