//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class AWEURLModel, NSDictionary, NSNumber, NSString;

@interface AWEGiphySearchResultObject : MTLModel <MTLJSONSerializing>
{
    AWEURLModel *_originURL;
    AWEURLModel *_thumbnailURL;
    NSString *_identifier;
    unsigned long long _stickerType;
    NSNumber *_imageID;
}

+ (id)thumbnailURLJSONTransformer;
+ (id)originURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *imageID; // @synthesize imageID=_imageID;
@property(nonatomic) unsigned long long stickerType; // @synthesize stickerType=_stickerType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) AWEURLModel *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) AWEURLModel *originURL; // @synthesize originURL=_originURL;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

