//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMRestaurantMenuPrice, NSString;

@interface GMSx_GMMRestaurantMenuItemOption : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPrice; // @dynamic hasPrice;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GMSx_GMMRestaurantMenuPrice *price; // @dynamic price;

@end
