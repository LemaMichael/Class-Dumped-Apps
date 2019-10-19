//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTCallingController-Protocol.h"
#import "SCTV3HeadlessSession-Protocol.h"
#import "SCTV3SessionWrapperListener-Protocol.h"

@class NSString, SCTV3SessionWrapper;
@protocol SCTV3HeadlessCallServices;

@interface SCTV3HeadlessSession : NSObject <SCTV3SessionWrapperListener, SCTCallingController, SCTV3HeadlessSession>
{
    NSString *_convoId;
    id <SCTV3HeadlessCallServices> _headlessCallServices;
    SCTV3SessionWrapper *_sessionWrapper;
}

- (void).cxx_destruct;
- (_Bool)isFullscreen;
- (void)muteLocalUserMedia:(unsigned long long)arg1;
- (void)unmuteRemoteAudioIfNeeded;
- (void)dismissCall;
- (_Bool)startCall:(unsigned long long)arg1;
- (void)updatePublishedMedia:(unsigned long long)arg1;
- (void)sessionWrapper:(id)arg1 changedState:(id)arg2 reason:(long long)arg3;
- (id)getPublishersForNotification:(id)arg1;
- (long long)processRingingTimeout:(id)arg1;
- (unsigned long long)processNotification:(id)arg1 senderUsername:(id)arg2;
- (void)applyPayload:(id)arg1 senderUsername:(id)arg2;
- (void)dispose;
- (id)callingController;
- (void)dealloc;
- (id)initWithConvoId:(id)arg1 headlessCallServices:(id)arg2 sessionWrapper:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
