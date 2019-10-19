//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTLogMessage.h"

@class NSString;

@interface SPTLogMessageInAppMessageClientBackendRequestError2 : SPTLogMessage
{
    NSString *_errorTypeValue;
    NSString *_requestUriValue;
    long long _statusCodeValue;
    NSString *_errorLocalizeddescriptionValue;
    NSString *_messageFormatValue;
}

+ (id)messageWithErrorType:(id)arg1 requestUri:(id)arg2 statusCode:(long long)arg3 errorLocalizeddescription:(id)arg4 messageFormat:(id)arg5;
@property(copy, nonatomic) NSString *messageFormatValue; // @synthesize messageFormatValue=_messageFormatValue;
@property(copy, nonatomic) NSString *errorLocalizeddescriptionValue; // @synthesize errorLocalizeddescriptionValue=_errorLocalizeddescriptionValue;
@property(nonatomic) long long statusCodeValue; // @synthesize statusCodeValue=_statusCodeValue;
@property(copy, nonatomic) NSString *requestUriValue; // @synthesize requestUriValue=_requestUriValue;
@property(copy, nonatomic) NSString *errorTypeValue; // @synthesize errorTypeValue=_errorTypeValue;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;

@end
