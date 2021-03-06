//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiveStream, NSString, StreamingConfig;

@interface _TtC6Reddit13StreamManager : NSObject
{
    // Error parsing type: , name: presentingSource
    // Error parsing type: , name: delegate
    // Error parsing type: , name: current
    // Error parsing type: , name: deeplinkPostId
    // Error parsing type: , name: stoppedByAppEnteringBackground
    // Error parsing type: , name: fetchingStreamStatus
    // Error parsing type: , name: history
    // Error parsing type: , name: unwatched
    // Error parsing type: , name: ended
    // Error parsing type: , name: lastFetched
    // Error parsing type: , name: updateStreamStatsTimer
    // Error parsing type: , name: removeZombiesTimer
    // Error parsing type: , name: sendHeartbeatTimer
    // Error parsing type: , name: fetchConfigTimer
    // Error parsing type: , name: service
    // Error parsing type: , name: streamingConfig
    // Error parsing type: , name: viewSessionId
}

+ (void)setUserHasSeenIntroVideo:(_Bool)arg1;
+ (_Bool)userHasSeenIntroVideo;
- (void).cxx_destruct;
- (id)init;
- (void)appDidEnterForeground;
- (void)appWillEnterBackground;
- (void)accountDidChange;
- (void)dealloc;
- (id)initWithService:(id)arg1 source:(long long)arg2 streamingConfig:(id)arg3 delegate:(id)arg4;
@property(nonatomic, retain) StreamingConfig *streamingConfig; // @synthesize streamingConfig;
@property(nonatomic, copy) NSString *deeplinkPostId; // @synthesize deeplinkPostId;
@property(nonatomic, readonly) LiveStream *topActive;
@property(nonatomic, readonly) LiveStream *topUnwatched;
@property(nonatomic, retain) LiveStream *current; // @synthesize current;

@end

