//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCNNetworkTypesError : NSObject
{
    _Bool _immediatelyRetryable;
    int _errorCode;
    int _internalErrorCode;
    int _quicDetailedErrorCode;
    NSString *_message;
}

+ (id)ErrorWithErrorCode:(int)arg1 message:(id)arg2 internalErrorCode:(int)arg3 immediatelyRetryable:(_Bool)arg4 quicDetailedErrorCode:(int)arg5;
@property(readonly, nonatomic) int quicDetailedErrorCode; // @synthesize quicDetailedErrorCode=_quicDetailedErrorCode;
@property(readonly, nonatomic) _Bool immediatelyRetryable; // @synthesize immediatelyRetryable=_immediatelyRetryable;
@property(readonly, nonatomic) int internalErrorCode; // @synthesize internalErrorCode=_internalErrorCode;
@property(readonly, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
- (void).cxx_destruct;
- (id)description;
- (id)initWithErrorCode:(int)arg1 message:(id)arg2 internalErrorCode:(int)arg3 immediatelyRetryable:(_Bool)arg4 quicDetailedErrorCode:(int)arg5;

@end
