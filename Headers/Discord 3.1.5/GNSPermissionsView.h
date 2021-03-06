//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "GNSPermissionViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UILabel, UIView;

@interface GNSPermissionsView : UIScrollView <GNSPermissionViewDelegate>
{
    UILabel *_headerLabel;
    UIImageView *_imageView;
    UILabel *_descriptionLabel;
    UILabel *_nearbySensors;
    UIView *_whiteBackground;
    NSMutableArray *_stackedViews;
}

@property(retain, nonatomic) NSMutableArray *stackedViews; // @synthesize stackedViews=_stackedViews;
@property(readonly, nonatomic) UIView *whiteBackground; // @synthesize whiteBackground=_whiteBackground;
@property(readonly, nonatomic) UILabel *nearbySensors; // @synthesize nearbySensors=_nearbySensors;
@property(readonly, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
- (void).cxx_destruct;
- (double)layoutStackedViewsFromYOrigin:(double)arg1 applyingLayout:(_Bool)arg2;
- (double)layoutSubviewsWithSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (void)addPermissionViewWithTitle:(id)arg1 subtitle:(id)arg2 description:(id)arg3;
- (void)permissionView:(id)arg1 wantsLayoutWithAnimationBlock:(CDUnknownBlockType)arg2;
- (void)layoutSubviews;
- (id)initWithHeaderBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

