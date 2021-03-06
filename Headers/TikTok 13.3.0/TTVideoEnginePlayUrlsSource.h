//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTVideoEnginePlayBaseSource.h"

@class NSArray;

@interface TTVideoEnginePlayUrlsSource : TTVideoEnginePlayBaseSource
{
    NSArray *_urls;
    long long _urlIndex;
}

@property(nonatomic) long long urlIndex; // @synthesize urlIndex=_urlIndex;
@property(retain, nonatomic) NSArray *urls; // @synthesize urls=_urls;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)deepCopy;
- (_Bool)_canSkipToNext;
- (_Bool)preloadDataIsExpire;
- (long long)retryStrategyForRetryCount:(long long)arg1;
- (_Bool)skipToNext;
- (id)allUrlsForResolution:(unsigned long long *)arg1;
- (id)urlForResolution:(unsigned long long)arg1;
- (_Bool)isSingleUrl;
- (_Bool)isMainUrl;
- (id)currentUrl;
- (id)init;

@end

