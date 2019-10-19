//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveCommentReactions-Protocol.h"
#import "HTSLiveCommentRouter-Protocol.h"
#import "HTSLiveComponent-Protocol.h"

@class HTSLiveCommentFirstChargeView, HTSLiveCommentStore, IESLiveComponentContext, LiveCommentView, NSString, UIButton;
@protocol HTSLiveCommentActions, HTSLiveDetailRouter, HTSLiveMessageDispatchProvider, HTSLiveToolbarProvider, HTSLiveViewHierarchyProvider, IESLiveAlertFactory, IESLiveAudienceTabContainerProvider, IESLiveCustomObserver, IESLiveEnvironment, IESLiveSettings, IESLiveToastFactory, IESLiveTracker, IESLiveUserService, IESLiveVerifyConfig, IESLiveWalletService;

@interface HTSLiveCommentFragment : NSObject <HTSLiveCommentReactions, HTSLiveComponent, HTSLiveCommentRouter>
{
    _Bool _useNewCommentButtonStyle;
    _Bool _sendCommentSuccess;
    HTSLiveCommentStore *_store;
    IESLiveComponentContext *_componentContext;
    LiveCommentView *_commentView;
    HTSLiveCommentFirstChargeView *_chargeView;
    UIButton *_commentButton;
    id <HTSLiveCommentActions> _commentActionCreator;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <IESLiveTracker> _tracker;
    id <HTSLiveDetailRouter> _router;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveAudienceTabContainerProvider> _tabContainerProvidor;
    id <HTSLiveToolbarProvider> _toolbarProvider;
    id <IESLiveUserService> _userService;
    id <IESLiveWalletService> _walletService;
    id <IESLiveVerifyConfig> _verifyConfig;
    id <IESLiveSettings> _settings;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveAlertFactory> _alertFactory;
    id <IESLiveEnvironment> _environment;
    id <IESLiveCustomObserver> _customObserver;
    long long _orientation;
    NSString *_storedComment;
}

+ (long long)preferredLoadPhase;
+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
+ (_Bool)shouldCreateWithRoom:(id)arg1 componentContext:(id)arg2;
@property(copy, nonatomic) NSString *storedComment; // @synthesize storedComment=_storedComment;
@property(nonatomic) _Bool sendCommentSuccess; // @synthesize sendCommentSuccess=_sendCommentSuccess;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) id <IESLiveCustomObserver> customObserver; // @synthesize customObserver=_customObserver;
@property(retain, nonatomic) id <IESLiveEnvironment> environment; // @synthesize environment=_environment;
@property(retain, nonatomic) id <IESLiveAlertFactory> alertFactory; // @synthesize alertFactory=_alertFactory;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveVerifyConfig> verifyConfig; // @synthesize verifyConfig=_verifyConfig;
@property(retain, nonatomic) id <IESLiveWalletService> walletService; // @synthesize walletService=_walletService;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(nonatomic) __weak id <HTSLiveToolbarProvider> toolbarProvider; // @synthesize toolbarProvider=_toolbarProvider;
@property(nonatomic) __weak id <IESLiveAudienceTabContainerProvider> tabContainerProvidor; // @synthesize tabContainerProvidor=_tabContainerProvidor;
@property(nonatomic) __weak id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) id <HTSLiveCommentActions> commentActionCreator; // @synthesize commentActionCreator=_commentActionCreator;
@property(nonatomic) __weak UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(nonatomic) __weak HTSLiveCommentFirstChargeView *chargeView; // @synthesize chargeView=_chargeView;
@property(retain, nonatomic) LiveCommentView *commentView; // @synthesize commentView=_commentView;
@property(nonatomic) _Bool useNewCommentButtonStyle; // @synthesize useNewCommentButtonStyle=_useNewCommentButtonStyle;
@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) HTSLiveCommentStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (double)commentViewBottomOffsetWithContainer;
- (double)commentViewBottomOffsetWithScreen;
- (_Bool)isGameStyle;
- (void)removeCommentItem;
- (void)addCommentItem;
- (void)dispatchFakeCommentMessage:(id)arg1 messageID:(unsigned long long)arg2;
- (void)animationForKeyboardHide;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardFrameDidChange:(id)arg1;
- (void)animationForKeyboardShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)comment;
- (void)addObserver;
- (void)sendCommentWithText:(id)arg1;
- (void)hideCommentButton;
- (void)showCommentButton;
- (void)hideCommentView;
- (void)showCommentView:(id)arg1;
- (void)bedimCommentButton:(_Bool)arg1;
- (void)lackOfBalance;
- (void)needVerifyPhone;
- (void)commentSucceed:(id)arg1 messageID:(unsigned long long)arg2;
- (void)clearCommentInputView;
- (void)commentBegan;
- (void)componentOrientationChanged:(long long)arg1;
- (void)showComponent;
- (void)hideComponent;
- (void)componentWillUnmount;
- (void)removeCommentView;
- (id)commentViewContainerView;
- (void)addCommentView;
- (_Bool)isFirstCharge;
- (void)layoutCommentBtn:(_Bool)arg1;
- (void)componentDidMount;
- (id)init;
- (void)dealloc;
- (id)providedRouter;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
