//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTAuthorInfo, GMSx_GMTTLoggedLink, NSMutableArray, NSString;

@interface GMSx_GMTTSummaryQuote : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMTTLoggedLink *author; // @dynamic author;
@property(retain, nonatomic) GMSx_GMTTAuthorInfo *authorInfo; // @dynamic authorInfo;
@property(nonatomic) _Bool hasAuthor; // @dynamic hasAuthor;
@property(nonatomic) _Bool hasAuthorInfo; // @dynamic hasAuthorInfo;
@property(nonatomic) _Bool hasObfuscatedGaiaId; // @dynamic hasObfuscatedGaiaId;
@property(nonatomic) _Bool hasSummaryType; // @dynamic hasSummaryType;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasTotalSimilarStatements; // @dynamic hasTotalSimilarStatements;
@property(retain, nonatomic) NSMutableArray *highlightArray; // @dynamic highlightArray;
@property(readonly, nonatomic) unsigned long long highlightArray_Count; // @dynamic highlightArray_Count;
@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @dynamic obfuscatedGaiaId;
@property(retain, nonatomic) NSMutableArray *similarStatementArray; // @dynamic similarStatementArray;
@property(readonly, nonatomic) unsigned long long similarStatementArray_Count; // @dynamic similarStatementArray_Count;
@property(nonatomic) int summaryType; // @dynamic summaryType;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) int totalSimilarStatements; // @dynamic totalSimilarStatements;

@end

