//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAMediaPlayerBase;

@protocol WAMediaPlayerDelegate <NSObject>
- (void)mediaPlayerDidEndScrubbing:(WAMediaPlayerBase *)arg1;
- (void)mediaPlayerDidBeginScrubbing:(WAMediaPlayerBase *)arg1;
- (void)mediaPlayerDidRequestPlaybackStart:(WAMediaPlayerBase *)arg1;
- (void)mediaPlayerDidPlayToEndTime:(WAMediaPlayerBase *)arg1;
- (void)mediaPlayerDidFinishLoading:(WAMediaPlayerBase *)arg1;
- (void)mediaPlayerDidChangeCurrentTime:(WAMediaPlayerBase *)arg1;
- (void)mediaPlayerStatusDidChange:(WAMediaPlayerBase *)arg1;
@end
