//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWENewUserGuideManager : NSObject
{
    _Bool _isShowingNewUserGuide;
}

+ (void)resetAllGuides;
+ (void)setDoubleTapToLikeGuideEnabled:(_Bool)arg1;
+ (void)showDoubleTapToLikeGuide;
+ (CDUnknownBlockType)doubleTapToLikeGuideEventObserver;
+ (void)setPlaylistSwipeUpGuideEnabled:(_Bool)arg1;
+ (CDUnknownBlockType)playlistSwipeUpGuideEventObserver;
+ (void)setSwipeUpToLikeGuideEnabled:(_Bool)arg1;
+ (void)showSwipeUpGuideAfterDelay:(double)arg1 completion:(CDUnknownBlockType)arg2;
+ (CDUnknownBlockType)swipeUpGuideEventObserver;
+ (id)eventObservers;
+ (void)didReceiveEvent:(unsigned long long)arg1 sender:(id)arg2;
+ (_Bool)isPlaylistSwipeUpGuideEnabled;
+ (_Bool)isNewSwipeUpGuideStyleEnabled;
+ (_Bool)isNewDoubleTapToLikeGuideStyleEnabled;
+ (void)didChangeABConfigurations;
+ (_Bool)isABTestConfigurationReady;
+ (void)endDisplayingGuideWithLifeTime:(id)arg1;
+ (void)beginDisplayingGuideWithLifeTime:(id)arg1;
+ (_Bool)isDisplayingGuide;
+ (id)displayingGuide;
@property(nonatomic) _Bool isShowingNewUserGuide; // @synthesize isShowingNewUserGuide=_isShowingNewUserGuide;

@end

