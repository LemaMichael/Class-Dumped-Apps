//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDSNativeAdProtocol-Protocol.h"

@class BDSAdChoicesView, BDSNativeAdImage, NSDictionary, NSNumber, NSString, UIImage;
@protocol BDSAdBidProtocol, BDSAdVideoController;

@interface BDSNativeAd : NSObject <BDSNativeAdProtocol>
{
    float _bds_starRating;
    id _adEntity;
    NSString *_bds_placement;
    NSString *_bds_placementPrefix;
    NSString *_bds_placementSeed;
    NSNumber *_bds_provider;
    NSString *_bds_source;
    double _bds_createTime;
    double _bds_validInterval;
    id <BDSAdBidProtocol> _bds_adBid;
    NSString *_bds_title;
    NSString *_bds_body;
    NSString *_bds_callToAction;
    BDSNativeAdImage *_bds_icon;
    NSString *_bds_advertiser;
    UIImage *_bds_preferrdImage;
    unsigned long long _bds_adType;
    unsigned long long _bds_adFormatType;
    CDUnknownBlockType _bds_stateObserver;
    NSDictionary *_bds_userInfo;
    id <BDSAdVideoController> _videoController;
    BDSAdChoicesView *_choicesView;
    NSString *_imageURLString;
    NSString *_commandURLString;
}

@property(copy, nonatomic) NSString *commandURLString; // @synthesize commandURLString=_commandURLString;
@property(copy, nonatomic) NSString *imageURLString; // @synthesize imageURLString=_imageURLString;
@property(retain, nonatomic) BDSAdChoicesView *choicesView; // @synthesize choicesView=_choicesView;
@property(retain, nonatomic) id <BDSAdVideoController> videoController; // @synthesize videoController=_videoController;
@property(retain, nonatomic) NSDictionary *bds_userInfo; // @synthesize bds_userInfo=_bds_userInfo;
@property(copy, nonatomic) CDUnknownBlockType bds_stateObserver; // @synthesize bds_stateObserver=_bds_stateObserver;
@property(nonatomic) unsigned long long bds_adFormatType; // @synthesize bds_adFormatType=_bds_adFormatType;
@property(nonatomic) unsigned long long bds_adType; // @synthesize bds_adType=_bds_adType;
@property(nonatomic) float bds_starRating; // @synthesize bds_starRating=_bds_starRating;
@property(retain, nonatomic) UIImage *bds_preferrdImage; // @synthesize bds_preferrdImage=_bds_preferrdImage;
@property(copy, nonatomic) NSString *bds_advertiser; // @synthesize bds_advertiser=_bds_advertiser;
@property(retain, nonatomic) BDSNativeAdImage *bds_icon; // @synthesize bds_icon=_bds_icon;
@property(copy, nonatomic) NSString *bds_callToAction; // @synthesize bds_callToAction=_bds_callToAction;
@property(copy, nonatomic) NSString *bds_body; // @synthesize bds_body=_bds_body;
@property(copy, nonatomic) NSString *bds_title; // @synthesize bds_title=_bds_title;
@property(retain, nonatomic) id <BDSAdBidProtocol> bds_adBid; // @synthesize bds_adBid=_bds_adBid;
@property(nonatomic) double bds_validInterval; // @synthesize bds_validInterval=_bds_validInterval;
@property(nonatomic) double bds_createTime; // @synthesize bds_createTime=_bds_createTime;
@property(copy, nonatomic) NSString *bds_source; // @synthesize bds_source=_bds_source;
@property(retain, nonatomic) NSNumber *bds_provider; // @synthesize bds_provider=_bds_provider;
@property(copy, nonatomic) NSString *bds_placementSeed; // @synthesize bds_placementSeed=_bds_placementSeed;
@property(copy, nonatomic) NSString *bds_placementPrefix; // @synthesize bds_placementPrefix=_bds_placementPrefix;
@property(copy, nonatomic) NSString *bds_placement; // @synthesize bds_placement=_bds_placement;
@property(retain, nonatomic) id adEntity; // @synthesize adEntity=_adEntity;
- (void).cxx_destruct;
- (struct CGSize)bds_preferredAdChoiceSize;
@property(readonly, copy) NSString *description;
- (void)bds_unregeisterView;
- (void)bds_registerViewForInteraction:(id)arg1 ctaView:(id)arg2 withViewController:(id)arg3 clickableViews:(id)arg4;
- (void)bds_setupVideoController:(unsigned long long)arg1;
- (void)bds_bindMediaView:(id)arg1;
- (double)bds_mediaViewAspectRatio;
- (void)notifyLoss;
- (void)notifyWin;
- (id)bds_uploadMaterial;
- (id)bds_eventDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

