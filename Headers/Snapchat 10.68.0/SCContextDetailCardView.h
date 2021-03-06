//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, SCContextCardAction, SCContextDisplayMode, SCContextImage;

@interface SCContextDetailCardView : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *footerText; // @dynamic footerText;
@property(retain, nonatomic) NSMutableArray *footerTextFormattingArray; // @dynamic footerTextFormattingArray;
@property(readonly, nonatomic) unsigned long long footerTextFormattingArray_Count; // @dynamic footerTextFormattingArray_Count;
@property(nonatomic) _Bool hasThumbnailMode; // @dynamic hasThumbnailMode;
@property(nonatomic) _Bool hasThumbnailTapAction; // @dynamic hasThumbnailTapAction;
@property(copy, nonatomic) NSString *headline; // @dynamic headline;
@property(retain, nonatomic) NSMutableArray *ratingsArray; // @dynamic ratingsArray;
@property(readonly, nonatomic) unsigned long long ratingsArray_Count; // @dynamic ratingsArray_Count;
@property(retain, nonatomic) SCContextImage *thumbnailImage; // @dynamic thumbnailImage;
@property(retain, nonatomic) SCContextDisplayMode *thumbnailMode; // @dynamic thumbnailMode;
@property(readonly, nonatomic) int thumbnailOneOfCase; // @dynamic thumbnailOneOfCase;
@property(retain, nonatomic) SCContextCardAction *thumbnailTapAction; // @dynamic thumbnailTapAction;

@end

