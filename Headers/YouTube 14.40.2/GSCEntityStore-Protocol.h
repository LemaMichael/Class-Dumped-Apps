//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPCPromise, NSArray, NSDictionary;

@protocol GSCEntityStore <NSObject>
- (GPCPromise *)drop;
- (GPCPromise *)close;
- (GPCPromise *)deleteKeys:(NSArray *)arg1;
- (GPCPromise *)saveEntitiesMap:(NSDictionary *)arg1;
- (GPCPromise *)loadAllObjects;
@end

