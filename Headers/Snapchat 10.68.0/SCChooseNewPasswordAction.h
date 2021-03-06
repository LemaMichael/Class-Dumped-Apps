//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCChooseNewPasswordAction : NSObject <NSCopying>
{
    unsigned long long _subtype;
    NSString *_updatePassword_password;
    NSString *_updatePasswordConfirmation_passwordConfirmation;
}

+ (id)updatePasswordWithPassword:(id)arg1;
+ (id)updatePasswordConfirmationWithPasswordConfirmation:(id)arg1;
+ (id)exit;
+ (id)chooseNewPassword;
+ (id)checkPasswordStrength;
- (void).cxx_destruct;
- (void)matchUpdatePassword:(CDUnknownBlockType)arg1 updatePasswordConfirmation:(CDUnknownBlockType)arg2 checkPasswordStrength:(CDUnknownBlockType)arg3 chooseNewPassword:(CDUnknownBlockType)arg4 exit:(CDUnknownBlockType)arg5;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

