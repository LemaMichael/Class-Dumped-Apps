//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEEffectMessageModel : NSObject
{
    long long _messageType;
    long long _arg1;
    long long _arg2;
    id _data;
}

+ (id)messageModelWithMessageType:(long long)arg1 arg1:(long long)arg2 arg2:(long long)arg3 data:(id)arg4;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(nonatomic) long long arg2; // @synthesize arg2=_arg2;
@property(nonatomic) long long arg1; // @synthesize arg1=_arg1;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;

@end
