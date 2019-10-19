//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface SCSearchV2DeploymentConfiguration : NSObject <NSCopying>
{
    NSURL *_baseURL;
    NSString *_routeTag;
}

@property(readonly, copy, nonatomic) NSString *routeTag; // @synthesize routeTag=_routeTag;
@property(readonly, copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBaseURL:(id)arg1 routeTag:(id)arg2;

@end
