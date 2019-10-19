//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIButtonSupportedRenderers, YTIFormattedString, YTIIcon, YTIThumbnailDetails;

@interface YTIPlayerKavRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasKavURL; // @dynamic hasKavURL;
@property(nonatomic) _Bool hasPlayerParams; // @dynamic hasPlayerParams;
@property(nonatomic) _Bool hasProceedButton; // @dynamic hasProceedButton;
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool hasThumbnail; // @dynamic hasThumbnail;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(copy, nonatomic) NSString *kavURL; // @dynamic kavURL;
@property(copy, nonatomic) NSString *playerParams; // @dynamic playerParams;
@property(retain, nonatomic) YTIButtonSupportedRenderers *proceedButton; // @dynamic proceedButton;
@property(retain, nonatomic) YTIFormattedString *reason; // @dynamic reason;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(copy, nonatomic) NSString *title; // @dynamic title;

@end
