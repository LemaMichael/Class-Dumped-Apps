//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeUIComponentFactory-Protocol.h"

@class NSString, SPTHomeUILogger;
@protocol GLUETheme, SPTLocalSettings, SPTPlayer;

@interface SPTHomeUIComponentFactoryImplementation : NSObject <SPTHomeUIComponentFactory>
{
    id <GLUETheme> _theme;
    id <SPTPlayer> _player;
    SPTHomeUILogger *_logger;
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) SPTHomeUILogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) __weak id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (id)createHabitsComponent;
- (id)createQuickPlayCardComponent;
- (id)createQuickPlayComponent;
- (id)createSectionHeaderComponent;
- (id)createRowLargeComponent;
- (id)createPromoV2Component;
- (id)createPromoComponent;
- (id)createCarouselComponent;
- (id)createBannerCardComponent;
- (id)createLargeCardComponent;
- (id)createMediumCardComponent;
- (id)createSmallCardComponent;
- (id)createBannerShelfComponent;
- (void)unregisterHomeComponentsFromComponentRegistry:(id)arg1;
- (void)registerHomeComponentsToComponentRegistry:(id)arg1;
- (id)provideHomeHubComponents;
- (id)initWithTheme:(id)arg1 player:(id)arg2 logger:(id)arg3 localSettings:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

