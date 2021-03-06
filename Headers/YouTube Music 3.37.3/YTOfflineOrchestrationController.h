//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIMMe, GPCPromise, NSMutableArray, NSMutableDictionary, NSMutableSet, YTOfflineOrchestrationAction;

@interface YTOfflineOrchestrationController : NSObject
{
    NSMutableDictionary *_entityIDToEntityControllerMap;
    NSMutableDictionary *_actionIDToActionMap;
    NSMutableArray *_actionQueue;
    NSMutableSet *_actionsWaitingOnChildActions;
    YTOfflineOrchestrationAction *_executingAction;
    GPCPromise *_executingActionPromise;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)completeAction:(id)arg1;
- (void)executingActionDidFailWithError:(id)arg1;
- (void)executingActionDidFinishWithResult:(id)arg1;
- (void)maybeExecuteNextAction;
- (void)sortActionQueue;
- (void)requeueAction:(id)arg1;
- (void)enqueueActions:(id)arg1;
- (void)enqueueAction:(id)arg1;
- (void)registerController:(id)arg1;
- (id)init;

@end

