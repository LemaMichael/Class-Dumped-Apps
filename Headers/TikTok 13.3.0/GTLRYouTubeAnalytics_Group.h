//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRYouTubeAnalytics_Group_ContentDetails, GTLRYouTubeAnalytics_Group_Snippet, NSString;

@interface GTLRYouTubeAnalytics_Group : GTLRObject
{
}

+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *ETag; // @dynamic ETag;
@property(retain, nonatomic) GTLRYouTubeAnalytics_Group_ContentDetails *contentDetails; // @dynamic contentDetails;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(retain, nonatomic) GTLRYouTubeAnalytics_Group_Snippet *snippet; // @dynamic snippet;

@end
