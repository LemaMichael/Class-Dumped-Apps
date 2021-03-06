//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOrderedSet, RedditService;

@interface SearchPresenter : NSObject
{
    RedditService *_service;
    unsigned long long _searchType;
    unsigned long long _searchLoadingState;
    NSOrderedSet *_currentTabs;
}

@property(retain, nonatomic) NSOrderedSet *currentTabs; // @synthesize currentTabs=_currentTabs;
@property(nonatomic) unsigned long long searchLoadingState; // @synthesize searchLoadingState=_searchLoadingState;
@property(nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (long long)indexOfSearchTabType:(unsigned long long)arg1;
- (id)processedSearchQuery:(id)arg1;
- (id)initWithRedditService:(id)arg1 searchType:(unsigned long long)arg2;

@end

