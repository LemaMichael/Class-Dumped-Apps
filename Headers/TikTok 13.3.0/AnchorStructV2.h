//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AnchorCommonStructV2, AnchorShopLinkStructV2, AnchorWikipediaStructV2;

@interface AnchorStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AnchorCommonStructV2 *anchorInfo; // @dynamic anchorInfo;
@property(nonatomic) int businessType; // @dynamic businessType;
@property(nonatomic) _Bool hasAnchorInfo; // @dynamic hasAnchorInfo;
@property(nonatomic) _Bool hasBusinessType; // @dynamic hasBusinessType;
@property(nonatomic) _Bool hasShopLink; // @dynamic hasShopLink;
@property(nonatomic) _Bool hasShowType; // @dynamic hasShowType;
@property(nonatomic) _Bool hasWikipediaInfo; // @dynamic hasWikipediaInfo;
@property(retain, nonatomic) AnchorShopLinkStructV2 *shopLink; // @dynamic shopLink;
@property(nonatomic) int showType; // @dynamic showType;
@property(retain, nonatomic) AnchorWikipediaStructV2 *wikipediaInfo; // @dynamic wikipediaInfo;

@end
