//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt32Array, YTIThumbnailSupportedRenderers;

@interface YTIUnlimitedHeaderV2Data : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailSupportedRenderers *backgroundThumbnailLargeFactor; // @dynamic backgroundThumbnailLargeFactor;
@property(retain, nonatomic) YTIThumbnailSupportedRenderers *backgroundThumbnailSmallFactor; // @dynamic backgroundThumbnailSmallFactor;
@property(nonatomic) _Bool hasBackgroundThumbnailLargeFactor; // @dynamic hasBackgroundThumbnailLargeFactor;
@property(nonatomic) _Bool hasBackgroundThumbnailSmallFactor; // @dynamic hasBackgroundThumbnailSmallFactor;
@property(nonatomic) _Bool hasLogoThumbnail; // @dynamic hasLogoThumbnail;
@property(retain, nonatomic) YTIThumbnailSupportedRenderers *logoThumbnail; // @dynamic logoThumbnail;
@property(retain, nonatomic) GPBUInt32Array *scrimLayerColorsArray; // @dynamic scrimLayerColorsArray;
@property(readonly, nonatomic) unsigned long long scrimLayerColorsArray_Count; // @dynamic scrimLayerColorsArray_Count;

@end

