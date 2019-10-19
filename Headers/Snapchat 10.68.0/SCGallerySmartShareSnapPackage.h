//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCGallerySmartShareSnapPackage : NSObject <NSCopying>
{
    NSString *_mediaServerId;
    NSString *_key;
    NSString *_iv;
    NSString *_originalSnapId;
}

@property(readonly, copy, nonatomic) NSString *originalSnapId; // @synthesize originalSnapId=_originalSnapId;
@property(readonly, copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSString *mediaServerId; // @synthesize mediaServerId=_mediaServerId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaServerId:(id)arg1 key:(id)arg2 iv:(id)arg3 originalSnapId:(id)arg4;

@end
