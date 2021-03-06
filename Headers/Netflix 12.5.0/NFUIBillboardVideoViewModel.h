//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NFUIBillboardPreviewsEntity, NSNumber, NSString, PlaybackRequest, PlaybackSourceModel, UIImage;

@interface NFUIBillboardVideoViewModel : NSObject
{
    NFUIBillboardPreviewsEntity *_entity;
    PlaybackSourceModel *_playbackSourceModel;
    UIImage *_loadingImage;
    NSNumber *_videoIdOverride;
    long long _billboardCollectionType;
    long long _billboardVideoStyle;
    PlaybackRequest *_supplementalPlaybackRequest;
    PlaybackRequest *_titlePlaybackRequest;
}

@property(retain, nonatomic) PlaybackRequest *titlePlaybackRequest; // @synthesize titlePlaybackRequest=_titlePlaybackRequest;
@property(retain, nonatomic) PlaybackRequest *supplementalPlaybackRequest; // @synthesize supplementalPlaybackRequest=_supplementalPlaybackRequest;
@property(nonatomic) long long billboardVideoStyle; // @synthesize billboardVideoStyle=_billboardVideoStyle;
@property(nonatomic) long long billboardCollectionType; // @synthesize billboardCollectionType=_billboardCollectionType;
@property(copy, nonatomic) NSNumber *videoIdOverride; // @synthesize videoIdOverride=_videoIdOverride;
@property(retain, nonatomic) UIImage *loadingImage; // @synthesize loadingImage=_loadingImage;
@property(copy, nonatomic) PlaybackSourceModel *playbackSourceModel; // @synthesize playbackSourceModel=_playbackSourceModel;
@property(retain, nonatomic) NFUIBillboardPreviewsEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (void)setupBillboardCollectionType;
- (void)setupBillboardVideoStyle;
@property(nonatomic) _Bool isWatched;
@property(readonly, copy, nonatomic) NSNumber *videoId;
@property(readonly, copy, nonatomic) NSNumber *titleVideoId;
@property(readonly, copy, nonatomic) NSString *title;
- (id)initWithVideoId:(id)arg1;
- (id)initWithEntity:(id)arg1;

@end

