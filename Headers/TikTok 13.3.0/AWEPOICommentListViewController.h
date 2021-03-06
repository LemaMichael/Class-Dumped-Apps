//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEPOICommentDetailTableViewCellDelegate-Protocol.h"
#import "AWEPhotosPreviewFadeInTransitionContextProvider-Protocol.h"
#import "AWEPhotosPreviewViewControllerDelegate-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWENavigationBarView, AWEPOICommentListDataController, AWEUILoadingView, NSMutableArray, NSString, UITableView, UIView;

@interface AWEPOICommentListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEPOICommentDetailTableViewCellDelegate, BTDRouterViewControllerProtocol, AWEPhotosPreviewViewControllerDelegate, AWEPhotosPreviewFadeInTransitionContextProvider>
{
    _Bool _shouldTrackStayTime;
    NSString *_referID;
    NSMutableArray *_comments;
    NSMutableArray *_expandStatus;
    long long _detailLevel;
    NSString *_poiID;
    double _offset;
    NSString *_thirdPartyURL;
    AWEPOICommentListDataController *_dataController;
    AWENavigationBarView *_navigationBar;
    UITableView *_tableView;
    UIView *_zoomStartView;
    AWEUILoadingView *_loadingView;
    struct CGPoint _currentOffset;
}

+ (void)__awe__codeRunnerRun_57;
@property(nonatomic) _Bool shouldTrackStayTime; // @synthesize shouldTrackStayTime=_shouldTrackStayTime;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) struct CGPoint currentOffset; // @synthesize currentOffset=_currentOffset;
@property(retain, nonatomic) UIView *zoomStartView; // @synthesize zoomStartView=_zoomStartView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWENavigationBarView *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) AWEPOICommentListDataController *dataController; // @synthesize dataController=_dataController;
@property(copy, nonatomic) NSString *thirdPartyURL; // @synthesize thirdPartyURL=_thirdPartyURL;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(copy, nonatomic) NSString *poiID; // @synthesize poiID=_poiID;
@property(nonatomic) long long detailLevel; // @synthesize detailLevel=_detailLevel;
@property(retain, nonatomic) NSMutableArray *expandStatus; // @synthesize expandStatus=_expandStatus;
@property(retain, nonatomic) NSMutableArray *comments; // @synthesize comments=_comments;
@property(copy, nonatomic) NSString *referID; // @synthesize referID=_referID;
- (void).cxx_destruct;
- (id)fadeInTransitionStartViewForOffset:(long long)arg1;
- (void)userDidPerformOperationOnPhotosPreviewViewController:(id)arg1;
- (id)referString;
- (_Bool)prefersStatusBarHidden;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (void)p_appendComments:(id)arg1;
- (void)p_loadMoreData;
- (void)p_fetchCommentsForPOI;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (void)commentDetailCellDidTapToExpand:(id)arg1;
- (void)commentDetailCell:(id)arg1 didSelectPhoto:(id)arg2 atIndex:(long long)arg3;
- (void)didClickedBack:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)p_setupTableView;
- (void)p_setupNavigationBar;
- (void)p_startTimingForTrack;
- (void)p_trackEventForStayTime;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithComments:(id)arg1 detailLevel:(long long)arg2 thirdPartyURL:(id)arg3 initialOffset:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

