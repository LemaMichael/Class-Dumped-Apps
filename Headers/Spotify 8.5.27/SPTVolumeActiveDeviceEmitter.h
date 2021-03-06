//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectObserver-Protocol.h"
#import "SPTVolumeEventEmitter-Protocol.h"

@class NSString;
@protocol SPTGaiaConnectAPI, SPTVolumeEventReceiver;

@interface SPTVolumeActiveDeviceEmitter : NSObject <SPTGaiaConnectObserver, SPTVolumeEventEmitter>
{
    id <SPTVolumeEventReceiver> delegate;
    id <SPTGaiaConnectAPI> _connectManager;
}

@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(nonatomic) __weak id <SPTVolumeEventReceiver> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (unsigned long long)eventForActiveDevice:(id)arg1;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)emitInitialState;
- (void)dealloc;
- (void)setupObservation;
- (id)initWithConnectManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

