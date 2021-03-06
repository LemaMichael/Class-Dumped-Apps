//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GFMIPersonIdentifier, NSDate, NSSet, NSString;

@interface GFMIPerson : NSObject <NSCopying>
{
    _Bool _youngTeen;
    NSSet *_eligibleRoles;
    GFMIPersonIdentifier *_identifier;
    NSString *_fullName;
    NSString *_givenName;
    NSString *_email;
    NSString *_profilePictureURLString;
    NSDate *_invitationValidUntilDate;
    NSDate *_invitationSentDate;
    long long _role;
    long long _membershipState;
    long long _gender;
    long long _invitationState;
    NSString *_familyName;
    NSDate *_birthday;
}

@property(copy, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(nonatomic, getter=isYoungTeen) _Bool youngTeen; // @synthesize youngTeen=_youngTeen;
@property(nonatomic) long long invitationState; // @synthesize invitationState=_invitationState;
@property(nonatomic) long long gender; // @synthesize gender=_gender;
@property(nonatomic) long long membershipState; // @synthesize membershipState=_membershipState;
@property(nonatomic) long long role; // @synthesize role=_role;
@property(copy, nonatomic) NSDate *invitationSentDate; // @synthesize invitationSentDate=_invitationSentDate;
@property(copy, nonatomic) NSDate *invitationValidUntilDate; // @synthesize invitationValidUntilDate=_invitationValidUntilDate;
@property(copy, nonatomic) NSString *profilePictureURLString; // @synthesize profilePictureURLString=_profilePictureURLString;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(retain, nonatomic) GFMIPersonIdentifier *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSSet *eligibleRoles; // @synthesize eligibleRoles=_eligibleRoles;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEligibleForRole:(long long)arg1;
@property(readonly, nonatomic) NSString *nonEmptyShortName;
- (id)init;

@end

