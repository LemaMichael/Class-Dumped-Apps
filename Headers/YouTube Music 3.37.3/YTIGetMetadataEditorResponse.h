//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTICommand, YTIFormattedString, YTIFrameworkUpdateTransport, YTIMetadataEditorConfig, YTIResponseContext;

@interface YTIGetMetadataEditorResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(retain, nonatomic) YTIFrameworkUpdateTransport *frameworkUpdates; // @dynamic frameworkUpdates;
@property(nonatomic) _Bool hasFrameworkUpdates; // @dynamic hasFrameworkUpdates;
@property(nonatomic) _Bool hasMetadataEditorConfig; // @dynamic hasMetadataEditorConfig;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasSaveCommand; // @dynamic hasSaveCommand;
@property(nonatomic) _Bool hasSaveMessage; // @dynamic hasSaveMessage;
@property(nonatomic) _Bool hasTitleMessage; // @dynamic hasTitleMessage;
@property(retain, nonatomic) YTIMetadataEditorConfig *metadataEditorConfig; // @dynamic metadataEditorConfig;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(retain, nonatomic) YTICommand *saveCommand; // @dynamic saveCommand;
@property(retain, nonatomic) YTIFormattedString *saveMessage; // @dynamic saveMessage;
@property(retain, nonatomic) YTIFormattedString *titleMessage; // @dynamic titleMessage;

@end

