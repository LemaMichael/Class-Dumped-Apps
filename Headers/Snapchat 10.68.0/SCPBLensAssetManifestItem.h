//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCPBLensAssetManifestItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *animationGroup; // @dynamic animationGroup;
@property(copy, nonatomic) NSString *assetSignature; // @dynamic assetSignature;
@property(copy, nonatomic) NSString *assetURL; // @dynamic assetURL;
@property(copy, nonatomic) NSString *contentSignature; // @dynamic contentSignature;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *originalFilename; // @dynamic originalFilename;
@property(nonatomic) int preloadLimit; // @dynamic preloadLimit;
@property(copy, nonatomic) NSString *requestTiming; // @dynamic requestTiming;
@property(nonatomic) int scale; // @dynamic scale;
@property(retain, nonatomic) NSMutableArray *storageOptionsArray; // @dynamic storageOptionsArray;
@property(readonly, nonatomic) unsigned long long storageOptionsArray_Count; // @dynamic storageOptionsArray_Count;
@property(copy, nonatomic) NSString *type; // @dynamic type;

@end

