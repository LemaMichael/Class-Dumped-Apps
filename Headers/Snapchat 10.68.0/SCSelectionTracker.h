//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet, SCPublishSubject;
@protocol OS_dispatch_queue;

@interface SCSelectionTracker : NSObject
{
    NSMutableOrderedSet *_selectionItemOrderedSet;
    NSMutableDictionary *_selectionItemToParticipantMap;
    NSMutableOrderedSet *_selectedParticipantsOrderedSet;
    NSMutableDictionary *_selectionParticipantToItemMap;
    SCPublishSubject *_itemToStateMapPublishSubject;
    SCPublishSubject *_selectionParticipantUpdateSubject;
    NSObject<OS_dispatch_queue> *_lock;
}

- (void).cxx_destruct;
- (void)_nextSelectionParticipantUpdates:(id)arg1;
- (id)selectionParticipantsUpdateObservable;
- (id)orderedSelectedParticipants;
- (id)deltaSelectionStateObservable;
- (id)orderedSelectedItems;
- (struct NSDictionary *)selectionStatesForIdentifiers:(id)arg1;
- (void)setSelectionParticipant:(id)arg1 isSelected:(_Bool)arg2;
- (void)setSelectionItems:(id)arg1 isSelected:(_Bool)arg2;
- (void)setSelectionItem:(id)arg1 isSelected:(_Bool)arg2;
- (id)init;

@end

