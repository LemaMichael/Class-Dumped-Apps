//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ARITwoStateSettingValue;

@interface ARIGooglePayEventDetails_TosAccepted : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) ARITwoStateSettingValue *accepted; // @dynamic accepted;
@property(nonatomic) _Bool hasAccepted; // @dynamic hasAccepted;
@property(nonatomic) _Bool hasMajorVersion; // @dynamic hasMajorVersion;
@property(nonatomic) _Bool hasMinorVersion; // @dynamic hasMinorVersion;
@property(nonatomic) int majorVersion; // @dynamic majorVersion;
@property(nonatomic) int minorVersion; // @dynamic minorVersion;

@end
