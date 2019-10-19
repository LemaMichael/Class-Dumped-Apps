//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCStoriesBoltContentObjects, SCStoriesMediaCaption;

@interface SCStoriesSnapMedia : NSObject <NSCopying>
{
    _Bool _needsAuth;
    _Bool _isZipped;
    NSString *_id;
    NSString *_key;
    NSString *_iv;
    long long _type;
    NSString *_appUrl;
    NSString *_directToStorageUrl;
    SCStoriesMediaCaption *_caption;
    NSArray *_rulefileParamPairs;
    SCStoriesBoltContentObjects *_boltContentObjects;
}

@property(readonly, copy, nonatomic) SCStoriesBoltContentObjects *boltContentObjects; // @synthesize boltContentObjects=_boltContentObjects;
@property(readonly, copy, nonatomic) NSArray *rulefileParamPairs; // @synthesize rulefileParamPairs=_rulefileParamPairs;
@property(readonly, nonatomic) _Bool isZipped; // @synthesize isZipped=_isZipped;
@property(readonly, copy, nonatomic) SCStoriesMediaCaption *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) NSString *directToStorageUrl; // @synthesize directToStorageUrl=_directToStorageUrl;
@property(readonly, copy, nonatomic) NSString *appUrl; // @synthesize appUrl=_appUrl;
@property(readonly, nonatomic) _Bool needsAuth; // @synthesize needsAuth=_needsAuth;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithId:(id)arg1 key:(id)arg2 iv:(id)arg3 type:(long long)arg4 needsAuth:(_Bool)arg5 appUrl:(id)arg6 directToStorageUrl:(id)arg7 caption:(id)arg8 isZipped:(_Bool)arg9 rulefileParamPairs:(id)arg10 boltContentObjects:(id)arg11;

@end
