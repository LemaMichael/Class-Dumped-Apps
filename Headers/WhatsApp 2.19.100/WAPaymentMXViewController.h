//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentViewController.h"

@class NSString;

@interface WAPaymentMXViewController : WAPaymentViewController
{
}

- (void)transactionHandler:(id)arg1 didSucceedWithTransaction:(id)arg2;
- (void)handlerDidSucceed:(id)arg1;
- (void)handler:(id)arg1 didFailWithError:(id)arg2;
- (void)didFailWithUserAction:(id)arg1 action:(long long)arg2;
- (void)flowNavigationHandlerDidPopViewController:(id)arg1;
- (void)flowNavigationHandlerDidDismissPromptViewController:(id)arg1;
- (void)stopLoadingUIForContext:(id)arg1;
- (void)startLoadingUIWithCancelHandler:(CDUnknownBlockType)arg1 context:(id)arg2;
- (_Bool)canLoadForContext:(id)arg1;
- (id)identifier;
- (void)startPaymentWithConfiguration:(id)arg1;
- (void)openFBPayHub;
- (void)reloadPaymentAccounts;
- (void)setUpTableView;
- (void)viewDidLoad;
- (id)paymentManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

