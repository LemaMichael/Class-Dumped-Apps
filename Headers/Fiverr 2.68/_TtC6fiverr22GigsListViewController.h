//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerFetchDataProtocol-Protocol.h"
#import "UIViewControllerImpressionableProtocol-Protocol.h"
#import "UIViewControllerRefreshCellProtocol-Protocol.h"
#import "UIViewControllerRemoveFromParentProtocol-Protocol.h"

@class UIButton, UICollectionView, UIView, _TtC6fiverr16GigListViewModel, _TtC6fiverr23GigListNormalHeaderView;
@protocol _TtP6fiverr29GigListViewControllerProtocol_;

@interface _TtC6fiverr22GigsListViewController : UIViewController <UIViewControllerFetchDataProtocol, UIViewControllerRefreshCellProtocol, UIViewControllerRemoveFromParentProtocol, UIViewControllerImpressionableProtocol>
{
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: delegate
    // Error parsing type: , name: initializedHeaders
    // Error parsing type: , name: showsBucketHeader
    // Error parsing type: , name: cmsGigsCarouselModel
    // Error parsing type: , name: analyticsPage
    // Error parsing type: , name: canSendAnalytics
    // Error parsing type: , name: $__lazy_storage_$_impressionManager
    // Error parsing type: , name: editingHeaderView
    // Error parsing type: , name: clearAllButton
    // Error parsing type: , name: doneButton
    // Error parsing type: , name: normalHeaderView
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: headerTopSeperatorView
    // Error parsing type: , name: headerButtomSeperatorView
    // Error parsing type: , name: footerViewContainer
    // Error parsing type: , name: footerButton
    // Error parsing type: , name: isPlayingNowViewController
}

+ (id)createWith:(id)arg1 and:(id)arg2 in:(long long)arg3 indexToExclude:(id)arg4 isProOriented:(_Bool)arg5 seeAllText:(id)arg6;
- (void).cxx_destruct;
- (void)canSendAnalyticsForSearch;
- (id)getSelectedGigs;
- (void)setBulkSelectionModeWithActive:(_Bool)arg1;
- (void)setEmptyDataSetDelegateWithEmptyDataSetDelegate:(id)arg1;
- (void)setEmptyDataSetSourceWithEmptyDataSetSource:(id)arg1;
- (void)removeInfiniteScroll;
- (void)finishInfiniteScroll;
- (void)addInfinityScrollWithHandler:(CDUnknownBlockType)arg1;
- (void)removeGigItemWithGigItem:(id)arg1;
- (void)handleStreamPlayerPlaybackStateDidChangeNotificationWithNotification:(id)arg1;
- (void)handleStreamPlayerTrackDidChangeNotificationWithNotification:(id)arg1;
- (void)handleStreamPlayerTrackTimeDidChangeNotificationWithNotification:(id)arg1;
- (void)reloadListLayout:(_Bool)arg1;
- (void)reloadData;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) __weak UIButton *footerButton; // @synthesize footerButton;
@property(nonatomic) __weak UIView *footerViewContainer; // @synthesize footerViewContainer;
@property(nonatomic) __weak UIView *headerButtomSeperatorView; // @synthesize headerButtomSeperatorView;
@property(nonatomic) __weak UIView *headerTopSeperatorView; // @synthesize headerTopSeperatorView;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView;
@property(nonatomic) __weak _TtC6fiverr23GigListNormalHeaderView *normalHeaderView; // @synthesize normalHeaderView;
@property(nonatomic) __weak UIButton *doneButton; // @synthesize doneButton;
@property(nonatomic) __weak UIButton *clearAllButton; // @synthesize clearAllButton;
@property(nonatomic) __weak UIView *editingHeaderView; // @synthesize editingHeaderView;
@property(nonatomic) _Bool showsBucketHeader; // @synthesize showsBucketHeader;
@property(nonatomic) __weak id <_TtP6fiverr29GigListViewControllerProtocol_> delegate; // @synthesize delegate;
@property(nonatomic, retain) _TtC6fiverr16GigListViewModel *viewModel; // @synthesize viewModel;

@end
