//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASMIcon, NSString;

@interface ASMMainScreenItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasScreenId; // @dynamic hasScreenId;
@property(nonatomic) _Bool hasSubtitleText; // @dynamic hasSubtitleText;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(retain, nonatomic) ASMIcon *icon; // @dynamic icon;
@property(nonatomic) int screenId; // @dynamic screenId;
@property(copy, nonatomic) NSString *subtitleText; // @dynamic subtitleText;
@property(copy, nonatomic) NSString *titleText; // @dynamic titleText;

@end
