//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCAdsInitRequest, SCAdsThirdPartyProvidedInfo;

@interface SCAdsRegisterRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInitRequest; // @dynamic hasInitRequest;
@property(nonatomic) _Bool hasThirdPartyProvidedInfo; // @dynamic hasThirdPartyProvidedInfo;
@property(retain, nonatomic) SCAdsInitRequest *initRequest; // @dynamic initRequest;
@property(retain, nonatomic) SCAdsThirdPartyProvidedInfo *thirdPartyProvidedInfo; // @dynamic thirdPartyProvidedInfo;
@property(nonatomic) long long timestampMillis; // @dynamic timestampMillis;

@end

