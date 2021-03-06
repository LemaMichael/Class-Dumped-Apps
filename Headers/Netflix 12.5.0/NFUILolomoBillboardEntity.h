//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUILolomoEntity.h"

#import "LolomoViewableEntityProtocol-Protocol.h"
#import "VideoMetadataEntityProtocol-Protocol.h"

@class BillboardCellStyles, NFUIContentAdvisoryEntity, NSArray, NSDictionary, NSNumber, NSString, NSTimer;

@interface NFUILolomoBillboardEntity : NFUILolomoEntity <LolomoViewableEntityProtocol, VideoMetadataEntityProtocol>
{
    _Bool _hasAwards;
    _Bool _canAutoPlay;
    _Bool _orcBillboardData;
    _Bool _isNewForPVR;
    _Bool _isVolumeOnByDefault;
    NSString *_supplementalMessage;
    NSString *_synopsis;
    NSString *_summarySynopsis;
    NSNumber *_currentEntityId;
    NSString *_currentEntityType;
    NSString *_queueAction;
    NSString *_backgroundUrl;
    NSNumber *_backgroundWidth;
    NSNumber *_backgroundHeight;
    NSString *_backgroundArtWorkType;
    NSString *_backgroundTone;
    NSString *_hashtag;
    NSString *_logoUrl;
    NSNumber *_logoHeight;
    NSNumber *_logoWidth;
    double _logoAspectRatio;
    double _backgroundAspectRatio;
    NSString *_dateBadgeUrl;
    NSNumber *_dateBadgeHeight;
    NSNumber *_dateBadgeWidth;
    double _dateBadgeAspectRatio;
    NSString *_awardsHeadlineUrl;
    NSNumber *_awardsHeight;
    NSNumber *_awardsWidth;
    double _awardAspectRatio;
    long long _billboardType;
    NSString *_type;
    NSNumber *_isOriginal;
    NSNumber *_autoPlay;
    NSNumber *_isAvailableForED;
    NSArray *_badges;
    NSDictionary *_billboard;
    NSString *_impressionToken;
    NSString *_storyArtUrl;
    NSNumber *_thumbRating;
    NSNumber *_matchPercentage;
    NSNumber *_releaseYear;
    NSString *_maturityRating;
    NSNumber *_runtime;
    NSNumber *_seasonCount;
    NSString *_seasonsLabel;
    NSArray *_callToActions;
    NSArray *_availableCallToActions;
    NSString *_availableSupplementalMessage;
    NSNumber *_availabilityStartDate;
    BillboardCellStyles *_portraitStyles;
    BillboardCellStyles *_landscapeStyles;
    BillboardCellStyles *_licensedPortraitStyles;
    BillboardCellStyles *_licensedLandscapeStyles;
    double _backgoundAlpha;
    double _backgroundAssetTopCropPercentage;
    double _minSecsElapsedBeforeStatic;
    double _playbackTimeoutInSeconds;
    NSNumber *_videoMotionId;
    long long _loopCount;
    NSArray *_actions;
    NSTimer *_ctaTimer;
}

+ (id)falcorKeyPathMap;
@property(retain, nonatomic) NSTimer *ctaTimer; // @synthesize ctaTimer=_ctaTimer;
@property(readonly, copy, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) _Bool isVolumeOnByDefault; // @synthesize isVolumeOnByDefault=_isVolumeOnByDefault;
@property(readonly, nonatomic) long long loopCount; // @synthesize loopCount=_loopCount;
@property(readonly, copy, nonatomic) NSNumber *videoMotionId; // @synthesize videoMotionId=_videoMotionId;
@property(readonly, nonatomic) double playbackTimeoutInSeconds; // @synthesize playbackTimeoutInSeconds=_playbackTimeoutInSeconds;
@property(readonly, nonatomic) double minSecsElapsedBeforeStatic; // @synthesize minSecsElapsedBeforeStatic=_minSecsElapsedBeforeStatic;
@property(nonatomic) double backgroundAssetTopCropPercentage; // @synthesize backgroundAssetTopCropPercentage=_backgroundAssetTopCropPercentage;
@property(nonatomic) double backgoundAlpha; // @synthesize backgoundAlpha=_backgoundAlpha;
@property(retain, nonatomic) BillboardCellStyles *licensedLandscapeStyles; // @synthesize licensedLandscapeStyles=_licensedLandscapeStyles;
@property(retain, nonatomic) BillboardCellStyles *licensedPortraitStyles; // @synthesize licensedPortraitStyles=_licensedPortraitStyles;
@property(retain, nonatomic) BillboardCellStyles *landscapeStyles; // @synthesize landscapeStyles=_landscapeStyles;
@property(retain, nonatomic) BillboardCellStyles *portraitStyles; // @synthesize portraitStyles=_portraitStyles;
@property(readonly, copy, nonatomic) NSNumber *availabilityStartDate; // @synthesize availabilityStartDate=_availabilityStartDate;
@property(readonly, copy, nonatomic) NSString *availableSupplementalMessage; // @synthesize availableSupplementalMessage=_availableSupplementalMessage;
@property(readonly, copy, nonatomic) NSArray *availableCallToActions; // @synthesize availableCallToActions=_availableCallToActions;
@property(copy, nonatomic) NSArray *callToActions; // @synthesize callToActions=_callToActions;
@property(readonly, copy, nonatomic) NSString *seasonsLabel; // @synthesize seasonsLabel=_seasonsLabel;
@property(readonly, copy, nonatomic) NSNumber *seasonCount; // @synthesize seasonCount=_seasonCount;
@property(readonly, copy, nonatomic) NSNumber *runtime; // @synthesize runtime=_runtime;
@property(readonly, copy, nonatomic) NSString *maturityRating; // @synthesize maturityRating=_maturityRating;
@property(readonly, copy, nonatomic) NSNumber *releaseYear; // @synthesize releaseYear=_releaseYear;
@property(readonly, nonatomic) _Bool isNewForPVR; // @synthesize isNewForPVR=_isNewForPVR;
@property(readonly, copy, nonatomic) NSNumber *matchPercentage; // @synthesize matchPercentage=_matchPercentage;
@property(readonly, copy, nonatomic) NSNumber *thumbRating; // @synthesize thumbRating=_thumbRating;
@property(readonly, copy, nonatomic) NSString *storyArtUrl; // @synthesize storyArtUrl=_storyArtUrl;
@property(readonly, copy, nonatomic) NSString *impressionToken; // @synthesize impressionToken=_impressionToken;
@property(readonly, copy, nonatomic) NSDictionary *billboard; // @synthesize billboard=_billboard;
@property(nonatomic) _Bool orcBillboardData; // @synthesize orcBillboardData=_orcBillboardData;
@property(readonly, copy, nonatomic) NSArray *badges; // @synthesize badges=_badges;
@property(readonly, copy, nonatomic) NSNumber *isAvailableForED; // @synthesize isAvailableForED=_isAvailableForED;
@property(nonatomic) _Bool canAutoPlay; // @synthesize canAutoPlay=_canAutoPlay;
@property(readonly, nonatomic) NSNumber *autoPlay; // @synthesize autoPlay=_autoPlay;
@property(readonly, nonatomic) NSNumber *isOriginal; // @synthesize isOriginal=_isOriginal;
@property(nonatomic) _Bool hasAwards; // @synthesize hasAwards=_hasAwards;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long billboardType; // @synthesize billboardType=_billboardType;
@property(nonatomic) double awardAspectRatio; // @synthesize awardAspectRatio=_awardAspectRatio;
@property(readonly, copy, nonatomic) NSNumber *awardsWidth; // @synthesize awardsWidth=_awardsWidth;
@property(readonly, copy, nonatomic) NSNumber *awardsHeight; // @synthesize awardsHeight=_awardsHeight;
@property(readonly, copy, nonatomic) NSString *awardsHeadlineUrl; // @synthesize awardsHeadlineUrl=_awardsHeadlineUrl;
@property(nonatomic) double dateBadgeAspectRatio; // @synthesize dateBadgeAspectRatio=_dateBadgeAspectRatio;
@property(readonly, copy, nonatomic) NSNumber *dateBadgeWidth; // @synthesize dateBadgeWidth=_dateBadgeWidth;
@property(readonly, copy, nonatomic) NSNumber *dateBadgeHeight; // @synthesize dateBadgeHeight=_dateBadgeHeight;
@property(readonly, copy, nonatomic) NSString *dateBadgeUrl; // @synthesize dateBadgeUrl=_dateBadgeUrl;
@property(nonatomic) double backgroundAspectRatio; // @synthesize backgroundAspectRatio=_backgroundAspectRatio;
@property(nonatomic) double logoAspectRatio; // @synthesize logoAspectRatio=_logoAspectRatio;
@property(readonly, copy, nonatomic) NSNumber *logoWidth; // @synthesize logoWidth=_logoWidth;
@property(readonly, copy, nonatomic) NSNumber *logoHeight; // @synthesize logoHeight=_logoHeight;
@property(readonly, copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(readonly, copy, nonatomic) NSString *hashtag; // @synthesize hashtag=_hashtag;
@property(readonly, copy, nonatomic) NSString *backgroundTone; // @synthesize backgroundTone=_backgroundTone;
@property(readonly, copy, nonatomic) NSString *backgroundArtWorkType; // @synthesize backgroundArtWorkType=_backgroundArtWorkType;
@property(readonly, copy, nonatomic) NSNumber *backgroundHeight; // @synthesize backgroundHeight=_backgroundHeight;
@property(readonly, copy, nonatomic) NSNumber *backgroundWidth; // @synthesize backgroundWidth=_backgroundWidth;
@property(readonly, copy, nonatomic) NSString *backgroundUrl; // @synthesize backgroundUrl=_backgroundUrl;
@property(readonly, copy, nonatomic) NSString *queueAction; // @synthesize queueAction=_queueAction;
@property(readonly, copy, nonatomic) NSString *currentEntityType; // @synthesize currentEntityType=_currentEntityType;
@property(readonly, copy, nonatomic) NSNumber *currentEntityId; // @synthesize currentEntityId=_currentEntityId;
@property(copy, nonatomic) NSString *summarySynopsis; // @synthesize summarySynopsis=_summarySynopsis;
@property(copy, nonatomic) NSString *synopsis; // @synthesize synopsis=_synopsis;
@property(copy, nonatomic) NSString *supplementalMessage; // @synthesize supplementalMessage=_supplementalMessage;
- (void).cxx_destruct;
- (double)getPlaybackTimeoutInSeconds;
- (double)getMinSecsElapsedBeforeStatic;
- (id)renew;
- (void)cleanup;
- (void)prepareAvailableEntity;
- (void)countedTimerFireMethod:(id)arg1;
- (void)setupVolatileCTALogic;
- (_Bool)canBePrePromo;
- (id)oppositeBackgroundColor;
- (void)prepareBillboardStyles;
- (id)playButtonData;
- (id)moreInfoButtonData;
- (id)myListButtonData;
- (id)fallbackSecondButton;
- (id)fallbackCallToActions;
- (void)configureEntity;
- (void)setValuesForKeysWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) NSNumber *availabilityEndDate;
@property(retain, nonatomic) NFUIContentAdvisoryEntity *contentAdvisoryEntity;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityType;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSNumber *overrideActionEntityId; // @dynamic overrideActionEntityId;
@property(copy, nonatomic) NSString *overrideActionEntityType; // @dynamic overrideActionEntityType;
@property(readonly, copy, nonatomic) NSArray *seasonNumbers;
@property(readonly) Class superclass;

@end

