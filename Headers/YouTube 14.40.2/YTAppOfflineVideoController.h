//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTOfflineVideoControllerObserver.h"
#import "YTResponder.h"

@class GIMMe, NSHashTable, NSString, YTOfflineVideoController, YTTimedAction, YTUserDefaults;

@interface YTAppOfflineVideoController : NSObject <YTResponder, YTOfflineVideoControllerObserver>
{
    YTTimedAction *_delayedRemoveAction;
    int _pendingRemoveVideoOriginalStatus;
    NSHashTable *_observers;
    YTOfflineVideoController *_offlineVideoController;
    YTUserDefaults *_userDefaults;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    NSString *_pendingRemoveVideoID;
}

@property(readonly, nonatomic) NSString *pendingRemoveVideoID; // @synthesize pendingRemoveVideoID=_pendingRemoveVideoID;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)notifyDidCancelDeferredRemoveWithVideoID:(id)arg1 playlistID:(id)arg2;
- (void)notifyDidCancelDeferredRemoveWithVideoID:(id)arg1;
- (void)notifyDidScheduleDeferredRemoveWithVideoID:(id)arg1 playlistID:(id)arg2;
- (void)notifyDidScheduleDeferredRemoveWithVideoID:(id)arg1;
- (_Bool)didScheduleDeferredRemoveForOfflineVideo:(id)arg1 withUpsell:(id *)arg2;
- (void)removePendingRemoveVideo;
- (void)cancelDeferredRemoveForOfflineVideoWithVideoID:(id)arg1;
- (void)scheduleDeferredRemoveForOfflineVideoWithVideoID:(id)arg1 videoStatus:(int)arg2 timeInterval:(double)arg3;
- (void)didDeleteOfflineVideoWithID:(id)arg1 pinTypes:(int)arg2;
- (void)downloadDidCompleteWithVideoID:(id)arg1 pinTypes:(int)arg2;
- (void)removeAppOfflineVideoControllerObserver:(id)arg1;
- (void)addAppOfflineVideoControllerObserver:(id)arg1;
- (void)setPendingRemoveVideoID:(id)arg1;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
