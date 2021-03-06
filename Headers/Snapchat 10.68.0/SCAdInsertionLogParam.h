//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCAdInsertionLogParam : NSObject <NSCopying>
{
    _Bool _isFill;
    _Bool _isRetryInsertionEnabled;
    _Bool _isPrefetchEnabled;
    _Bool _prefetchResponse;
    unsigned long long _adProductType;
    NSString *_adId;
    NSString *_adRequestClientId;
}

@property(readonly, nonatomic) _Bool prefetchResponse; // @synthesize prefetchResponse=_prefetchResponse;
@property(readonly, nonatomic) _Bool isPrefetchEnabled; // @synthesize isPrefetchEnabled=_isPrefetchEnabled;
@property(readonly, nonatomic) _Bool isRetryInsertionEnabled; // @synthesize isRetryInsertionEnabled=_isRetryInsertionEnabled;
@property(readonly, copy, nonatomic) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
@property(readonly, copy, nonatomic) NSString *adId; // @synthesize adId=_adId;
@property(readonly, nonatomic) _Bool isFill; // @synthesize isFill=_isFill;
@property(readonly, nonatomic) unsigned long long adProductType; // @synthesize adProductType=_adProductType;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdProductType:(unsigned long long)arg1 isFill:(_Bool)arg2 adId:(id)arg3 adRequestClientId:(id)arg4 isRetryInsertionEnabled:(_Bool)arg5 isPrefetchEnabled:(_Bool)arg6 prefetchResponse:(_Bool)arg7;

@end

