//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTImpressionEvent, SPTInteractionEvent;

@protocol SPTNowPlayingViewDefault_PlaybackProgress_PlaybackSliderEventFactory <NSObject>
- (id <SPTInteractionEvent>)dragSeekToTimeWithMsToSeekTo:(long long)arg1;
- (id <SPTInteractionEvent>)hitSeekToTimeWithMsToSeekTo:(long long)arg1;
- (id <SPTImpressionEvent>)impression;
@end

