//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageContainerSliceView.h"

@class UIImageView, UIView, WAMessageDocumentSlice, _WAMessageDocumentSliceMetadataView;

@interface WAMessageDocumentSliceView : WAMessageContainerSliceView
{
    UIView *_containerView;
    UIView *_imageContainerView;
    UIImageView *_imageView;
    UIImageView *_iconImageView;
    _WAMessageDocumentSliceMetadataView *_metadataView;
    long long _imageQuality;
}

+ (_Bool)pairsWithQuickForwardButton;
+ (_Bool)needsProgressView;
+ (_Bool)isUserInteractionEnabled;
- (void).cxx_destruct;
- (void)configureProgressView:(id)arg1;
- (void)layoutProgressView:(id)arg1;
- (id)newStandardProgressView;
- (void)reloadSliceAfterChange:(unsigned long long)arg1;
- (_Bool)isDoubleTapGestureEnabled;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageDocumentSlice *slice; // @dynamic slice;

@end

