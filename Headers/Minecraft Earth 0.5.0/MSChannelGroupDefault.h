//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSChannelDelegate.h"
#import "MSChannelGroupProtocol.h"

@class MSAppCenterIngestion, NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface MSChannelGroupDefault : NSObject <MSChannelDelegate, MSChannelGroupProtocol>
{
    NSHashTable *_delegates;
    MSAppCenterIngestion *_ingestion;
    id <MSStorage> _storage;
    NSObject<OS_dispatch_queue> *_logsDispatchQueue;
    NSMutableArray *_channels;
}

@property(retain, nonatomic) NSMutableArray *channels; // @synthesize channels=_channels;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logsDispatchQueue; // @synthesize logsDispatchQueue=_logsDispatchQueue;
@property(retain, nonatomic) id <MSStorage> storage; // @synthesize storage=_storage;
@property(retain, nonatomic) MSAppCenterIngestion *ingestion; // @synthesize ingestion=_ingestion;
@property(retain, nonatomic) NSHashTable *delegates; // @synthesize delegates=_delegates;
- (void).cxx_destruct;
- (void)setMaxStorageSize:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setAppSecret:(id)arg1;
- (void)setLogUrl:(id)arg1;
- (void)resumeWithIdentifyingObject:(id)arg1;
- (void)pauseWithIdentifyingObject:(id)arg1;
- (void)setEnabled:(_Bool)arg1 andDeleteDataOnDisabled:(_Bool)arg2;
- (void)channel:(id)arg1 didResumeWithIdentifyingObject:(id)arg2;
- (void)channel:(id)arg1 didPauseWithIdentifyingObject:(id)arg2;
- (_Bool)channelUnit:(id)arg1 shouldFilterLog:(id)arg2;
- (void)channel:(id)arg1 didFailSendingLog:(id)arg2 withError:(id)arg3;
- (void)channel:(id)arg1 didSetEnabled:(_Bool)arg2 andDeleteDataOnDisabled:(_Bool)arg3;
- (void)channel:(id)arg1 didSucceedSendingLog:(id)arg2;
- (void)channel:(id)arg1 willSendLog:(id)arg2;
- (void)channel:(id)arg1 didCompleteEnqueueingLog:(id)arg2 internalId:(id)arg3;
- (void)channel:(id)arg1 didPrepareLog:(id)arg2 internalId:(id)arg3 flags:(unsigned long long)arg4;
- (void)channel:(id)arg1 prepareLog:(id)arg2;
- (void)enumerateDelegatesForSelector:(SEL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (id)channelUnitForGroupId:(id)arg1;
- (id)addChannelUnitWithConfiguration:(id)arg1 withIngestion:(id)arg2;
- (id)addChannelUnitWithConfiguration:(id)arg1;
- (id)initWithIngestion:(id)arg1;
- (id)initWithInstallId:(id)arg1 logUrl:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
