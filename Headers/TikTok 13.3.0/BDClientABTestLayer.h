//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface BDClientABTestLayer : NSObject
{
    NSString *_name;
    NSArray *_groups;
    NSDictionary *_filters;
}

@property(copy, nonatomic) NSDictionary *filters; // @synthesize filters=_filters;
@property(copy, nonatomic) NSArray *groups; // @synthesize groups=_groups;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)isLegal;
- (id)initWithName:(id)arg1 groups:(id)arg2;

@end

