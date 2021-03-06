//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary;

@interface SCCognacAppCatalog : NSObject <NSCopying>
{
    NSArray *_targetedAppArray;
    NSDictionary *_targetedAppDict;
    NSDictionary *_temporaryAppDict;
    NSDictionary *_allAvailableAppDict;
}

@property(readonly, copy, nonatomic) NSDictionary *allAvailableAppDict; // @synthesize allAvailableAppDict=_allAvailableAppDict;
@property(readonly, copy, nonatomic) NSDictionary *temporaryAppDict; // @synthesize temporaryAppDict=_temporaryAppDict;
@property(readonly, copy, nonatomic) NSDictionary *targetedAppDict; // @synthesize targetedAppDict=_targetedAppDict;
@property(readonly, copy, nonatomic) NSArray *targetedAppArray; // @synthesize targetedAppArray=_targetedAppArray;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTargetedAppArray:(id)arg1 targetedAppDict:(id)arg2 temporaryAppDict:(id)arg3 allAvailableAppDict:(id)arg4;

@end

