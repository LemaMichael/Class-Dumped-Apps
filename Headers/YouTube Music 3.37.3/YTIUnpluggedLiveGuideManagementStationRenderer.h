//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTICommand, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUnpluggedLiveGuideManagementStationRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTICommand *disableCommand; // @dynamic disableCommand;
@property(retain, nonatomic) YTICommand *enableCommand; // @dynamic enableCommand;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(copy, nonatomic) NSString *externalId; // @dynamic externalId;
@property(nonatomic) _Bool hasDisableCommand; // @dynamic hasDisableCommand;
@property(nonatomic) _Bool hasEnableCommand; // @dynamic hasEnableCommand;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasExternalId; // @dynamic hasExternalId;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasThumbnailSecondary; // @dynamic hasThumbnailSecondary;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnailSecondary; // @dynamic thumbnailSecondary;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;

@end

