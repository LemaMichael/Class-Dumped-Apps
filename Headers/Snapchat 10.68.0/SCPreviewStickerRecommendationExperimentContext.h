//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCPreviewStickerRecommendationExperimentContext : SCExperimentContext
{
    _Bool _previewStickerRecommendationEnabled;
    _Bool _previewStickerRecommendationFrontFacingCameraEnabled;
    NSString *_previewStickerRecommendationResourceEndpoint;
}

@property(readonly, nonatomic) _Bool previewStickerRecommendationFrontFacingCameraEnabled; // @synthesize previewStickerRecommendationFrontFacingCameraEnabled=_previewStickerRecommendationFrontFacingCameraEnabled;
@property(readonly, nonatomic) NSString *previewStickerRecommendationResourceEndpoint; // @synthesize previewStickerRecommendationResourceEndpoint=_previewStickerRecommendationResourceEndpoint;
@property(readonly, nonatomic) _Bool previewStickerRecommendationEnabled; // @synthesize previewStickerRecommendationEnabled=_previewStickerRecommendationEnabled;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end
