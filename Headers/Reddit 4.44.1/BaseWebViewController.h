//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "OpenBrowserActionViewDelegate-Protocol.h"
#import "PostViewControllerDelegate-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WebNavigationControlsViewDelegate-Protocol.h"
#import "WebViewControllerProtocol-Protocol.h"

@class NSString, NSURL, UIProgressView, UIViewController, WKWebView, WebNavigationControlsView, WebViewInteractor;

@interface BaseWebViewController : BaseViewController <WKNavigationDelegate, WebNavigationControlsViewDelegate, OpenBrowserActionViewDelegate, RUIActionSheetViewControllerDelegate, PostViewControllerDelegate, WebViewControllerProtocol>
{
    _Bool _hideOverFlowButton;
    _Bool _hideProgressView;
    _Bool _observingProgress;
    WebViewInteractor *_interactor;
    NSString *_customWebTitle;
    UIViewController *_fromVC;
    WKWebView *_webView;
    NSURL *_webURL;
    UIProgressView *_progressView;
    WebNavigationControlsView *_navigationControlView;
    double _headerObservationOffset;
}

+ (id)webViewControllerWithURL:(id)arg1;
@property(nonatomic) double headerObservationOffset; // @synthesize headerObservationOffset=_headerObservationOffset;
@property(retain, nonatomic) WebNavigationControlsView *navigationControlView; // @synthesize navigationControlView=_navigationControlView;
@property(nonatomic) _Bool observingProgress; // @synthesize observingProgress=_observingProgress;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) _Bool hideProgressView; // @synthesize hideProgressView=_hideProgressView;
@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(nonatomic) _Bool hideOverFlowButton; // @synthesize hideOverFlowButton=_hideOverFlowButton;
@property(retain, nonatomic) NSString *customWebTitle; // @synthesize customWebTitle=_customWebTitle;
@property(retain, nonatomic) WebViewInteractor *interactor; // @synthesize interactor=_interactor;
- (void).cxx_destruct;
- (void)handleAppDidEnterForegroundWhenViewControllerIsOnTheTop;
- (void)sendScreenViewEventFromBackground:(_Bool)arg1;
- (void)loadInternalRequest:(id)arg1;
- (void)loadHTMLString:(id)arg1;
- (id)originalRequestURL;
- (void)refresh;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)setWebNavigationControlsNeedUpdate;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)postViewController:(id)arg1 didFinishWithPost:(id)arg2;
- (void)postToRedditPresentedFromViewController:(id)arg1;
- (void)openBrowserActionViewControllerDidSelectPostToReddit:(id)arg1;
- (void)openBrowserActionViewControllerDidSelectRefresh:(id)arg1;
- (void)webNavigationControlsUserDidTapForward:(id)arg1;
- (void)webNavigationControlsUserDidTapBack:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)currentURL;
- (id)analyticsPageType;
- (id)analyticsURL;
- (void)didTapBack;
- (void)didTapOverflow:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithURL:(id)arg1 interactor:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *analyticsSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

