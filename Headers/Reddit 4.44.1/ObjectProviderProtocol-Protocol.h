//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol ObjectProviderDelegate;

@protocol ObjectProviderProtocol <NSObject>
@property(readonly, nonatomic) NSArray *objects;
@property(nonatomic) __weak id <ObjectProviderDelegate> delegate;
@property(nonatomic) _Bool isNonBlocking;
@property(nonatomic) _Bool supportsFetchingMore;
@property(readonly, nonatomic) _Bool isFetching;
- (void)fetchMoreWithCompletion:(void (^)(ObjectProvider *))arg1;
- (void)fetchWithCompletion:(void (^)(ObjectProvider *))arg1;
@end
