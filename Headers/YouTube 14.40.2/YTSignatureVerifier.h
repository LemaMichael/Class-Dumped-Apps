//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface YTSignatureVerifier : NSObject
{
    NSData *_certificateData;
    long long _digestAlgorithm;
    long long _setupOnceToken;
    struct __SecCertificate *_intermediatePublicCertificate;
    struct __SecKey *_intermediatePublicKey;
    struct __CFString *_signatureKeyAlgorithm;
    unsigned long long _digestLength;
    CDUnknownFunctionPointerType _digestFunction;
    id <YTSignatureVerifierErrorHandler> _errorHandler;
}

- (void).cxx_destruct;
- (struct __CFString *)agorithmForSignatureAlgorithm:(long long)arg1 withDigestAlgorithm:(long long)arg2;
- (_Bool)loadIntermediateCertificate:(id)arg1 withRootCertificate:(struct __SecCertificate *)arg2 digestAlgorithm:(long long)arg3;
- (struct __SecCertificate *)getSelfSignedCertificateWithName:(id)arg1;
- (_Bool)verifyMessageSignature:(id)arg1 forMessageWithDigestData:(id)arg2;
- (_Bool)verifyMessageSignature:(id)arg1 forMessageWithData:(id)arg2;
- (void)dealloc;
- (_Bool)setup;
- (id)initWithCertificateData:(id)arg1 digestAlgorithm:(long long)arg2 errorHandler:(id)arg3;

@end

