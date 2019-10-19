//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface GNSMessage : NSObject <NSCopying>
{
    NSString *_messageNamespace;
    NSString *_type;
    NSData *_content;
}

+ (id)messageWithContent:(id)arg1 messageNamespace:(id)arg2 type:(id)arg3;
+ (id)messageWithContent:(id)arg1 type:(id)arg2;
+ (id)messageWithContent:(id)arg1;
@property(readonly, copy, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *messageNamespace; // @synthesize messageNamespace=_messageNamespace;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithContent:(id)arg1 messageNamespace:(id)arg2 type:(id)arg3;

@end
