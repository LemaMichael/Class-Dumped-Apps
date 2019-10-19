//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIFormattedString, YTIKidsCardPaletteData, YTIRenderer, YTIThumbnailDetails;

@interface YTIKidsAgeSelectionCardRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *cardImage; // @dynamic cardImage;
@property(retain, nonatomic) YTIFormattedString *cardLinkText; // @dynamic cardLinkText;
@property(retain, nonatomic) YTIKidsCardPaletteData *cardPalette; // @dynamic cardPalette;
@property(retain, nonatomic) YTIFormattedString *cardSubtitle; // @dynamic cardSubtitle;
@property(retain, nonatomic) YTIFormattedString *cardTitle; // @dynamic cardTitle;
@property(nonatomic) int corpusPreference; // @dynamic corpusPreference;
@property(nonatomic) _Bool hasCardImage; // @dynamic hasCardImage;
@property(nonatomic) _Bool hasCardLinkText; // @dynamic hasCardLinkText;
@property(nonatomic) _Bool hasCardPalette; // @dynamic hasCardPalette;
@property(nonatomic) _Bool hasCardSubtitle; // @dynamic hasCardSubtitle;
@property(nonatomic) _Bool hasCardTitle; // @dynamic hasCardTitle;
@property(nonatomic) _Bool hasCorpusPreference; // @dynamic hasCorpusPreference;
@property(nonatomic) _Bool hasHighlightedCardImage; // @dynamic hasHighlightedCardImage;
@property(nonatomic) _Bool hasHighlightedCardPalette; // @dynamic hasHighlightedCardPalette;
@property(nonatomic) _Bool hasMaxRecommendedAge; // @dynamic hasMaxRecommendedAge;
@property(nonatomic) _Bool hasMinRecommendedAge; // @dynamic hasMinRecommendedAge;
@property(nonatomic) _Bool hasMoreInfoRenderer; // @dynamic hasMoreInfoRenderer;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIThumbnailDetails *highlightedCardImage; // @dynamic highlightedCardImage;
@property(retain, nonatomic) YTIKidsCardPaletteData *highlightedCardPalette; // @dynamic highlightedCardPalette;
@property(nonatomic) int maxRecommendedAge; // @dynamic maxRecommendedAge;
@property(nonatomic) int minRecommendedAge; // @dynamic minRecommendedAge;
@property(retain, nonatomic) YTIRenderer *moreInfoRenderer; // @dynamic moreInfoRenderer;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
