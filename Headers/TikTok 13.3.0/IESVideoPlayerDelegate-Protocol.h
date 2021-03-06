//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSString, NSURL;
@protocol IESVideoPlayerProtocol;

@protocol IESVideoPlayerDelegate <NSObject>

@optional
- (void)player:(id <IESVideoPlayerProtocol>)arg1 noVideoDataToDownloadForURL:(NSURL *)arg2;
- (void)player:(id <IESVideoPlayerProtocol>)arg1 didFinishVideoDataDownloadForURL:(NSURL *)arg2;
- (void)player:(id <IESVideoPlayerProtocol>)arg1 didChangeStallState:(long long)arg2;
- (void)playerDidReadyForDisplay:(id <IESVideoPlayerProtocol>)arg1;
- (void)player:(id <IESVideoPlayerProtocol>)arg1 playbackFailedForURL:(NSString *)arg2 error:(NSError *)arg3;
- (void)player:(id <IESVideoPlayerProtocol>)arg1 playbackFailedWithError:(NSError *)arg2;
- (void)playerWillLoopPlaying:(id <IESVideoPlayerProtocol>)arg1;
- (void)player:(id <IESVideoPlayerProtocol>)arg1 didChangePlaybackStateWithAction:(long long)arg2;
@end

