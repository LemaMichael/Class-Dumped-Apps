//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEFeedMessage-Protocol.h"
#import "AWENearbyProtocol-Protocol.h"
#import "AWENearbyVcProtocol-Protocol.h"
#import "AWEPublishTaskMessage-Protocol.h"
#import "AWEReferenceTrackable-Protocol.h"
#import "AWERegionMessage-Protocol.h"
#import "AWESlidingViewControllerDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"
#import "HTSAccountMessage-Protocol.h"

@class AWEAnimatedButton, AWEBubble, AWEConcernDataController, AWEDiscoverFeedEntranceView, AWEFeedSegmentedControl, AWEFeedSlidingViewController, AWEFeedTableViewController, AWEHotListDataController, AWELiveFeedEntranceView, AWENewNearbyViewController, AWESmartFeedDataController, AWETeenModeFeedEntranceView, AWEUILoadingView, NSArray, NSMutableArray, NSString, NSTimer, UIButton, UIImageView, UILabel, UIView;
@protocol AWEFeedTabItemViewControllerProtocol;

@interface AWEFeedContainerViewController : UIViewController <CAAnimationDelegate, BTDRouterViewControllerProtocol, AWEUserMessage, HTSAccountMessage, AWEPublishTaskMessage, AWEFeedMessage, AWERegionMessage, AWESlidingViewControllerDelegate, AWENearbyProtocol, AWENearbyVcProtocol, AWEReferenceTrackable>
{
    _Bool _forbidHideStatusBar;
    _Bool _shouldShowLoadingView;
    _Bool _shouldShowConcernNewReminderView;
    _Bool _isAppear;
    _Bool _hasShowVideoRecoveryAlert;
    _Bool _processingLogin;
    _Bool _hasConfiguredSlidingSelectedIndex;
    _Bool _navBarAnimated;
    _Bool _isSliding;
    _Bool _discoverGuideAnimating;
    _Bool _hotSearchGuideAnimating;
    _Bool _isStoryOpened;
    long long _currentIndex;
    AWELiveFeedEntranceView *_liveEntranceView;
    AWEDiscoverFeedEntranceView *_discoverEntranceView;
    AWETeenModeFeedEntranceView *_teenModeEntranceView;
    AWEBubble *_discoverGuideBubbleView;
    UILabel *_refreshLabel;
    UIImageView *_cornerMaskView;
    AWEAnimatedButton *_reportButton;
    AWEUILoadingView *_loadingView;
    NSArray *_segmentedControlTitles;
    NSMutableArray *_orderedViewControllers;
    AWEFeedTableViewController *_concernViewController;
    AWEHotListDataController *_hotDataController;
    AWEConcernDataController *_myConcernDataController;
    AWESmartFeedDataController *_myConcernSmartFeedDataController;
    UIViewController<AWEFeedTabItemViewControllerProtocol> *_hotViewController;
    UIViewController<AWEFeedTabItemViewControllerProtocol> *_myConcernController;
    unsigned long long _hotFeedStyle;
    UIButton *_concernNewReminderView;
    AWENewNearbyViewController *_nearbyViewController;
    UIViewController<AWEFeedTabItemViewControllerProtocol> *_pendingViewController;
    AWEFeedSlidingViewController *_slidingViewController;
    UIView *_freshViewTopGradientView;
    NSMutableArray *_firstLevelFollowTabShowArray;
    NSMutableArray *_secondLevelFollowTabShowArray;
    NSMutableArray *_thirdLevelFollowTabShowArray;
    NSMutableArray *_liveShowRecordArray;
    UIButton *_silentControlBtn;
    UIView *_hotSearchGuideView;
    UIButton *_guideDiscoverButton;
    UILabel *_guideDiscoverTitleLabel;
    UIButton *_guideDiscoverCancelButton;
    UIView *_hotSearchBackgroundView;
    AWEFeedSegmentedControl *_segmentControl;
    UIView *_redDot;
    UIView *_yellowDot;
    unsigned long long _feedTabRedDotType;
    NSTimer *_followRedDotTimer;
    NSTimer *_hotRedDotTimer;
}

@property(retain, nonatomic) NSTimer *hotRedDotTimer; // @synthesize hotRedDotTimer=_hotRedDotTimer;
@property(retain, nonatomic) NSTimer *followRedDotTimer; // @synthesize followRedDotTimer=_followRedDotTimer;
@property(nonatomic) unsigned long long feedTabRedDotType; // @synthesize feedTabRedDotType=_feedTabRedDotType;
@property(retain, nonatomic) UIView *yellowDot; // @synthesize yellowDot=_yellowDot;
@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) AWEFeedSegmentedControl *segmentControl; // @synthesize segmentControl=_segmentControl;
@property(retain, nonatomic) UIView *hotSearchBackgroundView; // @synthesize hotSearchBackgroundView=_hotSearchBackgroundView;
@property(retain, nonatomic) UIButton *guideDiscoverCancelButton; // @synthesize guideDiscoverCancelButton=_guideDiscoverCancelButton;
@property(retain, nonatomic) UILabel *guideDiscoverTitleLabel; // @synthesize guideDiscoverTitleLabel=_guideDiscoverTitleLabel;
@property(retain, nonatomic) UIButton *guideDiscoverButton; // @synthesize guideDiscoverButton=_guideDiscoverButton;
@property(retain, nonatomic) UIView *hotSearchGuideView; // @synthesize hotSearchGuideView=_hotSearchGuideView;
@property(retain, nonatomic) UIButton *silentControlBtn; // @synthesize silentControlBtn=_silentControlBtn;
@property(nonatomic) _Bool isStoryOpened; // @synthesize isStoryOpened=_isStoryOpened;
@property(nonatomic) _Bool hotSearchGuideAnimating; // @synthesize hotSearchGuideAnimating=_hotSearchGuideAnimating;
@property(nonatomic) _Bool discoverGuideAnimating; // @synthesize discoverGuideAnimating=_discoverGuideAnimating;
@property(retain, nonatomic) NSMutableArray *liveShowRecordArray; // @synthesize liveShowRecordArray=_liveShowRecordArray;
@property(retain, nonatomic) NSMutableArray *thirdLevelFollowTabShowArray; // @synthesize thirdLevelFollowTabShowArray=_thirdLevelFollowTabShowArray;
@property(retain, nonatomic) NSMutableArray *secondLevelFollowTabShowArray; // @synthesize secondLevelFollowTabShowArray=_secondLevelFollowTabShowArray;
@property(retain, nonatomic) NSMutableArray *firstLevelFollowTabShowArray; // @synthesize firstLevelFollowTabShowArray=_firstLevelFollowTabShowArray;
@property(nonatomic) _Bool isSliding; // @synthesize isSliding=_isSliding;
@property(retain, nonatomic) UIView *freshViewTopGradientView; // @synthesize freshViewTopGradientView=_freshViewTopGradientView;
@property(nonatomic) _Bool navBarAnimated; // @synthesize navBarAnimated=_navBarAnimated;
@property(nonatomic) _Bool hasConfiguredSlidingSelectedIndex; // @synthesize hasConfiguredSlidingSelectedIndex=_hasConfiguredSlidingSelectedIndex;
@property(retain, nonatomic) AWEFeedSlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
@property(retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *pendingViewController; // @synthesize pendingViewController=_pendingViewController;
@property(nonatomic) _Bool processingLogin; // @synthesize processingLogin=_processingLogin;
@property(nonatomic) _Bool hasShowVideoRecoveryAlert; // @synthesize hasShowVideoRecoveryAlert=_hasShowVideoRecoveryAlert;
@property(nonatomic) _Bool isAppear; // @synthesize isAppear=_isAppear;
@property(retain, nonatomic) AWENewNearbyViewController *nearbyViewController; // @synthesize nearbyViewController=_nearbyViewController;
@property(nonatomic) _Bool shouldShowConcernNewReminderView; // @synthesize shouldShowConcernNewReminderView=_shouldShowConcernNewReminderView;
@property(retain, nonatomic) UIButton *concernNewReminderView; // @synthesize concernNewReminderView=_concernNewReminderView;
@property(nonatomic) unsigned long long hotFeedStyle; // @synthesize hotFeedStyle=_hotFeedStyle;
@property(retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *myConcernController; // @synthesize myConcernController=_myConcernController;
@property(retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *hotViewController; // @synthesize hotViewController=_hotViewController;
@property(retain, nonatomic) AWESmartFeedDataController *myConcernSmartFeedDataController; // @synthesize myConcernSmartFeedDataController=_myConcernSmartFeedDataController;
@property(retain, nonatomic) AWEConcernDataController *myConcernDataController; // @synthesize myConcernDataController=_myConcernDataController;
@property(retain, nonatomic) AWEHotListDataController *hotDataController; // @synthesize hotDataController=_hotDataController;
@property(retain, nonatomic) AWEFeedTableViewController *concernViewController; // @synthesize concernViewController=_concernViewController;
@property(retain, nonatomic) NSMutableArray *orderedViewControllers; // @synthesize orderedViewControllers=_orderedViewControllers;
@property(retain, nonatomic) NSArray *segmentedControlTitles; // @synthesize segmentedControlTitles=_segmentedControlTitles;
@property(nonatomic) _Bool shouldShowLoadingView; // @synthesize shouldShowLoadingView=_shouldShowLoadingView;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) AWEAnimatedButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) UIImageView *cornerMaskView; // @synthesize cornerMaskView=_cornerMaskView;
@property(retain, nonatomic) UILabel *refreshLabel; // @synthesize refreshLabel=_refreshLabel;
@property(retain, nonatomic) AWEBubble *discoverGuideBubbleView; // @synthesize discoverGuideBubbleView=_discoverGuideBubbleView;
@property(retain, nonatomic) AWETeenModeFeedEntranceView *teenModeEntranceView; // @synthesize teenModeEntranceView=_teenModeEntranceView;
@property(retain, nonatomic) AWEDiscoverFeedEntranceView *discoverEntranceView; // @synthesize discoverEntranceView=_discoverEntranceView;
@property(retain, nonatomic) AWELiveFeedEntranceView *liveEntranceView; // @synthesize liveEntranceView=_liveEntranceView;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool forbidHideStatusBar; // @synthesize forbidHideStatusBar=_forbidHideStatusBar;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *feedDiscoverEntranceView;
- (id)awesst_additionalTrackerParams;
- (_Bool)awesst_isVideoPlayViewController;
- (id)awesst_enterFrom;
- (void)contentOffsetChangedWithNewOffset:(struct CGPoint)arg1 oldOffset:(struct CGPoint)arg2 isUserTriggered:(_Bool)arg3;
- (void)cityHasChangedAndNeedRefresh:(_Bool)arg1;
- (void)didCloseStoryView;
- (void)didOpenStoryView;
@property(readonly, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *currentViewController;
- (id)referString;
- (void)slidingViewController:(id)arg1 didSelectIndex:(long long)arg2 transitionType:(long long)arg3;
- (void)slidingViewController:(id)arg1 didFinishTransitionFromPreviousViewController:(id)arg2 currentViewController:(id)arg3;
- (void)slidingViewController:(id)arg1 willTransitionToViewController:(id)arg2 transitionType:(long long)arg3;
- (id)slidingViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfControllers:(id)arg1;
- (id)discoverButton;
- (void)newAnchorCame:(id)arg1;
- (void)_windowDidResignKeyNotification:(id)arg1;
- (void)_windowDidBecomeKeyNotification:(id)arg1;
- (void)_splashViewDidDisappear:(id)arg1;
- (void)_appLaunchGuideViewDidDisppear:(id)arg1;
- (void)_onAwemeVideoPlayGuideViewTouched:(id)arg1;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (void)didReceiveFeedTableViewControllerSyncPlayStateNotification:(id)arg1;
- (void)_onAwemeDeleteNotification:(id)arg1;
- (void)_onAwemePostExitNotification:(id)arg1;
- (_Bool)isActiveForBackup;
- (_Bool)_shouldShowLiveButton;
- (_Bool)isActive;
- (void)_removeNotifications;
- (id)mainAppWindow;
- (void)_addNotifications;
- (void)task:(id)arg1 willAppendWithInfo:(id)arg2;
- (void)_reloadViewControllers:(id)arg1;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishLogout;
- (void)didChangePersonalizedAdMode:(id)arg1;
- (void)awesomeSplashRemoved:(id)arg1;
- (void)handleFeedTableViewWillDisplayCell:(id)arg1;
- (void)handleDiscoverHotSearchGuideAnimation:(id)arg1;
- (void)shouldTryPlayDiscoverGuideAnimation;
- (void)didChangedLanguage;
- (void)didFinishLogin;
- (void)didCancelLogin;
- (void)didLoginFailed;
- (void)showStory:(_Bool)arg1;
- (void)willStartLogin;
- (void)willLoginAtPlatform:(unsigned long long)arg1;
- (void)tabBarBackgroundColorFill;
- (void)_setLiveEntranceOpenStatus:(_Bool)arg1;
- (void)_setStoryBrowserStyle:(long long)arg1;
- (void)_onSegmentControlScrollToIndex:(long long)arg1 fromUserInteraction:(_Bool)arg2 animated:(_Bool)arg3;
- (void)_scrollToIndex:(long long)arg1 ignoreWidth:(_Bool)arg2;
- (void)_scrollToIndex:(long long)arg1;
- (void)reportButtonDidPressed;
- (void)handleEnterDiscoveryPage;
- (void)onDiscoverButtonClicked:(id)arg1;
- (void)enterStarTrendBoard;
- (void)enterSearchResultPageWithWord:(id)arg1 searchWord:(id)arg2;
- (void)_addCornerMaskView;
- (void)showOrHideConcernNewReminderViewIfNeeded;
- (void)concernNewReminderViewTapped;
- (void)_addConcernNewReminderView;
- (void)_addRefreshLabel;
- (void)removeDiscoverGuideAnimation;
- (void)playDiscoverGuideAnimation;
- (void)enableHiddenStoryButton:(_Bool)arg1;
- (void)showSkylightAnimation;
- (void)openStoryWithAnimation;
- (void)animateStoryButtonRefreshWhenClosed;
- (double)liveEntranceViewAdjustment;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)_updateDiscoverEntranceViewFrame;
- (void)_updateTopUI;
- (struct CGRect)_getLiveEntranceImageFrame;
- (void)didClickTeenModeLabel;
- (void)_addTeenModeViews;
- (_Bool)shouldShowTeenModeHelpIcon;
- (void)_addReportButton;
- (void)_addSilentControlButton;
- (void)addDiscoverEntranceView;
- (void)_addLiveEntranceView;
- (void)_updateSegmentControlForCityChange:(_Bool)arg1;
@property(readonly, nonatomic) __weak UIViewController<AWEFeedTabItemViewControllerProtocol> *currentFeedVC;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (double)maxRightPositionForRollingText;
- (void)updateNearByCommonData;
- (void)showNavbarAnimated:(_Bool)arg1;
- (void)hideNavbarAnimated:(_Bool)arg1;
- (void)setAccessoriesAlpha:(double)arg1 animateDuration:(double)arg2;
- (void)setAccessoriesHidden:(_Bool)arg1;
- (void)dragCancellation;
- (void)stopRefreshing;
- (void)beginRefreshing;
- (void)dragWithProgress:(double)arg1;
- (void)recoveryOpenLiveIfNeed;
- (void)recoveryVideoBackupIfNeed;
- (_Bool)enableOptimizeUIInFullScreenFollow;
- (void)hideYellowDotForConcernTab;
- (void)updateYellowDotForConcernTab;
- (_Bool)enableShowStoryView;
- (_Bool)ifStoryViewIsOpen;
- (void)removeLiveGuideIfNeed;
- (void)showLiveGuideIfNeed;
- (void)pause;
- (void)playIfActive;
- (void)play;
- (void)closeStoryButton;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)animatedRefreshWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canRefresh;
- (_Bool)currentTabIsTop;
- (void)adaptToChildMode;
- (void)setTeenModeIfNeeded;
- (void)setPureMode:(_Bool)arg1;
- (void)respondsToPanLeftGestureFinish;
- (void)respondsToPanLeftGestureStart;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (_Bool)transition_enableCustomActionForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)transition_didStartTransitionWithContext:(id)arg1;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)switchToTab:(long long)arg1;
- (void)setButtonHiddenForAnimation:(_Bool)arg1;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)hideLiveOrYellowDotCountForConcernTab;
- (void)showYellowDotCountForConcernTab:(long long)arg1;
- (void)showYellowDotForConcernTab;
- (void)timerToHideLiveForFriendTab;
- (void)showLiveForConcernTab;
- (_Bool)handleUnreadForLevelArray:(id)arg1;
- (_Bool)checkUnreadForFriendTabAvailable:(long long)arg1;
- (void)updateUnreadTipForFollowTab;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)forceLandToForYou;
- (void)viewDidLoad;
- (id)init;
@property(copy, nonatomic) CDUnknownBlockType titleClickAction;
@property(copy, nonatomic) CDUnknownBlockType discoverIconAction;
@property(copy, nonatomic) CDUnknownBlockType completion;
- (void)setupGuideDiscoverTitleLabel;
- (void)setupHotSearchBackgroundView;
- (void)setupHotSearchGuideView;
- (void)setupGuideDiscoverCancelButton;
- (void)setupGuideDiscoverButton;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)finishAnimation;
- (void)cancelAnimatin;
- (void)hideSegmentControlByFading;
- (void)showSegmentControlByFading;
- (void)resetGuideDiscoverButton;
- (void)resetBackgroundAnimation;
- (void)breatheAnimation;
- (void)backgroundAnimation;
- (void)playAnimation;
- (void)layoutHotSearchGuideViews;
- (void)addHotSearchGuideSubviews;
- (void)setupHotSearchGuideViews;
- (void)onGuideDiscoverCancelButtonClicked:(id)arg1;
- (void)onGuideDiscoverTitleLabelTapped:(id)arg1;
- (void)onGuideDiscoverButtonClicked:(id)arg1;
- (void)stopHotSearchGuideAnimation;
- (void)showHotSearchGuideWithTitle:(id)arg1 discoverIconAction:(CDUnknownBlockType)arg2 titleClickAction:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addHotSearchGuideView;
- (void)trackRedDotDidShow:(long long)arg1;
- (void)showRedDotAtIndex:(long long)arg1;
- (void)fetchOneDayMsgWithType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hotRedDotTimerCallback;
- (void)followRedDotTimerCallback;
- (void)stopSegmentedRedDotTimer;
- (void)fireSegmentedRedDotTimer;
- (void)setupSegmentedRedDotTimer;
- (void)feedRedDotTypeDidChanged:(id)arg1;
- (void)unobserveFeedRedDotTypeInABTest;
- (void)observeFeedRedDotTypeInABTest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

