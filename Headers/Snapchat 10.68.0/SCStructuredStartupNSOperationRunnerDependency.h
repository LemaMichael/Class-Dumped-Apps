//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCStartupCommandDependencyProtocol-Protocol.h"

@class NSOperationQueue, NSString, SCStructuredStartupNSOperationRunner;

@interface SCStructuredStartupNSOperationRunnerDependency : NSObject <SCStartupCommandDependencyProtocol>
{
    NSOperationQueue *_highPriorityOperationQueue;
    SCStructuredStartupNSOperationRunner *_runner;
}

@property(readonly, nonatomic) SCStructuredStartupNSOperationRunner *runner; // @synthesize runner=_runner;
- (void).cxx_destruct;
- (void)upgradeCommandPriority:(id)arg1 priority:(unsigned long long)arg2;
- (id)dependencySetForCommand:(id)arg1;
- (void)markCommandHasNoDependency:(id)arg1;
- (void)markCommand:(id)arg1 dependUpon:(id)arg2;
- (id)initWithCommandRunner:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

