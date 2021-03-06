//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface IESBridgeMessage : NSObject
{
    NSString *_messageType;
    NSString *_eventID;
    NSString *_callbackID;
    NSDictionary *_params;
    NSString *_methodName;
    NSString *_JSSDKVersion;
}

@property(copy, nonatomic) NSString *JSSDKVersion; // @synthesize JSSDKVersion=_JSSDKVersion;
@property(copy, nonatomic) NSString *methodName; // @synthesize methodName=_methodName;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *callbackID; // @synthesize callbackID=_callbackID;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSString *messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (id)bridgeMessageString;
- (id)initWithMessageBody:(id)arg1;
@property(nonatomic) unsigned long long from;

@end

