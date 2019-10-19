//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOverlayFilterView.h"

#import "SCGeoFilterView-Protocol.h"
#import "SCGeoFilterViewProviding-Protocol.h"
#import "SCPreviewGestureResponder-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, NSTimer, SCGeoFilterImageView, SCGeoFilterLoadingMetaData, SCGeofilterToastView, SCSingleLensCommandUcoStateProvider, SCSponsoredSlugInteractiveView, SOJUUnlockableTrackInfo, UIImageView, UILabel, UIView;
@protocol SCGeoFilterViewDelegate, SCUcoInfoView;

@interface SCGeoFilterView : SCOverlayFilterView <SCTraceEnabled, SCGeoFilterView, SCGeoFilterViewProviding, SCPreviewGestureResponder>
{
    UIView *_updateView;
    UILabel *_updateLabel;
    UIImageView *_updateIcon;
    _Bool _belowDrawingLayer;
    NSTimer *_sponsoredSlugFadeoutTimer;
    NSTimer *_filterToastFadeoutTimer;
    SCGeofilterToastView *_filterToastView;
    NSMutableDictionary *_stickerViews;
    NSMutableArray *_resourceIds;
    UIView *_stickersMainView;
    UIView<SCUcoInfoView> *_ucoInfoView;
    SCSingleLensCommandUcoStateProvider *_singleLensCommandUcoStateProvider;
    _Bool _isActionmoji;
    _Bool _isBitmoji;
    _Bool _isFrameFilter;
    _Bool _isFriendFilter;
    _Bool _isSponsored;
    id <SCGeoFilterViewDelegate> _delegate;
    NSString *_dynamicFilterRefreshHint;
    NSString *_dynamicFilterUpdatingMessage;
    long long _eligibility;
    NSString *_encryptedGeoData;
    NSDictionary *_filterPrompt;
    SCGeoFilterLoadingMetaData *_geoFilterLoadingMetaData;
    long long _unlockableContentType;
    NSData *_overlayPngData;
    long long _updateAttemptCount;
    SOJUUnlockableTrackInfo *_unlockableTrackInfo;
    NSString *_filterId;
    SCGeoFilterImageView *_geoFilterImageView;
    SCGeoFilterImageView *_dynamicResourceImageView;
    SCSponsoredSlugInteractiveView *_slugView;
}

@property(nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(retain, nonatomic) SCSponsoredSlugInteractiveView *slugView; // @synthesize slugView=_slugView;
@property(retain, nonatomic) SCGeoFilterImageView *dynamicResourceImageView; // @synthesize dynamicResourceImageView=_dynamicResourceImageView;
@property(retain, nonatomic) SCGeoFilterImageView *geoFilterImageView; // @synthesize geoFilterImageView=_geoFilterImageView;
@property(copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(readonly, nonatomic) SOJUUnlockableTrackInfo *unlockableTrackInfo; // @synthesize unlockableTrackInfo=_unlockableTrackInfo;
@property(readonly, nonatomic) long long updateAttemptCount; // @synthesize updateAttemptCount=_updateAttemptCount;
@property(readonly, nonatomic) _Bool isFriendFilter; // @synthesize isFriendFilter=_isFriendFilter;
@property(readonly, copy, nonatomic) NSData *overlayPngData; // @synthesize overlayPngData=_overlayPngData;
@property(readonly, nonatomic) long long unlockableContentType; // @synthesize unlockableContentType=_unlockableContentType;
@property(readonly, nonatomic) _Bool isFrameFilter; // @synthesize isFrameFilter=_isFrameFilter;
@property(readonly, nonatomic) _Bool isBitmoji; // @synthesize isBitmoji=_isBitmoji;
@property(readonly, nonatomic) _Bool isActionmoji; // @synthesize isActionmoji=_isActionmoji;
@property(readonly, nonatomic) SCGeoFilterLoadingMetaData *geoFilterLoadingMetaData; // @synthesize geoFilterLoadingMetaData=_geoFilterLoadingMetaData;
@property(readonly, copy, nonatomic) NSDictionary *filterPrompt; // @synthesize filterPrompt=_filterPrompt;
@property(readonly, copy, nonatomic) NSString *encryptedGeoData; // @synthesize encryptedGeoData=_encryptedGeoData;
@property(readonly, nonatomic) long long eligibility; // @synthesize eligibility=_eligibility;
@property(readonly, copy, nonatomic) NSString *dynamicFilterUpdatingMessage; // @synthesize dynamicFilterUpdatingMessage=_dynamicFilterUpdatingMessage;
@property(readonly, copy, nonatomic) NSString *dynamicFilterRefreshHint; // @synthesize dynamicFilterRefreshHint=_dynamicFilterRefreshHint;
@property(nonatomic) __weak id <SCGeoFilterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resumeAnimatedFilterIfNecessary;
- (void)stopAnimatedFilterIfNecessary;
- (id)renderState;
- (void)_fadeoutFilterToast:(id)arg1;
- (void)didProcessTapInPreviewContainerView:(id)arg1;
- (_Bool)shouldRespondToTap:(id)arg1;
- (void)tap:(id)arg1;
- (_Bool)_isRecognizer:(id)arg1 locatedInView:(id)arg2;
- (void)resetUpdateAttemptCount;
- (_Bool)shouldAddToAlternativeSuperview;
- (void)_fadeinSponsoredSlug;
- (void)_fadeoutSponsoredSlug:(id)arg1;
- (void)setDisplayed:(_Bool)arg1;
- (void)_scheduleSponsoredSlugFadeout;
- (void)_activateFilterToast;
- (void)drawScreenshotImageInCurrentContextWithRect:(struct CGRect)arg1;
- (void)setupUpdatingLabel:(id)arg1;
- (void)startViewing;
- (void)updateConfig:(id)arg1;
- (id)videoTrackedImages;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 userSession:(id)arg3;
- (id)stickerForTouchGesture:(id)arg1;
- (id)createStickersViewForGeoFilter:(id)arg1;
- (_Bool)shouldRespondToTouchControl:(id)arg1;
- (void)pinch:(id)arg1;
- (void)rotation:(id)arg1;
- (void)pan:(id)arg1;
- (id)displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
