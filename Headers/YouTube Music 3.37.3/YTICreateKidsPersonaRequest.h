//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIApproximateAge, YTIAvatar, YTIBirthday, YTIInnerTubeContext, YTIKidsPersonaSettings;

@interface YTICreateKidsPersonaRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIApproximateAge *approximateAge; // @dynamic approximateAge;
@property(retain, nonatomic) YTIAvatar *avatar; // @dynamic avatar;
@property(retain, nonatomic) YTIBirthday *birthday; // @dynamic birthday;
@property(readonly, nonatomic) int birthdayDataOneOfCase; // @dynamic birthdayDataOneOfCase;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(copy, nonatomic) NSString *givenName; // @dynamic givenName;
@property(nonatomic) _Bool hasAvatar; // @dynamic hasAvatar;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasGivenName; // @dynamic hasGivenName;
@property(nonatomic) _Bool hasKidsSettings; // @dynamic hasKidsSettings;
@property(retain, nonatomic) YTIKidsPersonaSettings *kidsSettings; // @dynamic kidsSettings;

@end
