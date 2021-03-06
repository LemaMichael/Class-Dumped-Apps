//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IESLivePageingViewDataSource-Protocol.h"
#import "IESLivePageingViewDelegate-Protocol.h"

@class IESLivePagingView, IESLiveRoomFilter, NSArray, NSString, UILabel;
@protocol IESLiveLanguageService, IESLiveScrollFilterPickerViewDelegate;

@interface IESLiveScrollFilterPickerView : UIView <IESLivePageingViewDelegate, IESLivePageingViewDataSource>
{
    _Bool _enableFilterName;
    NSArray *_filters;
    IESLiveRoomFilter *_currentFilter;
    id <IESLiveScrollFilterPickerViewDelegate> _delegate;
    IESLivePagingView *_pagingView;
    UIView *_emptyView;
    long long _currentIndex;
    UILabel *_filterTitleLabel;
    double _filterLabelPositionY;
    id <IESLiveLanguageService> _languageService;
}

@property(retain, nonatomic) id <IESLiveLanguageService> languageService; // @synthesize languageService=_languageService;
@property(nonatomic) _Bool enableFilterName; // @synthesize enableFilterName=_enableFilterName;
@property(nonatomic) double filterLabelPositionY; // @synthesize filterLabelPositionY=_filterLabelPositionY;
@property(retain, nonatomic) UILabel *filterTitleLabel; // @synthesize filterTitleLabel=_filterTitleLabel;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) IESLivePagingView *pagingView; // @synthesize pagingView=_pagingView;
@property(nonatomic) __weak id <IESLiveScrollFilterPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IESLiveRoomFilter *currentFilter; // @synthesize currentFilter=_currentFilter;
@property(retain, nonatomic) NSArray *filters; // @synthesize filters=_filters;
- (void).cxx_destruct;
- (void)pagingViewDidEndDecelerating:(id)arg1 dragEndPosition:(struct CGPoint)arg2;
- (void)pagingView:(id)arg1 didPageToIndex:(long long)arg2 isScrolled:(_Bool)arg3;
- (void)pagingView:(id)arg1 visiblePage:(id)arg2 index:(unsigned long long)arg3 offsetDidChange:(double)arg4;
- (long long)pagingView:(id)arg1 initedIndexWithIndex:(long long)arg2;
- (id)pagingView:(id)arg1 viewAtIndex:(long long)arg2 identifier:(id *)arg3;
- (unsigned long long)numberOfPageInPagingView:(id)arg1;
- (void)setCurrentIndex:(long long)arg1 isSwiping:(_Bool)arg2;
- (void)setCurrentFilter:(id)arg1 isSwiping:(_Bool)arg2;
- (void)showFilterName:(id)arg1 slidePosition:(_Bool)arg2 force:(_Bool)arg3;
- (double)_filterTitleLabelPositionY;
- (void)loadFilters;
- (void)enableFilterName:(_Bool)arg1;
- (void)updateFilterPositionY:(double)arg1;
- (void)setInitialFilter:(id)arg1;
- (void)setInitialFilterIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

