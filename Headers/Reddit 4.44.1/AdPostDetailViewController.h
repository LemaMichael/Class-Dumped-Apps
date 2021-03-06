//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "FeedPostHlsVideoViewDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class AdPost, FeedPostHlsVideoView, NSLayoutConstraint, NSString, SKStoreProductViewController, UIView, WKWebView;

@interface AdPostDetailViewController : BaseViewController <FeedPostHlsVideoViewDelegate, UIScrollViewDelegate, SKStoreProductViewControllerDelegate>
{
    AdPost *_adPost;
    UIView *_topView;
    UIView *_navBarView;
    FeedPostHlsVideoView *_videoView;
    SKStoreProductViewController *_appStoreViewController;
    WKWebView *_webView;
    NSLayoutConstraint *_topConstraint;
    double _topConstraintMax;
}

@property(nonatomic) double topConstraintMax; // @synthesize topConstraintMax=_topConstraintMax;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) SKStoreProductViewController *appStoreViewController; // @synthesize appStoreViewController=_appStoreViewController;
@property(retain, nonatomic) FeedPostHlsVideoView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UIView *navBarView; // @synthesize navBarView=_navBarView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) AdPost *adPost; // @synthesize adPost=_adPost;
- (void).cxx_destruct;
- (void)didTapOverflow:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)feedPostHlsVideoViewDidTap:(id)arg1;
- (void)feedPostHlsVideoView:(id)arg1 didTapCallToAction:(unsigned long long)arg2;
- (void)configureHlsVideoViewAppearance;
- (void)configureNavigationBarAppearance;
- (void)viewVisibilityDidChange:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAdPost:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

