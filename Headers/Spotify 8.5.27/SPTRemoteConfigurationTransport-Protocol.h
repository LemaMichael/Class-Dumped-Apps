//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary, NSURL;

@protocol SPTRemoteConfigurationTransport
- (void)fetchConfigurationWithClientAttributes:(NSDictionary *)arg1 url:(NSURL *)arg2 backgroundFetchCompletion:(void (^)(unsigned long long))arg3 success:(void (^)(long long, NSDictionary *, NSData *))arg4 failure:(void (^)(long long, NSError *))arg5;
@end

