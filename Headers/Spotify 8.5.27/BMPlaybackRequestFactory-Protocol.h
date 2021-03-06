//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURL;
@protocol BMPlaybackRequest;

@protocol BMPlaybackRequestFactory <NSObject>
- (id <BMPlaybackRequest>)createPlaybackRequestWithMediaURL:(NSURL *)arg1 metadata:(NSDictionary *)arg2 royaltyMedia:(_Bool)arg3 audioOnlyAllowed:(_Bool)arg4;
- (id <BMPlaybackRequest>)createPlaybackRequestWithManifestID:(NSString *)arg1 metadata:(NSDictionary *)arg2 royaltyMedia:(_Bool)arg3 audioOnlyAllowed:(_Bool)arg4;
@end

