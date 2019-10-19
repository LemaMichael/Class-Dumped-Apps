//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAStopLocationSharingRequest-Protocol.h"

@class NSDate, NSString, WAChatJID;
@protocol WAServerDate;

@interface WAUnmanagedStopLocationSharingRequest : NSObject <WAStopLocationSharingRequest>
{
    WAChatJID *_chatJID;
    NSDate<WAServerDate> *_retryEndDate;
    NSString *_requestID;
}

@property(readonly, copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(readonly, copy, nonatomic) NSDate<WAServerDate> *retryEndDate; // @synthesize retryEndDate=_retryEndDate;
@property(readonly, nonatomic) WAChatJID *chatJID; // @synthesize chatJID=_chatJID;
- (void).cxx_destruct;
- (id)initWithCoreDataObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
