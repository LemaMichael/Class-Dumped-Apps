//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCCameraBarButtonItem.h"

@class SCHovaTabBarMemoriesItem, SCTabBarMemoriesItemStatusController;

@interface SCMemoriesNavigationBarButtonItem : SCCameraBarButtonItem
{
    CDUnknownBlockType _actionHandler;
    SCTabBarMemoriesItemStatusController *_memoriesItemStatusController;
    SCHovaTabBarMemoriesItem *_tabItem;
}

@property(retain, nonatomic) SCHovaTabBarMemoriesItem *tabItem; // @synthesize tabItem=_tabItem;
@property(retain, nonatomic) SCTabBarMemoriesItemStatusController *memoriesItemStatusController; // @synthesize memoriesItemStatusController=_memoriesItemStatusController;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
- (void).cxx_destruct;
- (void)buttonTapped:(id)arg1;
- (double)alpha;
- (void)setAlpha:(double)arg1;
- (id)initWithUserSession:(id)arg1;

@end

