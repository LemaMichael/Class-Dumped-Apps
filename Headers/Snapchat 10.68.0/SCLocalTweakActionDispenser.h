//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTweakStore, NSMutableDictionary;

@interface SCLocalTweakActionDispenser : NSObject
{
    FBTweakStore *_tweakStore;
    NSMutableDictionary *_tweakIdsToActions;
}

+ (id)shared;
- (void).cxx_destruct;
- (void)_tweakDidFireForIdentifier:(id)arg1;
- (void)_removeAction:(CDUnknownBlockType)arg1 category:(id)arg2 collection:(id)arg3 name:(id)arg4;
- (void)_addAction:(CDUnknownBlockType)arg1 category:(id)arg2 collection:(id)arg3 name:(id)arg4;
- (id)dispenseLocalTweakActionWithCategory:(id)arg1 collection:(id)arg2 name:(id)arg3 action:(CDUnknownBlockType)arg4;
- (id)initWithTweakStore:(id)arg1;

@end

