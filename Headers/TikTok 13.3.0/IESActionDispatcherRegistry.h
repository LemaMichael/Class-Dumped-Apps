//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESActionDispatcher-Protocol.h"

@class NSMutableDictionary, NSString;

@interface IESActionDispatcherRegistry : NSObject <IESActionDispatcher>
{
    NSMutableDictionary *_actionRegistry;
}

@property(retain, nonatomic) NSMutableDictionary *actionRegistry; // @synthesize actionRegistry=_actionRegistry;
- (void).cxx_destruct;
- (id)dispactherForAction:(id)arg1;
- (id)addSubscriber:(id)arg1 forActions:(id)arg2;
- (id)addSubscriber:(id)arg1 forAction:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

