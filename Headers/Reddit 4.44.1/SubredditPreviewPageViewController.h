//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SubredditPageViewController.h"

#import "ObjectObserverProtocol-Protocol.h"
#import "ParallaxHeaderViewCallback-Protocol.h"
#import "PreviewModeDelegate-Protocol.h"

@class BaseButton, NSLayoutConstraint, NSString, UIColor, UILayoutGuide;

@interface SubredditPreviewPageViewController : SubredditPageViewController <ParallaxHeaderViewCallback, ObjectObserverProtocol, PreviewModeDelegate>
{
    UIColor *_defaultHeaderColor;
    BaseButton *_subscribeFooter;
    NSLayoutConstraint *_bottomConstraint;
    UILayoutGuide *_fakeNavBarArea;
    NSLayoutConstraint *_fakeNavTop;
}

@property(retain, nonatomic) NSLayoutConstraint *fakeNavTop; // @synthesize fakeNavTop=_fakeNavTop;
@property(retain, nonatomic) UILayoutGuide *fakeNavBarArea; // @synthesize fakeNavBarArea=_fakeNavBarArea;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(retain, nonatomic) BaseButton *subscribeFooter; // @synthesize subscribeFooter=_subscribeFooter;
@property(retain, nonatomic) UIColor *defaultHeaderColor; // @synthesize defaultHeaderColor=_defaultHeaderColor;
- (void).cxx_destruct;
- (void)updateContentViewsForData:(id)arg1;
- (id)majorContentScrollView;
- (void)parallaxHeaderViewDidTapTitleLabel:(id)arg1;
- (void)parallaxHeaderViewDidBecomeHidden:(id)arg1;
- (void)parallaxHeaderViewDidBecomeVisible:(id)arg1;
- (void)hideSubscribeFooterAnimated:(_Bool)arg1;
- (void)showSubscribeFooterAnimated:(_Bool)arg1;
- (void)setTitleView;
- (void)windowChangeSize:(id)arg1;
- (void)didTapSubscribe;
- (id)subscribeButtonColor;
- (void)configureSubscribeFooter;
- (void)configureWithSubreddit:(id)arg1;
- (double)subscribeSafeAreaHeight;
- (void)constrainSubredditFooter;
- (struct UIEdgeInsets)preferredContentInset;
- (id)createSubredditFeedViewController;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)allowNonEdgyNavigationPopGesture;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool previewModeEnabled;
@property(readonly) Class superclass;

@end

