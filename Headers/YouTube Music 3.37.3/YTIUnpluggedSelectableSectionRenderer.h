//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIFormattedString;

@interface YTIUnpluggedSelectableSectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTitleAnnotation; // @dynamic hasTitleAnnotation;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) NSMutableArray *selectorsArray; // @dynamic selectorsArray;
@property(readonly, nonatomic) unsigned long long selectorsArray_Count; // @dynamic selectorsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(retain, nonatomic) YTIFormattedString *titleAnnotation; // @dynamic titleAnnotation;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end
