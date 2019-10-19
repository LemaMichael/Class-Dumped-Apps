//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSString;

@interface AWEChallengeBannerModel : MTLModel <MTLJSONSerializing>
{
    AWEURLModel *_icon;
    NSString *_webURL;
    NSString *_openURL;
}

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *openURL; // @synthesize openURL=_openURL;
@property(copy, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) AWEURLModel *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
