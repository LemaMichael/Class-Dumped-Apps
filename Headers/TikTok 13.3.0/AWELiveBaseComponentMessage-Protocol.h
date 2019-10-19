//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWELiveBaseMessage, AWELiveRoomModel;

@protocol AWELiveBaseComponentMessage <NSObject>

@optional
- (void)didExitRoom;
- (void)roomWillDisappear:(_Bool)arg1;
- (void)didFinishRoom:(long long)arg1;
- (void)orientationDidChange:(_Bool)arg1;
- (void)didReceiveMessage:(AWELiveBaseMessage *)arg1;
- (void)didEnterRoom:(AWELiveRoomModel *)arg1;
- (void)roomDidAppear:(_Bool)arg1;
- (void)roomWillAppear:(_Bool)arg1;
- (void)didPreloadRoom:(AWELiveRoomModel *)arg1;
@end
