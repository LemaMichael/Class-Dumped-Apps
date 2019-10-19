//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSURL;

@interface LSAUriResponse : NSObject
{
    NSURL *_uri;
    long long _responseCode;
    NSString *_responseDescription;
    NSData *_data;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSString *responseDescription; // @synthesize responseDescription=_responseDescription;
@property(readonly, nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(readonly, nonatomic) NSURL *uri; // @synthesize uri=_uri;
- (void).cxx_destruct;
- (id)initWithUri:(id)arg1 code:(long long)arg2 description:(id)arg3 data:(id)arg4;

@end
