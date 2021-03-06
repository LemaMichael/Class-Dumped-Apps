//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GOOAlertViewDelegate.h"

@class GIMMe, NSString, YTAlertView, YTThumbnailController, YTUpsell;

@interface YTUpsellAlertController : NSObject <GOOAlertViewDelegate>
{
    YTAlertView *_alertView;
    YTUpsell *_upsell;
    NSString *_videoID;
    NSString *_playlistID;
    CDUnknownBlockType _cancelBlock;
    YTThumbnailController *_backgroundThumbController;
    YTThumbnailController *_foregroundThumbController;
    id <YTResponder> _upsellParentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)alertView;
- (void)preventClippingForContentView:(id)arg1;
- (void)didCancel;
- (void)didPressDismissButton;
- (void)didPressExtraButton;
- (void)alertViewDidRequestActionWithNavigationEndpoint:(id)arg1 serviceEndpoint:(id)arg2;
- (void)alertViewDidShowWithImpressionEndpoints:(id)arg1;
- (void)fillAlertViewWithUpsell:(id)arg1;
- (void)alertViewDidDisappear:(id)arg1;
- (void)showUpsellDialogWithUpsell:(id)arg1 videoID:(id)arg2 playlistID:(id)arg3 cancelBlock:(CDUnknownBlockType)arg4 upsellParentResponder:(id)arg5;
- (void)showUpsell:(id)arg1 videoID:(id)arg2 playlistID:(id)arg3 toastType:(int)arg4 cancelBlock:(CDUnknownBlockType)arg5 upsellParentResponder:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

