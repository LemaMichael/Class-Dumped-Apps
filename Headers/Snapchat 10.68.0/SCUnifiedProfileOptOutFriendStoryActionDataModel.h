//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCUnifiedProfileOptOutFriendStoryActionDataModel : NSObject <NSCopying>
{
    NSString *_currentUserId;
    NSString *_optOutEntityId;
}

@property(readonly, copy, nonatomic) NSString *optOutEntityId; // @synthesize optOutEntityId=_optOutEntityId;
@property(readonly, copy, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCurrentUserId:(id)arg1 optOutEntityId:(id)arg2;

@end
