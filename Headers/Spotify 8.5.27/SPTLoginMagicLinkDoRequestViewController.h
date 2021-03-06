//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTLoginViewControllerProtocol-Protocol.h"
#import "SPTMagicLinkDoRequestViewModelDelegate-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSError, NSString, NSURL, SPTLoginMagicLinkDoRequestView, SPTLoginMagicLinkDoRequestViewModel, SPTProgressView;
@protocol SPTPageContainer;

@interface SPTLoginMagicLinkDoRequestViewController : UIViewController <SPTNavigationControllerNavigationBarState, SPTPageController, SPTLoginViewControllerProtocol, UITextFieldDelegate, SPTMagicLinkDoRequestViewModelDelegate>
{
    _Bool performLogout;
    _Bool forgetUserAfterLogout;
    NSError *error;
    SPTLoginMagicLinkDoRequestViewModel *_viewModel;
    SPTProgressView *_progressView;
}

@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(readonly, nonatomic) SPTLoginMagicLinkDoRequestViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSError *error; // @synthesize error;
@property(nonatomic) _Bool forgetUserAfterLogout; // @synthesize forgetUserAfterLogout;
@property(nonatomic) _Bool performLogout; // @synthesize performLogout;
- (void).cxx_destruct;
- (void)viewModelDidSucceedRequestMagicLink:(id)arg1;
- (void)viewModel:(id)arg1 didFailRequestMagicLinkWithError:(id)arg2;
- (void)viewModelDidStartRequestMagicLink:(id)arg1;
- (unsigned long long)preferredNavigationBarState;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)checkTextFieldStatus:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)hideRequestLoginLinkInProgressState;
- (void)showRequestLoginLinkInProgressState;
- (void)doRequest;
- (void)checkPreexistingError;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;
@property(retain, nonatomic) SPTLoginMagicLinkDoRequestView *view; // @dynamic view;

@end

