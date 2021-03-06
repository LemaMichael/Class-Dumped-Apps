//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class ASAuthorizationAppleIDButton, AWELoginButton, AWEUserContext, NSMutableArray;
@protocol AWEDouyinSSOLoginViewDelegate;

@interface AWEDouyinSSOLoginView : UIScrollView
{
    AWELoginButton *_QQLoginButton;
    AWELoginButton *_wechatLoginButton;
    AWELoginButton *_weiboLoginButton;
    AWELoginButton *_toutiaoLoginButton;
    AWELoginButton *_flipChatLoginButton;
    NSMutableArray *_buttonsArray;
    AWEUserContext *_userContext;
    ASAuthorizationAppleIDButton *_appleIDButton;
}

@property(retain, nonatomic) ASAuthorizationAppleIDButton *appleIDButton; // @synthesize appleIDButton=_appleIDButton;
@property(retain, nonatomic) AWEUserContext *userContext; // @synthesize userContext=_userContext;
@property(retain, nonatomic) NSMutableArray *buttonsArray; // @synthesize buttonsArray=_buttonsArray;
@property(retain, nonatomic) AWELoginButton *flipChatLoginButton; // @synthesize flipChatLoginButton=_flipChatLoginButton;
@property(retain, nonatomic) AWELoginButton *toutiaoLoginButton; // @synthesize toutiaoLoginButton=_toutiaoLoginButton;
@property(retain, nonatomic) AWELoginButton *weiboLoginButton; // @synthesize weiboLoginButton=_weiboLoginButton;
@property(retain, nonatomic) AWELoginButton *wechatLoginButton; // @synthesize wechatLoginButton=_wechatLoginButton;
@property(retain, nonatomic) AWELoginButton *QQLoginButton; // @synthesize QQLoginButton=_QQLoginButton;
- (void).cxx_destruct;
- (void)_flipChatAction;
- (void)_toutiaoAction;
- (void)_wechatAction;
- (void)_weiboAction;
- (void)_appleAction;
- (void)_QQAction;
- (void)makeHeightConstraints;
- (void)_newInit;
- (id)initWithUserContext:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <AWEDouyinSSOLoginViewDelegate> delegate; // @dynamic delegate;

@end

