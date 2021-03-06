//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FriendsTableIndexDelegate-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "SCLeftSwipeableDismissTransitionControllerDelegate-Protocol.h"
#import "SCSearchContentViewControlling-Protocol.h"
#import "SCShakeToReportDelegate-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSString, SCAddFriendsPullToDismissHandler, SCAddFriendsScrollAnimatorDataCoordinator, SCLazy, SCLeftSwipeableTransitionProvider, SCMyFriendsIndexViewScrollActionDataProvider, SCMyFriendsView, SCSearchContentViewControllerContext, SCSearchQueryResultController;
@protocol SCSearchQueryCoordinating, SCSearchSectionCreating;

@interface SCMyFriendsViewController : UIViewController <UICollectionViewDelegate, FriendsTableIndexDelegate, SCLeftSwipeableDismissTransitionControllerDelegate, SCHeaderDelegate, SCShakeToReportDelegate, SCSearchContentViewControlling>
{
    SCLazy *_snapchattersDataFetcher;
    SCSearchQueryResultController *_queryResultController;
    SCMyFriendsIndexViewScrollActionDataProvider *_indexViewScrollActionDataProvider;
    SCMyFriendsView *_myFriendsView;
    SCAddFriendsScrollAnimatorDataCoordinator *_scrollAnimatorDataCoordinator;
    SCAddFriendsPullToDismissHandler *_pullToDismissHandler;
    long long _currentScrollbarSectionPressed;
    long long _previousStatusBarStyle;
    NSString *_searchText;
    id <SCSearchQueryCoordinating> _searchQueryCoordinator;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    SCLeftSwipeableTransitionProvider *_transitionProvider;
    id <SCSearchSectionCreating> _sectionCreator;
}

@property(retain, nonatomic) id <SCSearchSectionCreating> sectionCreator; // @synthesize sectionCreator=_sectionCreator;
@property(retain, nonatomic) SCLeftSwipeableTransitionProvider *transitionProvider; // @synthesize transitionProvider=_transitionProvider;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (void).cxx_destruct;
- (id)defaultProjectNameV2;
- (void)_dismissKeyboard;
- (void)_setupDismissKeyboardForScrollView;
- (void)rightButtonPressed;
- (void)_scrollToSection:(long long)arg1;
- (unsigned long long)_toSectionFromIndex:(BOOL)arg1;
- (void)_scrollToIndex:(BOOL)arg1 withAllFriendsCategories:(id)arg2;
- (void)_scrollToBestFriends;
- (void)scrollToIndex:(BOOL)arg1;
- (void)initiatePageDismissInteractive:(_Bool)arg1;
- (void)didTapCloseButton;
- (_Bool)searchControllerShouldReturnWithSearchText:(id)arg1;
- (void)searchControllerDidChangeToText:(id)arg1 byChangingCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSnapchattersDataFetcher:(id)arg1 searchQueryCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

