//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRWificonfig_DeviceIdentifier, NSArray, NSString;

@interface GTLRWificonfig_DeviceDetails : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(retain, nonatomic) GTLRWificonfig_DeviceIdentifier *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSArray *macAddress; // @dynamic macAddress;
@property(copy, nonatomic) NSString *platform; // @dynamic platform;

@end

