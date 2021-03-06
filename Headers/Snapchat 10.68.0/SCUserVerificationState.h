//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCUserVerificationState : NSObject <NSCopying>
{
    unsigned long long _subtype;
}

+ (id)phoneVerifyFromPhoneFirst;
+ (id)phoneVerifyFromEmailFirst;
+ (id)phoneEntryFromPhoneFirstCountry;
+ (id)phoneEntryFromEmail;
+ (id)loadingInterstitial;
+ (id)emailEntryFromPhone;
+ (id)emailEntryFromEmailFirstCountry;
+ (id)done;
+ (id)captchaFromSkipPhone;
+ (id)captchaFromEmail;
+ (id)abandonRegistration;
- (void)matchEmailEntryFromEmailFirstCountry:(CDUnknownBlockType)arg1 emailEntryFromPhone:(CDUnknownBlockType)arg2 phoneEntryFromEmail:(CDUnknownBlockType)arg3 phoneEntryFromPhoneFirstCountry:(CDUnknownBlockType)arg4 captchaFromEmail:(CDUnknownBlockType)arg5 captchaFromSkipPhone:(CDUnknownBlockType)arg6 phoneVerifyFromEmailFirst:(CDUnknownBlockType)arg7 phoneVerifyFromPhoneFirst:(CDUnknownBlockType)arg8 loadingInterstitial:(CDUnknownBlockType)arg9 abandonRegistration:(CDUnknownBlockType)arg10 done:(CDUnknownBlockType)arg11;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

