//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GSDK_PBGeneratedMessage.h"

@class NSString;

@interface SCOClientVersion : GSDK_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSString *certificateFingerprint; // @dynamic certificateFingerprint;
@property(retain, nonatomic) NSString *client; // @dynamic client;
@property(nonatomic) _Bool hasCertificateFingerprint; // @dynamic hasCertificateFingerprint;
@property(nonatomic) _Bool hasClient; // @dynamic hasClient;
@property(nonatomic) _Bool hasVersionCode; // @dynamic hasVersionCode;
@property(nonatomic) _Bool hasVersionName; // @dynamic hasVersionName;
@property(nonatomic) long long versionCode; // @dynamic versionCode;
@property(retain, nonatomic) NSString *versionName; // @dynamic versionName;

@end

