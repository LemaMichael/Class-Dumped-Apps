//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class IESLiveGiftsInfo, NSArray, NSString;

@interface IESLiveGiftListModel : MTLModel <MTLJSONSerializing>
{
    IESLiveGiftsInfo *_giftsInfo;
    NSArray *_giftArray;
    NSArray *_giftPages;
}

+ (id)giftPagesJSONTransformer;
+ (id)giftArrayJSONTransformer;
+ (id)giftsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *giftPages; // @synthesize giftPages=_giftPages;
@property(retain, nonatomic) NSArray *giftArray; // @synthesize giftArray=_giftArray;
@property(retain, nonatomic) IESLiveGiftsInfo *giftsInfo; // @synthesize giftsInfo=_giftsInfo;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

