//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAQRCodeScannerViewController.h"

@class NSString, UILabel;

@interface WAPaymentUPIQRCodeScannerViewController : WAQRCodeScannerViewController
{
    UILabel *_errorLabel;
    CDUnknownBlockType _loadingCancelledHandler;
}

- (void).cxx_destruct;
- (void)stopLoadingUIForContext:(id)arg1;
- (void)startLoadingUIWithCancelHandler:(CDUnknownBlockType)arg1 context:(id)arg2;
- (_Bool)canLoadForContext:(id)arg1;
- (id)identifier;
- (void)cancelAction:(id)arg1;
- (void)showInvalidCodeMessage:(id)arg1;
- (void)willAcceptQRCode;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

