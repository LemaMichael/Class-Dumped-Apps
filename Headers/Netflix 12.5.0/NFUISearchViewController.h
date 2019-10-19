//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "DZNEmptyDataSetDelegate-Protocol.h"
#import "DZNEmptyDataSetSource-Protocol.h"
#import "NFUISearchBarDelegateProtocol-Protocol.h"
#import "NFUISearchPrequeryListControllerDelegate-Protocol.h"
#import "NFUISearchResultsListViewModelDelegateProtocol-Protocol.h"
#import "NFUITabContext-Protocol.h"
#import "NFUITouchGestureDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "ViewControllerOverContextDelegateProtocol-Protocol.h"

@class NFUILabel, NFUISearchBar, NFUISearchDebugger, NFUISearchPrequeryListController, NFUISearchResultsListViewModel, NFUITabBarItem, NFUITouchGestureRecognizer, NSLayoutConstraint, NSNumber, NSString, UICollectionView, UIView;
@protocol _TtP8ArgoCore15ACFSubscription_;

@interface NFUISearchViewController : UIViewController <NFUISearchPrequeryListControllerDelegate, NFUISearchResultsListViewModelDelegateProtocol, NFUISearchBarDelegateProtocol, ViewControllerOverContextDelegateProtocol, NFUITouchGestureDelegate, UITextFieldDelegate, DZNEmptyDataSetDelegate, DZNEmptyDataSetSource, UIGestureRecognizerDelegate, NFUITabContext>
{
    double _viewDidLoadTime;
    double _viewWillAppearTime;
    _Bool _fetchingCategories;
    struct CGRect keyboardDestFrame;
    double keyboardAnimationDuration;
    long long keyboardAnimationCurve;
    _Bool _becomeFirstResponderOnAppear;
    _Bool _isFetchingPrequeryList;
    _Bool _isShowingDPFromPrequeryList;
    NFUITabBarItem *_nfui_tabBarItem;
    NSString *_pendingSearchTerm;
    unsigned long long _activeViewType;
    NFUISearchBar *_searchBarContainer;
    UICollectionView *_resultsListContainer;
    UICollectionView *_prequeryListContainer;
    NFUISearchResultsListViewModel *_searchResultsListViewModel;
    NFUISearchPrequeryListController *_prequeryListController;
    NFUILabel *_noResultsLabel;
    NSLayoutConstraint *_bottomGuide;
    NFUITouchGestureRecognizer *_resultsGestureRecognizer;
    NFUITouchGestureRecognizer *_categoriesGestureRecognizer;
    NFUITouchGestureRecognizer *_prequeryListGestureRecognizer;
    NFUISearchDebugger *_debugger;
    UIView *_backgroundView;
    NSNumber *_debugMetricId;
    id <_TtP8ArgoCore15ACFSubscription_> _searchOperation;
}

+ (id)searchViewController:(id)arg1;
@property(retain, nonatomic) id <_TtP8ArgoCore15ACFSubscription_> searchOperation; // @synthesize searchOperation=_searchOperation;
@property(nonatomic) _Bool isShowingDPFromPrequeryList; // @synthesize isShowingDPFromPrequeryList=_isShowingDPFromPrequeryList;
@property(nonatomic) _Bool isFetchingPrequeryList; // @synthesize isFetchingPrequeryList=_isFetchingPrequeryList;
@property(retain, nonatomic) NSNumber *debugMetricId; // @synthesize debugMetricId=_debugMetricId;
@property(nonatomic) __weak UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) NFUISearchDebugger *debugger; // @synthesize debugger=_debugger;
@property(retain, nonatomic) NFUITouchGestureRecognizer *prequeryListGestureRecognizer; // @synthesize prequeryListGestureRecognizer=_prequeryListGestureRecognizer;
@property(retain, nonatomic) NFUITouchGestureRecognizer *categoriesGestureRecognizer; // @synthesize categoriesGestureRecognizer=_categoriesGestureRecognizer;
@property(retain, nonatomic) NFUITouchGestureRecognizer *resultsGestureRecognizer; // @synthesize resultsGestureRecognizer=_resultsGestureRecognizer;
@property(nonatomic) __weak NSLayoutConstraint *bottomGuide; // @synthesize bottomGuide=_bottomGuide;
@property(nonatomic) __weak NFUILabel *noResultsLabel; // @synthesize noResultsLabel=_noResultsLabel;
@property(retain, nonatomic) NFUISearchPrequeryListController *prequeryListController; // @synthesize prequeryListController=_prequeryListController;
@property(retain, nonatomic) NFUISearchResultsListViewModel *searchResultsListViewModel; // @synthesize searchResultsListViewModel=_searchResultsListViewModel;
@property(retain, nonatomic) UICollectionView *prequeryListContainer; // @synthesize prequeryListContainer=_prequeryListContainer;
@property(nonatomic) __weak UICollectionView *resultsListContainer; // @synthesize resultsListContainer=_resultsListContainer;
@property(nonatomic) __weak NFUISearchBar *searchBarContainer; // @synthesize searchBarContainer=_searchBarContainer;
@property(nonatomic) unsigned long long activeViewType; // @synthesize activeViewType=_activeViewType;
@property(nonatomic) _Bool becomeFirstResponderOnAppear; // @synthesize becomeFirstResponderOnAppear=_becomeFirstResponderOnAppear;
@property(copy, nonatomic) NSString *pendingSearchTerm; // @synthesize pendingSearchTerm=_pendingSearchTerm;
@property(retain) NFUITabBarItem *nfui_tabBarItem; // @synthesize nfui_tabBarItem=_nfui_tabBarItem;
- (void).cxx_destruct;
- (void)playTitleWithPlaybackRequst:(id)arg1;
- (void)showDisplayPageWithDisplayPageRequest:(id)arg1;
- (void)setDeeplinkPayload:(id)arg1;
- (void)setNFUITabBarItem:(id)arg1;
- (void)selectedTab:(id)arg1 comingFromTab:(id)arg2;
- (void)emptyDataSetDidTapButton:(id)arg1;
- (_Bool)emptyDataSetShouldDisplay:(id)arg1;
- (id)buttonTitleForEmptyDataSet:(id)arg1 forState:(unsigned long long)arg2;
- (id)titleForEmptyDataSet:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewControllerOverContextDidDisappear:(id)arg1;
- (void)viewControllerOverContextWillDisappear:(id)arg1;
- (void)viewControllerOverContextWillAppear:(id)arg1;
- (void)searchTextCleared;
- (void)didSelectSearchResult:(id)arg1;
- (void)adjustFrameFromKeyboard:(_Bool)arg1;
- (void)searchFieldEditingChanged:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)cancelButtonTapped;
- (void)closeSearchTapped;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)handleTouchesBegan;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)fetchPrequeryListShouldUserRetryUsability:(_Bool)arg1;
- (id)activeScrollView;
- (void)setActiveViewType:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)currentActiveViewType;
- (id)activeViewTypeScrollView;
- (void)clearSearchResults;
- (void)fetchSearchResultsFor:(id)arg1;
- (void)unsubscribe;
- (void)subscribe;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
