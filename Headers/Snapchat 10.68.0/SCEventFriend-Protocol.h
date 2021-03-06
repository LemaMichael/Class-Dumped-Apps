//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "SCFilterableRecipient-Protocol.h"

@class NSDate, NSNumber;

@protocol SCEventFriend <NSObject, SCFilterableRecipient>
@property(nonatomic) _Bool isMuted;
@property(retain) NSDate *friendRequestSentAt;
@property(retain) NSDate *friendAddedAt;
@property(copy) NSDate *lastInteractionTimestamp;
@property(retain) NSNumber *score;
@property long long snapStreakFilterLastUsed;
@property long long snapStreakCount;
@property long long type;
- (_Bool)hasBirthdayToday;
- (NSDate *)getBirthday;
- (NSDate *)getSnapStreakExpiringTimeStamp;
@end

