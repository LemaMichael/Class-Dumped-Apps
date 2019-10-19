//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOMIDNodeProcessor-Protocol.h"

@class NSString;
@protocol GADOMIDNodeProcessor;

@interface GADOMIDViewProcessor : NSObject <GADOMIDNodeProcessor>
{
    id <GADOMIDNodeProcessor> _processorForChildren;
}

@property(nonatomic) __weak id <GADOMIDNodeProcessor> processorForChildren; // @synthesize processorForChildren=_processorForChildren;
- (void).cxx_destruct;
- (id)buildChildrenFromDictionary:(id)arg1;
- (void)addView:(id)arg1 toDictionary:(id)arg2;
- (id)windowForView:(id)arg1;
- (struct CGRect)frameInWindowSystemForView:(id)arg1;
- (id)orderedChildrenForView:(id)arg1;
- (id)childrenForView:(id)arg1;
- (id)stateForView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
