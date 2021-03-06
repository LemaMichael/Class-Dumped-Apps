//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "DZNEmptyDataSetDelegate-Protocol.h"
#import "DZNEmptyDataSetSource-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEProgressLoadingView, NSArray, NSString, UITableView;

@interface AWEOAuthManageViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, BTDRouterViewControllerProtocol, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate>
{
    AWEProgressLoadingView *_progressView;
    UITableView *_tableView;
    NSArray *_items;
}

+ (void)__awe__codeRunnerRun_32;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWEProgressLoadingView *progressView; // @synthesize progressView=_progressView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)verticalOffsetForEmptyDataSet:(id)arg1;
- (id)customViewForEmptyDataSet:(id)arg1;
- (void)removeAppWithID:(id)arg1;
- (void)fetchAndRefresh;
- (void)showLoadingViewWithTitle:(id)arg1;
- (void)hideLoadingView;
- (void)backBtnClick:(id)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

