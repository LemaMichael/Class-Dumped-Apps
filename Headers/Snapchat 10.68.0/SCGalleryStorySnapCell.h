//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCGalleryBaseStorySnapCell.h"

#import "SCGalleryEntrySyncStatusGeneratorDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIImageView, UILabel;

@interface SCGalleryStorySnapCell : SCGalleryBaseStorySnapCell <SCGalleryEntrySyncStatusGeneratorDelegate>
{
    CAShapeLayer *_roundCornerMaskLayer;
    CAShapeLayer *_borderLayer;
    UIImageView *_lagunaIcon;
    UILabel *_videoDurationLabel;
    UIImageView *_badgeView;
}

- (void).cxx_destruct;
- (void)entrySyncStatusGenerator:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
- (void)_createAndShowBadgeForSnap:(id)arg1;
- (void)_setupVideoThumbnailLabelIfNeeded:(id)arg1;
- (void)roundCorner:(unsigned long long)arg1;
- (void)updateUI;
- (id)sourceViewForOpera;
- (void)setSnap:(id)arg1 storyViewModel:(id)arg2 mediaScenePath:(CDStruct_bac8f6e9)arg3 selectMode:(_Bool)arg4 userSession:(id)arg5 debugSyncStatusChecker:(id)arg6;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

