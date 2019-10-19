//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIControl;
@protocol IESLiveSettings, IESLiveWebViewFactory, IESLiveWebViewProtocol;

@interface IESLiveBroadcastNoticeView : UIView
{
    CDUnknownBlockType _dismissBlock;
    CDUnknownBlockType _uploadCoverImageBlock;
    CDUnknownBlockType _startLiveBlock;
    UIControl *_maskView;
    UIView<IESLiveWebViewProtocol> *_webView;
    id <IESLiveWebViewFactory> _webviewFactory;
    id <IESLiveSettings> _settings;
}

@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveWebViewFactory> webviewFactory; // @synthesize webviewFactory=_webviewFactory;
@property(retain, nonatomic) UIView<IESLiveWebViewProtocol> *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIControl *maskView; // @synthesize maskView=_maskView;
@property(copy, nonatomic) CDUnknownBlockType startLiveBlock; // @synthesize startLiveBlock=_startLiveBlock;
@property(copy, nonatomic) CDUnknownBlockType uploadCoverImageBlock; // @synthesize uploadCoverImageBlock=_uploadCoverImageBlock;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (void)dismissHintViewWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)parseSizeFromURL:(id)arg1;
- (void)_onBackgroundTouched:(id)arg1;
- (void)addMaskView;
- (void)registeHandler;
- (void)loadWebView:(id)arg1;
- (id)initWithNoticeURL:(id)arg1;

@end
