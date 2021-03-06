//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTGraftingViewController.h"
#import "YTResponder.h"
#import "YTRetroactiveSignInViewDelegate.h"

@class GIMMe, NSString, YTGoogleAccount, YTIAccountItemRenderer, YTICommand, YTIdentityController, YTRetroactiveSignInView, YTThumbnailController;

@interface YTRetroactiveSignInViewController : UIViewController <YTRetroactiveSignInViewDelegate, YTGraftingViewController, YTResponder>
{
    YTGoogleAccount *_googleAccount;
    YTIAccountItemRenderer *_accountItem;
    YTThumbnailController *_thumbnailController;
    YTIdentityController *_identityController;
    CDUnknownBlockType _completion;
    YTICommand *_endpoint;
    YTRetroactiveSignInView *_retroactiveSignInView;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
- (id)navEndpoint;
- (void)complete;
- (void)didTapSelectAnother;
- (void)didTapClose;
- (void)didTapSignIn;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithGoogleAccount:(id)arg1 accountItem:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

