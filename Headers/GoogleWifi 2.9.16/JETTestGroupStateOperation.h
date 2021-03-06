//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETAsynchronousOperation.h"

@class NSDate, NSString, NSTimer;
@protocol JETUserStateProtocol;

@interface JETTestGroupStateOperation : JETAsynchronousOperation
{
    _Bool _conditionMet;
    id <JETUserStateProtocol> _userState;
    NSString *_groupIdentifier;
    CDUnknownBlockType _testBlock;
    NSDate *_timeoutDate;
    NSTimer *_refreshTimer;
}

@property(retain, nonatomic) NSTimer *refreshTimer; // @synthesize refreshTimer=_refreshTimer;
@property(retain, nonatomic) NSDate *timeoutDate; // @synthesize timeoutDate=_timeoutDate;
@property(nonatomic) _Bool conditionMet; // @synthesize conditionMet=_conditionMet;
@property(copy, nonatomic) CDUnknownBlockType testBlock; // @synthesize testBlock=_testBlock;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(retain, nonatomic) id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
- (void).cxx_destruct;
- (void)completeOperation;
- (void)expireIfTimeoutDateHasPassed;
- (void)testGroup:(id)arg1;
- (void)refreshGroupAndPerformTest;
- (void)refreshGroupWithCompletion:(CDUnknownBlockType)arg1;
- (void)main;
- (void)start;

@end

