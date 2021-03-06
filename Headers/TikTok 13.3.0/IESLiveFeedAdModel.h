//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveADAuthor, IESLiveFeedAdVideo, NSArray, NSNumber, NSString;

@interface IESLiveFeedAdModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_adId;
    NSString *_type;
    NSString *_openUrl;
    NSString *_webUrl;
    NSString *_webTitle;
    NSString *_buttonText;
    NSString *_downloadUrl;
    NSArray *_imageList;
    IESLiveFeedAdVideo *_videoInfo;
    NSString *_title;
    NSString *_adLabel;
    NSString *_requestId;
    NSString *_logExtra;
    NSString *_appleId;
    NSArray *_trackUrlList;
    NSArray *_clickTrackUrlList;
    NSArray *_playTrackUrlList;
    NSArray *_playOverTrackUrlList;
    NSArray *_effectivePlayTrackUrlList;
    NSNumber *_effectivePlayTime;
    NSNumber *_allowComment;
    NSNumber *_allowDislike;
    NSNumber *_allowShare;
    NSNumber *_showButtonTime;
    NSString *_calculatedColor;
    NSNumber *_showMaskTimes;
    NSNumber *_isCompoundLandPage;
    NSNumber *_diggCount;
    NSArray *_filterWords;
    IESLiveADAuthor *_author;
}

+ (id)authorJSONTransformer;
+ (id)videoInfoJSONTransformer;
+ (id)filterWordsJSONTransformer;
+ (id)imageListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) IESLiveADAuthor *author; // @synthesize author=_author;
@property(copy, nonatomic) NSArray *filterWords; // @synthesize filterWords=_filterWords;
@property(retain, nonatomic) NSNumber *diggCount; // @synthesize diggCount=_diggCount;
@property(retain, nonatomic) NSNumber *isCompoundLandPage; // @synthesize isCompoundLandPage=_isCompoundLandPage;
@property(retain, nonatomic) NSNumber *showMaskTimes; // @synthesize showMaskTimes=_showMaskTimes;
@property(copy, nonatomic) NSString *calculatedColor; // @synthesize calculatedColor=_calculatedColor;
@property(retain, nonatomic) NSNumber *showButtonTime; // @synthesize showButtonTime=_showButtonTime;
@property(retain, nonatomic) NSNumber *allowShare; // @synthesize allowShare=_allowShare;
@property(retain, nonatomic) NSNumber *allowDislike; // @synthesize allowDislike=_allowDislike;
@property(retain, nonatomic) NSNumber *allowComment; // @synthesize allowComment=_allowComment;
@property(retain, nonatomic) NSNumber *effectivePlayTime; // @synthesize effectivePlayTime=_effectivePlayTime;
@property(copy, nonatomic) NSArray *effectivePlayTrackUrlList; // @synthesize effectivePlayTrackUrlList=_effectivePlayTrackUrlList;
@property(copy, nonatomic) NSArray *playOverTrackUrlList; // @synthesize playOverTrackUrlList=_playOverTrackUrlList;
@property(copy, nonatomic) NSArray *playTrackUrlList; // @synthesize playTrackUrlList=_playTrackUrlList;
@property(copy, nonatomic) NSArray *clickTrackUrlList; // @synthesize clickTrackUrlList=_clickTrackUrlList;
@property(copy, nonatomic) NSArray *trackUrlList; // @synthesize trackUrlList=_trackUrlList;
@property(retain, nonatomic) NSString *appleId; // @synthesize appleId=_appleId;
@property(copy, nonatomic) NSString *logExtra; // @synthesize logExtra=_logExtra;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *adLabel; // @synthesize adLabel=_adLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) IESLiveFeedAdVideo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(copy, nonatomic) NSArray *imageList; // @synthesize imageList=_imageList;
@property(copy, nonatomic) NSString *downloadUrl; // @synthesize downloadUrl=_downloadUrl;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *webTitle; // @synthesize webTitle=_webTitle;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(copy, nonatomic) NSString *openUrl; // @synthesize openUrl=_openUrl;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *adId; // @synthesize adId=_adId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

