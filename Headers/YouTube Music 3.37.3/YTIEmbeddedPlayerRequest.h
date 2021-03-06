//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIInnerTubeContext, YTIPlaylistRequestDescriptor, YTISingleVideoRequestDescriptor;

@interface YTIEmbeddedPlayerRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasHostAppToken; // @dynamic hasHostAppToken;
@property(copy, nonatomic) NSString *hostAppToken; // @dynamic hostAppToken;
@property(retain, nonatomic) YTIPlaylistRequestDescriptor *playlistRequest; // @dynamic playlistRequest;
@property(readonly, nonatomic) int requestOneOfCase; // @dynamic requestOneOfCase;
@property(retain, nonatomic) YTISingleVideoRequestDescriptor *singleVideoRequest; // @dynamic singleVideoRequest;

@end

