//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface HTSLiveRoomsInteractPKData : MTLModel <MTLJSONSerializing>
{
    NSNumber *_userId;
    NSNumber *_score;
    NSNumber *_rankBonusScore;
    NSNumber *_rank;
    NSNumber *_winningStreak;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *winningStreak; // @synthesize winningStreak=_winningStreak;
@property(retain, nonatomic) NSNumber *rank; // @synthesize rank=_rank;
@property(retain, nonatomic) NSNumber *rankBonusScore; // @synthesize rankBonusScore=_rankBonusScore;
@property(retain, nonatomic) NSNumber *score; // @synthesize score=_score;
@property(retain, nonatomic) NSNumber *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
