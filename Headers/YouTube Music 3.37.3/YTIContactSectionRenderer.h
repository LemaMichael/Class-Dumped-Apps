//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTInnerTubeSectionRenderer-Protocol.h"

@class NSData, NSMutableArray, NSString, YTIContactSelectMessageSupportedRenderers, YTIFormattedString;

@interface YTIContactSectionRenderer : GPBMessage <YTInnerTubeSectionRenderer>
{
}

+ (id)descriptor;
- (id)sectionRendererDataSourceWithService:(id)arg1 params:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contactsArray; // @dynamic contactsArray;
@property(readonly, nonatomic) unsigned long long contactsArray_Count; // @dynamic contactsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasSelectMessage; // @dynamic hasSelectMessage;
@property(nonatomic) _Bool hasSelectMessageRenderer; // @dynamic hasSelectMessageRenderer;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIFormattedString *selectMessage; // @dynamic selectMessage;
@property(retain, nonatomic) YTIContactSelectMessageSupportedRenderers *selectMessageRenderer; // @dynamic selectMessageRenderer;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

