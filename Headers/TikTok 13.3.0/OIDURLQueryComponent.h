//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface OIDURLQueryComponent : NSObject
{
    NSMutableDictionary *_parameters;
}

- (void).cxx_destruct;
- (id)description;
- (id)URLByReplacingQueryInURL:(id)arg1;
- (id)URLEncodedParameters;
- (id)percentEncodedQueryString;
- (id)queryItems;
- (void)addParameters:(id)arg1;
- (void)addParameter:(id)arg1 value:(id)arg2;
- (id)valuesForParameter:(id)arg1;
@property(readonly, nonatomic) NSDictionary *dictionaryValue;
@property(readonly, nonatomic) NSArray *parameters;
- (id)initWithURL:(id)arg1;
- (id)init;

@end

