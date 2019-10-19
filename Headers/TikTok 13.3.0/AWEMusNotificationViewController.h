//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEMNotificationViewControllerProtocal-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEMusHotLiveNotificationTableViewCell, AWEMusNotificationListDataController, AWEUILoadingView, NSString, UIButton, UITableView;

@interface AWEMusNotificationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserMessage, AWEMNotificationViewControllerProtocal>
{
    _Bool _onceFlag;
    _Bool _enableTrackLiveShow;
    _Bool _enableTrackHotLiveShow;
    AWEUILoadingView *_loadingView;
    UITableView *_tableView;
    double _cellButtonWidth;
    UIButton *_contactBtn;
    AWEMusNotificationListDataController *_dataController;
    AWEMusHotLiveNotificationTableViewCell *_liveCell;
}

@property(nonatomic) _Bool enableTrackHotLiveShow; // @synthesize enableTrackHotLiveShow=_enableTrackHotLiveShow;
@property(nonatomic) _Bool enableTrackLiveShow; // @synthesize enableTrackLiveShow=_enableTrackLiveShow;
@property(retain, nonatomic) AWEMusHotLiveNotificationTableViewCell *liveCell; // @synthesize liveCell=_liveCell;
@property(retain, nonatomic) AWEMusNotificationListDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) UIButton *contactBtn; // @synthesize contactBtn=_contactBtn;
@property(nonatomic) _Bool onceFlag; // @synthesize onceFlag=_onceFlag;
@property(nonatomic) double cellButtonWidth; // @synthesize cellButtonWidth=_cellButtonWidth;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)p_trackerInnerMessageWithAction:(id)arg1 indexPath:(id)arg2;
- (void)trackDataCellDidSelect:(id)arg1 indexPath:(id)arg2;
- (void)trackDataCellWillShow:(id)arg1 indexPath:(id)arg2;
- (id)accountTypeOfModel:(id)arg1;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)updateFollowRequestCount:(id)arg1;
- (void)didFinishLogout;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)modelForRowAtIndexPath:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)calculateButtonWidth;
- (void)languageChangedNotification:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)contactBtnClicked:(id)arg1;
- (void)dismissEmptyView;
- (void)showEmptyView;
- (void)updateUnreadCount;
- (void)_addObservers;
- (void)reloadTableView;
- (void)endRefreshing;
- (void)loadMoreData;
- (void)refreshHotLiveData;
- (void)refreshData;
- (void)markReadNotificationAndRefresh;
- (void)refreshNotificationData;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)registerTableViewClass;
- (void)setUpUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
