//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AKFLoginRequest.h"

@class NSString;

@interface AKFEmailLoginRequest : AKFLoginRequest
{
    NSString *_email;
    unsigned long long _retryCount;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (void)_scheduleEmailLoginPoll:(double)arg1;
- (void)_handleError:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLoginRequest:(id)arg1;
- (unsigned long long)hash;
- (void)failWithError:(id)arg1;
- (void)didStartWithResult:(id)arg1;
- (id)requestParameters;
- (unsigned long long)loginType;
- (id)credentialsType;
- (id)initWithEmail:(id)arg1 authState:(id)arg2 delegate:(id)arg3 sessionProvider:(id)arg4 responseType:(unsigned long long)arg5 loggingRef:(id)arg6 enableGetACall:(_Bool)arg7 enableSendToFacebook:(_Bool)arg8;

@end
