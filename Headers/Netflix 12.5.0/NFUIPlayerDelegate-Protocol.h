//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NFUIPlaybackRequest, NFUIPlayerView, NSArray, NSError;
@protocol NFUIPlayer, NfPlaybackAudioOption, NfPlaybackSubtitleOption;

@protocol NFUIPlayerDelegate <NSObject>

@optional
- (void)player:(id <NFUIPlayer>)arg1 willRemovePlayerView:(NFUIPlayerView *)arg2;
- (void)player:(id <NFUIPlayer>)arg1 videoWillAppear:(_Bool)arg2;
- (void)player:(id <NFUIPlayer>)arg1 videoDidAppear:(_Bool)arg2;
- (void)player:(id <NFUIPlayer>)arg1 videoReadyForDisplay:(_Bool)arg2;
- (void)player:(id <NFUIPlayer>)arg1 externalPlaybackActive:(_Bool)arg2;
- (void)player:(id <NFUIPlayer>)arg1 subtitleOptionChanged:(id <NfPlaybackSubtitleOption>)arg2 forAvailableSubtitleOptions:(NSArray *)arg3;
- (void)player:(id <NFUIPlayer>)arg1 audioOptionChanged:(id <NfPlaybackAudioOption>)arg2;
- (void)playerWillStop:(id <NFUIPlayer>)arg1;
- (void)playerWillPause:(id <NFUIPlayer>)arg1;
- (void)playerWillPlay:(id <NFUIPlayer>)arg1;
- (void)player:(id <NFUIPlayer>)arg1 stateChange:(unsigned long long)arg2 previous:(unsigned long long)arg3;
- (void)player:(id <NFUIPlayer>)arg1 error:(NSError *)arg2;
- (void)player:(id <NFUIPlayer>)arg1 timeUpdate:(double)arg2;
- (void)playerReady:(id <NFUIPlayer>)arg1;
- (void)player:(id <NFUIPlayer>)arg1 willLoadRequest:(NFUIPlaybackRequest *)arg2;
@end

