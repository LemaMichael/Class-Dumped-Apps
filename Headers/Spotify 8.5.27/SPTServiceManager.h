//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTServiceProvider-Protocol.h"

@class NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, SPTServiceInstanceInteractor, SPTServiceManagerDelegate;

@interface SPTServiceManager : NSObject <SPTServiceProvider>
{
    SPTServiceManager *_parent;
    id <SPTServiceManagerDelegate> _delegate;
    NSArray *_enabledServices;
    long long _state;
    NSString *_scope;
    NSMutableDictionary *_services;
    NSArray *_serviceLoadOrder;
    NSString *_currentlyConfiguringService;
    id <SPTServiceInstanceInteractor> _instanceInteractor;
    NSObject<OS_dispatch_queue> *_lifecycleHooksQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *lifecycleHooksQueue; // @synthesize lifecycleHooksQueue=_lifecycleHooksQueue;
@property(readonly, copy, nonatomic) id <SPTServiceInstanceInteractor> instanceInteractor; // @synthesize instanceInteractor=_instanceInteractor;
@property(retain, nonatomic) NSString *currentlyConfiguringService; // @synthesize currentlyConfiguringService=_currentlyConfiguringService;
@property(retain, nonatomic) NSArray *serviceLoadOrder; // @synthesize serviceLoadOrder=_serviceLoadOrder;
@property(readonly, nonatomic) NSMutableDictionary *services; // @synthesize services=_services;
@property(readonly, copy, nonatomic) NSString *scope; // @synthesize scope=_scope;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSArray *enabledServices; // @synthesize enabledServices=_enabledServices;
@property(nonatomic) __weak id <SPTServiceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SPTServiceManager *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (_Bool)canProvideServiceWithIdentifier:(id)arg1;
- (id)provideOptionalServiceForIdentifier:(id)arg1;
- (id)provideServiceForIdentifier:(id)arg1;
- (void)notifyAllServicesThatIdleStateWasReached;
- (void)notifyAllServicesThatInitialViewDidAppear;
- (void)unloadServices;
- (void)loadServices;
- (id)serviceWithIdentifier:(id)arg1;
- (void)tellServicesToUnload;
- (void)tellServicesToLoad:(id)arg1;
- (id)configureAllServices;
- (void)addServiceFromClass:(Class)arg1;
- (void)instantiateAllServices;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithScope:(id)arg1 enabledServices:(id)arg2 instanceInteractor:(id)arg3 lifecycleHooksQueue:(id)arg4 parent:(id)arg5;
- (id)graphVizForDependencyGraph:(id)arg1 loadOrder:(id)arg2;
- (void)dumpGraphVizToFile:(id)arg1 forDependencyGraph:(id)arg2 loadOrder:(id)arg3;
- (void)maybeDumpDependencyGraphAndExit:(id)arg1 loadOrder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
