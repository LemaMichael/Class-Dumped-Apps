//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCACameraFrameDropDuringRecording : SCAUserTrackedEvent
{
}

- (void)setWithLenses:(_Bool)arg1;
- (void)setTotalFrameDelayMillis:(long long)arg1;
- (void)setReceivedFrameCount:(long long)arg1;
- (void)setMaxFrameDelayMillis:(long long)arg1;
- (void)setFrameDropCount:(long long)arg1;
- (void)setDurationMillis:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

