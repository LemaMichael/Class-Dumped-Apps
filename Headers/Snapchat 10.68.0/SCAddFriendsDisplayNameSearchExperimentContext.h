//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@interface SCAddFriendsDisplayNameSearchExperimentContext : SCExperimentContext
{
    _Bool _addfriendsEnabled;
    _Bool _addfriendsInRegEnabled;
    _Bool _sendToEnabled;
}

@property(readonly, nonatomic) _Bool sendToEnabled; // @synthesize sendToEnabled=_sendToEnabled;
@property(readonly, nonatomic) _Bool addfriendsInRegEnabled; // @synthesize addfriendsInRegEnabled=_addfriendsInRegEnabled;
@property(readonly, nonatomic) _Bool addfriendsEnabled; // @synthesize addfriendsEnabled=_addfriendsEnabled;
- (void)setupParameters;
- (id)experimentName;

@end
