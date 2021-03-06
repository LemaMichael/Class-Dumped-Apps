//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPInterstitialViewController.h"

#import "MPAdWebViewAgentDelegate-Protocol.h"

@class MPAdWebViewAgent, MPWebView, NSString;
@protocol MPInterstitialViewControllerDelegate;

@interface MPHTMLInterstitialViewController : MPInterstitialViewController <MPAdWebViewAgentDelegate>
{
    id <MPInterstitialViewControllerDelegate> _delegate;
    MPAdWebViewAgent *_backingViewAgent;
    MPWebView *_backingView;
}

@property(retain, nonatomic) MPWebView *backingView; // @synthesize backingView=_backingView;
@property(retain, nonatomic) MPAdWebViewAgent *backingViewAgent; // @synthesize backingViewAgent=_backingViewAgent;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)adDidClose:(id)arg1;
- (void)adActionDidFinish:(id)arg1;
- (void)adActionWillLeaveApplication:(id)arg1;
- (void)adActionWillBegin:(id)arg1;
- (void)adDidFailToLoadAd:(id)arg1;
- (void)adDidFinishLoadingAd:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (id)adUnitId;
- (id)location;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)didDismissInterstitial;
- (void)willDismissInterstitial;
- (void)didPresentInterstitial;
- (void)willPresentInterstitial;
- (void)loadConfiguration:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

