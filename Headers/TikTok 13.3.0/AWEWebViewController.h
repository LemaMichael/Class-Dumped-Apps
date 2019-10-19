//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseWebViewController.h"

#import "AWEReactPage-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "NSURLConnectionDataDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface AWEWebViewController : AWEBaseWebViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate, AWEReactPage, BTDRouterViewControllerProtocol, NSURLConnectionDataDelegate>
{
    _Bool _isLocalResource;
    _Bool _isUrlBlocked;
}

+ (id)wkAllowList;
+ (_Bool)allowWKWebViewWithURL:(id)arg1;
+ (id)addParametersIfURLStringHasIronManScheme:(id)arg1;
@property(nonatomic) _Bool isUrlBlocked; // @synthesize isUrlBlocked=_isUrlBlocked;
@property(nonatomic) _Bool isLocalResource; // @synthesize isLocalResource=_isLocalResource;
- (void)closeWebView;
- (void)handleBridgeClose;
- (void)showMorePanel;
- (id)customUserAgent;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (void)setupMoreButtonOfNavigation;
- (long long)kernel;
- (void)handleDPBStatusNotification:(id)arg1;
- (void)handleBroadcastNotification:(id)arg1;
- (void)setupNotification;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadRequest;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setUseSensitiveServer:(_Bool)arg1;
- (_Bool)useSensitiveServer;
- (id)pickerController;
- (void)setPickerController:(id)arg1;
- (void)setUploadParameters:(id)arg1;
- (id)uploadParameters;
- (id)type;
- (void)setType:(id)arg1;
- (void)uploadSensitiveImage:(id)arg1;
- (void)uploadImage:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)handleUploadPhotoLibrayImageNoti:(id)arg1;
- (void)awe_upli_removeObservers;
- (void)awe_upli_addObservers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
