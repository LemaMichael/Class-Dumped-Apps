//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTInnerTubeSectionRenderers.h"

@class NSArray, NSMutableArray, NSString, YTICommuteShelfRenderer, YTIFormattedString, YTIMenuRenderer;

@interface YTCommuteShelfViewModel : NSObject <YTInnerTubeSectionRenderers>
{
    YTICommuteShelfRenderer *_model;
    NSMutableArray *_observers;
    _Bool _userNotInterested;
    id <YTCommuteShelfViewModelDelegate> _delegate;
    NSArray *_playlists;
}

@property(retain, nonatomic) NSArray *playlists; // @synthesize playlists=_playlists;
@property(nonatomic) __weak id <YTCommuteShelfViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)sectionRenderers;
- (void)setUserNotInterested:(_Bool)arg1;
- (void)clearObservers;
- (void)removeCommuteShelfModelObserver:(id)arg1;
- (void)addCommuteShelfModelObserver:(id)arg1;
@property(readonly, nonatomic) _Bool shouldHideShelf;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) YTICommuteShelfRenderer *commuteShelfRenderer;
@property(readonly, nonatomic) YTIMenuRenderer *menu;
@property(readonly, nonatomic) YTIFormattedString *title;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

