//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BDPlatformSDKOAuthViewDelegate-Protocol.h"

@class BDPlatformSDKAlertView, BDPlatformSDKOAuthView, NSDictionary, NSMutableArray, NSString;

@interface BDPlatformSDKOAuthViewController : UIViewController <BDPlatformSDKOAuthViewDelegate>
{
    _Bool _originalStatusBarHidden;
    CDUnknownBlockType _authCompletionBlock;
    NSDictionary *_extraInfo;
    BDPlatformSDKOAuthView *_authView;
    long long _authResultStatus;
    BDPlatformSDKAlertView *_alertView;
    NSMutableArray *_networkTasks;
    NSString *_ticket;
    NSDictionary *_infoDic;
}

@property(retain, nonatomic) NSDictionary *infoDic; // @synthesize infoDic=_infoDic;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSMutableArray *networkTasks; // @synthesize networkTasks=_networkTasks;
@property(retain, nonatomic) BDPlatformSDKAlertView *alertView; // @synthesize alertView=_alertView;
@property(nonatomic) long long authResultStatus; // @synthesize authResultStatus=_authResultStatus;
@property(nonatomic) _Bool originalStatusBarHidden; // @synthesize originalStatusBarHidden=_originalStatusBarHidden;
@property(retain, nonatomic) BDPlatformSDKOAuthView *authView; // @synthesize authView=_authView;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) CDUnknownBlockType authCompletionBlock; // @synthesize authCompletionBlock=_authCompletionBlock;
- (void).cxx_destruct;
- (void)resetFromString;
- (id)errorDomainByType:(int)arg1;
- (void)_hideAlertViewWithAnimated:(_Bool)arg1;
- (void)_failedWithMessage:(id)arg1 errorCode:(long long)arg2 type:(int)arg3 errorInfo:(id)arg4;
- (void)_successCheckAndRefresh;
- (void)dealNetworkResp:(id)arg1 error:(id)arg2 callback:(CDUnknownBlockType)arg3 type:(int)arg4;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissDidEnterBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (void)doFinishWithAuthResp:(id)arg1;
- (void)dismissSelf;
- (void)cancelClicked;
- (void)doCleanWork;
- (void)authClicked;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithReq:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

