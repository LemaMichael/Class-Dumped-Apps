//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "HTSLiveRoomRemoteActions-Protocol.h"

@class LiveRoomModel, NSString, NSTimer, RACDisposable, UILabel, UIView;
@protocol HTSLiveStreamPlayerProvider, HTSLiveViewHierarchyProvider, IESActionDispatcher, IESLiveAppInfo;

@interface HTSLivePrivateViewFragment : NSObject <HTSLiveRoomRemoteActions, HTSLiveComponent>
{
    LiveRoomModel *_room;
    id <IESActionDispatcher> _dispatcher;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <HTSLiveStreamPlayerProvider> _playerProvider;
    id <IESLiveAppInfo> _appInfo;
    RACDisposable *_disposable;
    UILabel *_privateView;
    UILabel *_clickView;
    UIView *_containerView;
    NSTimer *_debugInfoUpdateTimer;
}

+ (long long)preferredLoadPhase;
+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(retain, nonatomic) NSTimer *debugInfoUpdateTimer; // @synthesize debugInfoUpdateTimer=_debugInfoUpdateTimer;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UILabel *clickView; // @synthesize clickView=_clickView;
@property(nonatomic) __weak UILabel *privateView; // @synthesize privateView=_privateView;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <IESLiveAppInfo> appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) id <HTSLiveStreamPlayerProvider> playerProvider; // @synthesize playerProvider=_playerProvider;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (void)updateDebugInfo;
- (void)tapClickView:(id)arg1;
- (void)didEnterLiveRoom:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
