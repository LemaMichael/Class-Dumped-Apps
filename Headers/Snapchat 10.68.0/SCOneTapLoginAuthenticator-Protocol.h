//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol SCOneTapLoginAuthenticator
- (void)removeOneTapLoginToken;
- (void)removeOneTapLogin;
- (void)authenticateReactivationWithOneTapLoginSuccess:(void (^)(SCLoginSuccess *))arg1 failure:(void (^)(SCLogInError *))arg2;
- (void)authenticateWithOneTapLoginSuccess:(void (^)(SCLoginSuccess *))arg1 failure:(void (^)(SCLogInError *))arg2;
- (void)persistOneTapLoginToken:(NSString *)arg1 expiry:(long long)arg2;
@end

