//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, UIViewController;
@protocol WebViewControllerProtocol;

@interface WebViewInteractor : NSObject
{
    UIViewController<WebViewControllerProtocol> *_delegateVC;
    NSString *_analyticsScreenViewName;
    NSString *_analyticsCorrelationId;
    double _viewDidAppearTime;
    unsigned long long _numberOfTimesWebUrlViewLogged;
}

@property(nonatomic) unsigned long long numberOfTimesWebUrlViewLogged; // @synthesize numberOfTimesWebUrlViewLogged=_numberOfTimesWebUrlViewLogged;
@property(nonatomic) double viewDidAppearTime; // @synthesize viewDidAppearTime=_viewDidAppearTime;
@property(readonly, nonatomic) NSString *analyticsCorrelationId; // @synthesize analyticsCorrelationId=_analyticsCorrelationId;
@property(copy, nonatomic) NSString *analyticsScreenViewName; // @synthesize analyticsScreenViewName=_analyticsScreenViewName;
@property(nonatomic) __weak UIViewController<WebViewControllerProtocol> *delegateVC; // @synthesize delegateVC=_delegateVC;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *analyticsScreenViewParameters;
- (long long)timeInMillisecondsSinceViewDidAppear;
@property(readonly, nonatomic) NSMutableDictionary *analyticsFullParameters;
- (void)closingBrowser;
- (void)logViewedWebPageWithURL:(id)arg1;
- (void)viewDidAppearOnScreen;
- (id)screenViewAnalyticsEvent;
- (void)sendScreenViewEventsFromBackground:(_Bool)arg1;
- (id)initWithScreenViewName:(id)arg1;
- (id)init;

@end

