//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"
#import "HTSLiveFilterReactions-Protocol.h"
#import "IESLiveScrollFilterPickerViewDelegate-Protocol.h"

@class HTSLiveFilterGuideView, HTSLiveFilterStore, HTSLiveToolbarItem, IESLiveScrollFilterPickerView, NSString, NSTimer, RACScopedDisposable, UITapGestureRecognizer;
@protocol HTSLiveCameraEffectProvider, HTSLiveFilterActions, HTSLiveToolbarProvider, HTSLiveViewHierarchyProvider, IESLiveEnvironment, IESLiveSettings, IESLiveTracker;

@interface HTSLiveFilterFragment : NSObject <IESLiveScrollFilterPickerViewDelegate, HTSLiveFilterReactions, HTSLiveComponent>
{
    HTSLiveFilterStore *_filterStore;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <HTSLiveCameraEffectProvider> _cameraProvider;
    id <HTSLiveToolbarProvider> _toolbarProvider;
    RACScopedDisposable *_disposable;
    id <IESLiveTracker> _tracker;
    id <IESLiveSettings> _settings;
    id <HTSLiveFilterActions> _actionCreator;
    id <IESLiveEnvironment> _appTarget;
    HTSLiveFilterGuideView *_filterGuideView;
    UITapGestureRecognizer *_tapGesture;
    IESLiveScrollFilterPickerView *_scrollFilterPicker;
    HTSLiveToolbarItem *_filterItem;
    NSTimer *_filterReportTimer;
    unsigned long long _filterEffectivelyUseTime;
    unsigned long long _lastSelectedIndex;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
@property(nonatomic) unsigned long long lastSelectedIndex; // @synthesize lastSelectedIndex=_lastSelectedIndex;
@property(nonatomic) unsigned long long filterEffectivelyUseTime; // @synthesize filterEffectivelyUseTime=_filterEffectivelyUseTime;
@property(retain, nonatomic) NSTimer *filterReportTimer; // @synthesize filterReportTimer=_filterReportTimer;
@property(nonatomic) __weak HTSLiveToolbarItem *filterItem; // @synthesize filterItem=_filterItem;
@property(retain, nonatomic) IESLiveScrollFilterPickerView *scrollFilterPicker; // @synthesize scrollFilterPicker=_scrollFilterPicker;
@property(nonatomic) __weak UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak HTSLiveFilterGuideView *filterGuideView; // @synthesize filterGuideView=_filterGuideView;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <HTSLiveFilterActions> actionCreator; // @synthesize actionCreator=_actionCreator;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) RACScopedDisposable *disposable; // @synthesize disposable=_disposable;
@property(nonatomic) __weak id <HTSLiveToolbarProvider> toolbarProvider; // @synthesize toolbarProvider=_toolbarProvider;
@property(nonatomic) __weak id <HTSLiveCameraEffectProvider> cameraProvider; // @synthesize cameraProvider=_cameraProvider;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) HTSLiveFilterStore *filterStore; // @synthesize filterStore=_filterStore;
- (void).cxx_destruct;
- (void)showRedDotOnFilterItem:(_Bool)arg1;
- (void)scrollFilterPickerView:(id)arg1 switchToFirstPath:(id)arg2 fromSecondPath:(id)arg3 dirction:(long long)arg4 progress:(double)arg5;
- (void)scrollFilterPickerView:(id)arg1 didSelectFilter:(id)arg2 isSwiping:(_Bool)arg3;
- (id)loadScrollFilter;
- (void)clearFilterReportTimer;
- (void)reportFilterEffectiveUse;
- (void)removeFilterGuideView;
- (void)changeFilterForcefullyWithIndex:(unsigned long long)arg1;
- (void)changeFilter;
- (void)addFilterPicker;
- (void)componentWillUnmount;
- (void)componentDidMount;
- (void)showFilterPickerView;
- (void)loadToolbarItem;
- (id)initWithStore:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

