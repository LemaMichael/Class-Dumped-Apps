//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRPartners_Money, GTLRPartners_PublicProfile, NSArray, NSString;

@interface GTLRPartners_Company : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) NSArray *certificationStatuses; // @dynamic certificationStatuses;
@property(retain, nonatomic) GTLRPartners_Money *convertedMinMonthlyBudget; // @dynamic convertedMinMonthlyBudget;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSArray *industries; // @dynamic industries;
@property(retain, nonatomic) NSArray *localizedInfos; // @dynamic localizedInfos;
@property(retain, nonatomic) NSArray *locations; // @dynamic locations;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GTLRPartners_Money *originalMinMonthlyBudget; // @dynamic originalMinMonthlyBudget;
@property(retain, nonatomic) GTLRPartners_PublicProfile *publicProfile; // @dynamic publicProfile;
@property(retain, nonatomic) NSArray *ranks; // @dynamic ranks;
@property(retain, nonatomic) NSArray *services; // @dynamic services;
@property(copy, nonatomic) NSString *websiteUrl; // @dynamic websiteUrl;

@end

