//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WABroadcastJID;

@interface WAListRepresentation : NSObject
{
    WABroadcastJID *_listJID;
    NSString *_name;
    NSArray *_recipientJIDs;
}

@property(copy, nonatomic) NSArray *recipientJIDs; // @synthesize recipientJIDs=_recipientJIDs;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) WABroadcastJID *listJID; // @synthesize listJID=_listJID;
- (void).cxx_destruct;
- (id)description;

@end

