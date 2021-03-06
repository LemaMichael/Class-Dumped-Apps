//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEIMOfficialTableViewCellDelegate-Protocol.h"
#import "AWEIMOfficialViewControllerProtocol-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEIMNotificationListDataController, NSMutableSet, NSString, UITableView;

@interface AWEIMOfficialViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEIMOfficialTableViewCellDelegate, BTDRouterViewControllerProtocol, AWEIMOfficialViewControllerProtocol>
{
    _Bool _needTrackEvent;
    _Bool _showNav;
    UITableView *_tableView;
    AWEIMNotificationListDataController *_dataController;
    long long _unreadCount;
    long long _notificaitonType;
    NSString *_enterFrom;
    NSString *_navTitle;
    NSMutableSet *_visbleModelIDSet;
}

+ (void)__awe__codeRunnerRun_45;
@property(retain, nonatomic) NSMutableSet *visbleModelIDSet; // @synthesize visbleModelIDSet=_visbleModelIDSet;
@property(nonatomic) _Bool showNav; // @synthesize showNav=_showNav;
@property(copy, nonatomic) NSString *navTitle; // @synthesize navTitle=_navTitle;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(nonatomic) _Bool needTrackEvent; // @synthesize needTrackEvent=_needTrackEvent;
@property(nonatomic) long long notificaitonType; // @synthesize notificaitonType=_notificaitonType;
@property(nonatomic) long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(retain, nonatomic) AWEIMNotificationListDataController *dataController; // @synthesize dataController=_dataController;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)_poiReserveTrackerParamsForModel:(id)arg1;
- (void)p_trackPushEnterEvent;
- (id)_trackAccountType;
- (void)trackOfficialMessageWithAccountType:(id)arg1 model:(id)arg2 actionType:(id)arg3 extraParams:(id)arg4;
- (void)trackFriendNotice:(id)arg1 enterMethod:(id)arg2;
- (double)footerInset;
- (_Bool)shouldHideNoMoreText;
- (void)reloadData;
- (void)readAllMessage;
- (void)p_setupUI;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)backBtnClicked:(id)arg1;
- (void)p_endRefreshing;
- (void)p_loadMoreData;
- (void)p_fetchData;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

