//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRInstanceIDAuthKeychain;

@interface FIRInstanceIDTokenStore : NSObject
{
    FIRInstanceIDAuthKeychain *_keychain;
}

+ (id)tokenInfoFromKeychainItem:(id)arg1;
+ (id)serviceKeyForAuthorizedEntity:(id)arg1 scope:(id)arg2;
+ (id)defaultStore;
@property(retain, nonatomic) FIRInstanceIDAuthKeychain *keychain; // @synthesize keychain=_keychain;
- (void).cxx_destruct;
- (_Bool)removeAllTokensWithError:(id *)arg1;
- (_Bool)removeTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 error:(id *)arg3;
- (_Bool)saveTokenInfo:(id)arg1;
- (id)cachedTokenInfos;
- (id)tokenInfoWithAuthorizedEntity:(id)arg1 scope:(id)arg2;
- (id)initWithKeychain:(id)arg1;
- (id)init;

@end
