//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIAssetRegistry_AssetLocation_PathInfo, YTIAssetRegistry_AssetLocation_RemoteFileSet;

@interface YTIAssetRegistry_AssetLocation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasPathInfo; // @dynamic hasPathInfo;
@property(retain, nonatomic) YTIAssetRegistry_AssetLocation_PathInfo *pathInfo; // @dynamic pathInfo;
@property(retain, nonatomic) YTIAssetRegistry_AssetLocation_RemoteFileSet *remoteFileSet; // @dynamic remoteFileSet;
@property(readonly, nonatomic) int remoteInfoOneOfCase; // @dynamic remoteInfoOneOfCase;
@property(copy, nonatomic) NSString *remoteURL; // @dynamic remoteURL;

@end

