//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonSupportedRenderers, YTIChannelProfileEditorTextInputSupportedRenderers;

@interface YTIChannelProfileDescriptionEditorRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIChannelProfileEditorTextInputSupportedRenderers *descriptionField; // @dynamic descriptionField;
@property(nonatomic) _Bool hasDescriptionField; // @dynamic hasDescriptionField;
@property(nonatomic) _Bool hasSaveButton; // @dynamic hasSaveButton;
@property(retain, nonatomic) YTIButtonSupportedRenderers *saveButton; // @dynamic saveButton;

@end
