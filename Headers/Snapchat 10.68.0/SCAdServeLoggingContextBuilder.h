//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SCAdServeLoggingContextBuilder : NSObject
{
    NSString *_storySessionId;
    long long _viewSource;
    _Bool _isPrefetchEnabled;
    _Bool _prefetchRequest;
    NSArray *_chunkDeprecationEnabledAdTypes;
    _Bool _mossURLRenderEnabled;
    _Bool _chunkDeprecationEnabled;
}

+ (id)adServeLoggingContextFromExistingAdServeLoggingContext:(id)arg1;
+ (id)adServeLoggingContext;
- (void).cxx_destruct;
- (id)withChunkDeprecationEnabled:(_Bool)arg1;
- (id)withMossURLRenderEnabled:(_Bool)arg1;
- (id)withChunkDeprecationEnabledAdTypes:(id)arg1;
- (id)withPrefetchRequest:(_Bool)arg1;
- (id)withIsPrefetchEnabled:(_Bool)arg1;
- (id)withViewSource:(long long)arg1;
- (id)withStorySessionId:(id)arg1;
- (id)build;

@end

