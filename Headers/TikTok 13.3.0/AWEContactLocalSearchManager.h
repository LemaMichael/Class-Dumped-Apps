//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class NSArray, NSString;
@protocol AWEIMSearchEngineProtocol;

@interface AWEContactLocalSearchManager : NSObject <AWEUserMessage>
{
    NSString *_keyword;
    NSArray *_searchResultUsers;
    CDUnknownBlockType _searchCompletion;
    NSArray *_contactUsers;
    id <AWEIMSearchEngineProtocol> _searchEngine;
}

@property(retain, nonatomic) id <AWEIMSearchEngineProtocol> searchEngine; // @synthesize searchEngine=_searchEngine;
@property(retain, nonatomic) NSArray *contactUsers; // @synthesize contactUsers=_contactUsers;
@property(copy, nonatomic) CDUnknownBlockType searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property(retain, nonatomic) NSArray *searchResultUsers; // @synthesize searchResultUsers=_searchResultUsers;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (id)filterSelf:(id)arg1;
- (void)p_setupSearchEngine;
- (void)p_setupContactUsers;
- (void)searchUserWithKeyword:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

