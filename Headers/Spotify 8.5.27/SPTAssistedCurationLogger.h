//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol SPTLogCenter, SPTViewLogger;

@interface SPTAssistedCurationLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    id <SPTViewLogger> _viewLogger;
    NSURL *_playlistURI;
}

@property(readonly, nonatomic) NSURL *playlistURI; // @synthesize playlistURI=_playlistURI;
@property(readonly, nonatomic) id <SPTViewLogger> viewLogger; // @synthesize viewLogger=_viewLogger;
@property(readonly, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logUIInteractionWithSectionId:(id)arg1 itemIndex:(long long)arg2 targetURI:(id)arg3 interactionType:(id)arg4 userIntent:(id)arg5;
- (void)logUIInteractionWithSectionId:(id)arg1 userIntent:(id)arg2;
- (void)logUIImpressionWithSectionId:(id)arg1 index:(long long)arg2 renderType:(id)arg3;
- (void)logAudioPreviewTrackURI:(id)arg1 index:(long long)arg2 sectionId:(id)arg3;
- (void)logAddTrackFromAccessoryTrackURI:(id)arg1 index:(long long)arg2 sectionId:(id)arg3;
- (void)logTapTrackURI:(id)arg1 index:(long long)arg2 sectionId:(id)arg3;
- (void)logDidLoadCardProviderId:(id)arg1 index:(long long)arg2;
- (void)logBackButtonTapped;
- (void)logSearchTap;
- (void)logViewDidFailToLoadWithPageIdentifier:(id)arg1 dataSource:(long long)arg2;
- (void)logViewLoadingCancelledWithPageIdentifier:(id)arg1 dataSource:(long long)arg2;
- (void)logViewDidLoadWithPageIdentifier:(id)arg1 dataSource:(long long)arg2;
- (void)logViewLoadingStartedWithPageIdentifier:(id)arg1 reason:(long long)arg2;
- (id)initWithLogCenter:(id)arg1 viewLogger:(id)arg2 playlistURI:(id)arg3;

@end

