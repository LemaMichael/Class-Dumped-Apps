//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCCognacChatDockBadgeView, SCCognacChatDockPresenceInfo, SCCognacChatDockRingsGroupView, SCCognacChatDockTextView, SCNetworkImageView;

@interface SCCognacChatDockAppView : UIView
{
    SCCognacChatDockRingsGroupView *_ringsGroupView;
    SCNetworkImageView *_iconView;
    SCCognacChatDockBadgeView *_badgeView;
    SCCognacChatDockTextView *_textView;
    SCCognacChatDockPresenceInfo *_presenceInfo;
    double _iconSizeScale;
}

@property(readonly, nonatomic) double iconSizeScale; // @synthesize iconSizeScale=_iconSizeScale;
@property(readonly, copy, nonatomic) SCCognacChatDockPresenceInfo *presenceInfo; // @synthesize presenceInfo=_presenceInfo;
- (void).cxx_destruct;
- (void)_setIconSizeScale:(double)arg1;
- (void)setAnimationPaused:(_Bool)arg1;
- (id)animationBaseView;
- (void)setPresenceInfo:(id)arg1;
- (void)setPresenceInfo:(id)arg1 animationDelay:(double)arg2 pulseBadgeView:(_Bool)arg3;
- (void)clear;
- (id)imageDownloader;
- (void)setImageDownloader:(id)arg1;
- (void)setIconImage:(id)arg1 iconSizeScale:(double)arg2 showIconBorder:(_Bool)arg3;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
