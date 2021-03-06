//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAPaymentAccountViewController.h"

@class NSString, WATableRow;

@interface WAPaymentMXAccountViewController : WAPaymentAccountViewController
{
    WATableRow *_rowVerifyAccount;
    WATableRow *_rowEditCard;
    WATableRow *_rowUnlinkAccount;
    CDUnknownBlockType _verifyAccountTapped;
    CDUnknownBlockType _editCardTapped;
}

@property(copy, nonatomic) CDUnknownBlockType editCardTapped; // @synthesize editCardTapped=_editCardTapped;
@property(copy, nonatomic) CDUnknownBlockType verifyAccountTapped; // @synthesize verifyAccountTapped=_verifyAccountTapped;
- (void).cxx_destruct;
- (void)flowNavigationHandlerDidPopViewController:(id)arg1;
- (void)flowNavigationHandlerDidDismissPromptViewController:(id)arg1;
- (void)stopLoadingUIForContext:(id)arg1;
- (void)startLoadingUIWithCancelHandler:(CDUnknownBlockType)arg1 context:(id)arg2;
- (id)identifier;
- (_Bool)canLoadForContext:(id)arg1;
- (void)setActionRowsEnabled:(_Bool)arg1;
- (void)resetLoadingIndicators;
- (void)handleRequestVerification;
- (void)handleRequestEditCard;
- (void)setUpTableView;
- (id)mxAccount;
- (id)paymentMXManager;
- (id)initWithAccount:(id)arg1 paymentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

