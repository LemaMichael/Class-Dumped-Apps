//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCProcessingPipelineOrdering-Protocol.h"

@class NSString;

@interface SCProcessingPipelineCaptureCoreOrder : NSObject <SCProcessingPipelineOrdering>
{
}

+ (id)_commandsOrderingDictionary;
+ (id)_modulesOrderingDictionary;
- (_Bool)isModule:(id)arg1 equalTo:(id)arg2;
- (id)sortModules:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

