//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRScript_Operation_Metadata, GTLRScript_Operation_Response, GTLRScript_Status, NSNumber, NSString;

@interface GTLRScript_Operation : GTLRObject
{
}


// Remaining properties
@property(retain, nonatomic) NSNumber *done; // @dynamic done;
@property(retain, nonatomic) GTLRScript_Status *error; // @dynamic error;
@property(retain, nonatomic) GTLRScript_Operation_Metadata *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GTLRScript_Operation_Response *response; // @dynamic response;
@end
