//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SearchViewController;

@protocol SearchPageViewControllerProtocol <NSObject>
- (NSString *)analyticsContext;
- (NSString *)correlationId;
- (void)searchViewControllerDidTapCancel:(SearchViewController *)arg1;
- (void)searchViewControllerDidTapSearchBar:(SearchViewController *)arg1;
- (void)searchViewController:(SearchViewController *)arg1 fullSearchWithQuery:(NSString *)arg2 withSearchRequestInterface:(unsigned long long)arg3;
- (void)searchViewController:(SearchViewController *)arg1 searchWithQuery:(NSString *)arg2 withSearchRequestInterface:(unsigned long long)arg3;

@optional
- (void)searchViewController:(SearchViewController *)arg1 didSearchBlacklistedQuery:(NSString *)arg2;
@end
