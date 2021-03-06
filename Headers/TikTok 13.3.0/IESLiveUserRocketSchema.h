//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface IESLiveUserRocketSchema : MTLModel <MTLJSONSerializing>
{
    NSString *_rSchema;
    NSString *_rToken;
    NSString *_downLoadUrl;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSString *downLoadUrl; // @synthesize downLoadUrl=_downLoadUrl;
@property(readonly, nonatomic) NSString *rToken; // @synthesize rToken=_rToken;
@property(readonly, nonatomic) NSString *rSchema; // @synthesize rSchema=_rSchema;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

