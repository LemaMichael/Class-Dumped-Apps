//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSString, NSURL, OIDRegistrationRequest;

@interface OIDRegistrationResponse : NSObject <NSCopying, NSSecureCoding>
{
    OIDRegistrationRequest *_request;
    NSString *_clientID;
    NSDate *_clientIDIssuedAt;
    NSString *_clientSecret;
    NSDate *_clientSecretExpiresAt;
    NSString *_registrationAccessToken;
    NSURL *_registrationClientURI;
    NSString *_tokenEndpointAuthenticationMethod;
    NSDictionary *_additionalParameters;
}

+ (_Bool)supportsSecureCoding;
+ (id)fieldMap;
@property(readonly, nonatomic) NSDictionary *additionalParameters; // @synthesize additionalParameters=_additionalParameters;
@property(readonly, nonatomic) NSString *tokenEndpointAuthenticationMethod; // @synthesize tokenEndpointAuthenticationMethod=_tokenEndpointAuthenticationMethod;
@property(readonly, nonatomic) NSURL *registrationClientURI; // @synthesize registrationClientURI=_registrationClientURI;
@property(readonly, nonatomic) NSString *registrationAccessToken; // @synthesize registrationAccessToken=_registrationAccessToken;
@property(readonly, nonatomic) NSDate *clientSecretExpiresAt; // @synthesize clientSecretExpiresAt=_clientSecretExpiresAt;
@property(readonly, nonatomic) NSString *clientSecret; // @synthesize clientSecret=_clientSecret;
@property(readonly, nonatomic) NSDate *clientIDIssuedAt; // @synthesize clientIDIssuedAt=_clientIDIssuedAt;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) OIDRegistrationRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRequest:(id)arg1 parameters:(id)arg2;
- (id)init;

@end
