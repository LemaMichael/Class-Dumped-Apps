//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIButtonSupportedRenderers, YTILikeTarget;

@interface YTISlimMetadataToggleButtonRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *button; // @dynamic button;
@property(nonatomic) _Bool hasButton; // @dynamic hasButton;
@property(nonatomic) _Bool hasIsDislike; // @dynamic hasIsDislike;
@property(nonatomic) _Bool hasIsLike; // @dynamic hasIsLike;
@property(nonatomic) _Bool hasLikeStatus; // @dynamic hasLikeStatus;
@property(nonatomic) _Bool hasLikeStatusEntityKey; // @dynamic hasLikeStatusEntityKey;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(nonatomic) _Bool isDislike; // @dynamic isDislike;
@property(nonatomic) _Bool isLike; // @dynamic isLike;
@property(nonatomic) int likeStatus; // @dynamic likeStatus;
@property(copy, nonatomic) NSString *likeStatusEntityKey; // @dynamic likeStatusEntityKey;
@property(retain, nonatomic) YTILikeTarget *target; // @dynamic target;

@end

