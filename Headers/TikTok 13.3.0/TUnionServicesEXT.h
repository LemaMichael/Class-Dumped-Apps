//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface TUnionServicesEXT : NSObject
{
    NSMutableDictionary *_serviceClasses;
    NSMutableDictionary *_serviceImpObjects;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *serviceImpObjects; // @synthesize serviceImpObjects=_serviceImpObjects;
@property(retain, nonatomic) NSMutableDictionary *serviceClasses; // @synthesize serviceClasses=_serviceClasses;
- (void).cxx_destruct;
- (id)getService:(id)arg1;
- (void)registerServiceImpObjects;
- (void)addServiceImpClass:(Class)arg1 with:(id)arg2;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
