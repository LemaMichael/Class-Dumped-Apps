//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCFriendsFeedUpdateServices : NSObject
{
    SCLazy *_friendsFeedLegacyGroupUpdatesDataCoordinator;
    SCLazy *_friendsFeedSnapchatterUpdatesDataCoordinator;
}

@property(readonly, nonatomic) SCLazy *friendsFeedSnapchatterUpdatesDataCoordinator; // @synthesize friendsFeedSnapchatterUpdatesDataCoordinator=_friendsFeedSnapchatterUpdatesDataCoordinator;
@property(readonly, nonatomic) SCLazy *friendsFeedLegacyGroupUpdatesDataCoordinator; // @synthesize friendsFeedLegacyGroupUpdatesDataCoordinator=_friendsFeedLegacyGroupUpdatesDataCoordinator;
- (void).cxx_destruct;
- (id)initWithFriendsFeedLegacyGroupUpdatesDataCoordinator:(id)arg1 friendsFeedSnapchatterUpdatesDataCoordinator:(id)arg2;

@end
