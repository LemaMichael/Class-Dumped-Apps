//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentRequest.h"

@class NSString;

@interface WAPaymentUPISetMPINRequest : WAPaymentRequest
{
    _Bool _defaultDebit;
    _Bool _defaultCredit;
    NSString *_bankCode;
    NSString *_credentialId;
    NSString *_providerType;
    NSString *_deviceId;
    NSString *_transactionId;
    NSString *_otp;
    NSString *_mpin;
    NSString *_atmPin;
    NSString *_lastDigits;
    NSString *_expiryMonth;
    NSString *_expiryYear;
}

+ (id)identifier;
@property(readonly, nonatomic) _Bool defaultCredit; // @synthesize defaultCredit=_defaultCredit;
@property(readonly, nonatomic) _Bool defaultDebit; // @synthesize defaultDebit=_defaultDebit;
@property(readonly, copy, nonatomic) NSString *expiryYear; // @synthesize expiryYear=_expiryYear;
@property(readonly, copy, nonatomic) NSString *expiryMonth; // @synthesize expiryMonth=_expiryMonth;
@property(readonly, copy, nonatomic) NSString *lastDigits; // @synthesize lastDigits=_lastDigits;
@property(readonly, copy, nonatomic) NSString *atmPin; // @synthesize atmPin=_atmPin;
@property(readonly, copy, nonatomic) NSString *mpin; // @synthesize mpin=_mpin;
@property(readonly, copy, nonatomic) NSString *otp; // @synthesize otp=_otp;
@property(readonly, copy, nonatomic) NSString *transactionId; // @synthesize transactionId=_transactionId;
@property(readonly, copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(readonly, copy, nonatomic) NSString *providerType; // @synthesize providerType=_providerType;
@property(readonly, copy, nonatomic) NSString *credentialId; // @synthesize credentialId=_credentialId;
@property(readonly, copy, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
- (void).cxx_destruct;
- (void)executeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCredentialId:(id)arg1 deviceId:(id)arg2 transactionId:(id)arg3 otp:(id)arg4 mpin:(id)arg5 atmPin:(id)arg6 lastDigits:(id)arg7 expiryMonth:(id)arg8 expiryYear:(id)arg9 defaultDebit:(_Bool)arg10 defaultCredit:(_Bool)arg11 bankCode:(id)arg12 providerType:(id)arg13;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
