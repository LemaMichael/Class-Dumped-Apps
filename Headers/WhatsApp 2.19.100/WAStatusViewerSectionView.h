//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WAStatusHeaderViewDelegate-Protocol.h"
#import "WAStatusItemViewDelegate-Protocol.h"
#import "WAStatusViewerFooterViewDelegate-Protocol.h"

@class NSArray, NSMapTable, NSString, UIImageView, WABubbleTextView, WAStatusHeaderView, WAStatusItem, WAStatusItemView, WAStatusProgressView, WAStatusViewerFooterView, WAStatusViewerSection;
@protocol WAStatusViewerSectionViewDelegate;

@interface WAStatusViewerSectionView : UIView <WAStatusItemViewDelegate, WAStatusHeaderViewDelegate, WAStatusViewerFooterViewDelegate>
{
    NSMapTable *_recycledViews;
    UIImageView *_gradientTopView;
    UIImageView *_gradientLeftView;
    WAStatusItemView *_itemView;
    WAStatusProgressView *_progressView;
    WAStatusHeaderView *_headerView;
    WAStatusViewerFooterView *_footerView;
    WABubbleTextView *_replySendingView;
    WAStatusItem *_lastDisplayedStatus;
    UIView *_dimmingView;
    UIView *_blurView;
    double _lastLayoutWidth;
    _Bool _needsUpdateAccessibilityElements;
    NSArray *_accessibilityElements;
    _Bool _paused;
    _Bool _inFocus;
    _Bool _audioMuted;
    _Bool _headerHidden;
    _Bool _footerHidden;
    _Bool _shownFrom3DTouch;
    WAStatusViewerSection *_section;
    id <WAStatusViewerSectionViewDelegate> _delegate;
    double _bottomInset;
}

@property(nonatomic, getter=isShownFrom3DTouch) _Bool shownFrom3DTouch; // @synthesize shownFrom3DTouch=_shownFrom3DTouch;
@property(nonatomic, getter=isFooterHidden) _Bool footerHidden; // @synthesize footerHidden=_footerHidden;
@property(nonatomic, getter=isHeaderHidden) _Bool headerHidden; // @synthesize headerHidden=_headerHidden;
@property(nonatomic, getter=isAudioMuted) _Bool audioMuted; // @synthesize audioMuted=_audioMuted;
@property(nonatomic, getter=isInFocus) _Bool inFocus; // @synthesize inFocus=_inFocus;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(nonatomic) __weak id <WAStatusViewerSectionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WAStatusViewerSection *section; // @synthesize section=_section;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)updateAccessibilityElementsIfNeeded;
- (void)setNeedsUpdateAccessibilityElements;
- (void)statusViewerFooterViewDidChangeSize:(id)arg1;
- (void)headerView:(id)arg1 didRequestAudioVolumeChange:(float)arg2;
- (void)headerViewDidTapUserName:(id)arg1;
- (void)headerViewDidTapMoreOptions:(id)arg1;
- (void)headerViewDidTapDismiss:(id)arg1;
- (void)statusItemView:(id)arg1 missingMediaForMessage:(id)arg2;
- (void)statusItemView:(id)arg1 didReceiveTapAtLocation:(struct CGPoint)arg2;
- (void)statusItemView:(id)arg1 didSelectInteractiveAnnotation:(id)arg2 atPoint:(struct CGPoint)arg3 inInteractiveAnnotationView:(id)arg4;
- (void)statusItemView:(id)arg1 didRequestOpenGroupLink:(id)arg2;
- (void)statusItemViewDidEndShowingLinkPreview:(id)arg1;
- (void)statusItemViewDidBeginShowingLinkPreview:(id)arg1;
- (void)statusItemViewDidEndLoading:(id)arg1;
- (void)statusItemViewDidBeginLoading:(id)arg1;
- (void)statusItemViewDidRequestDownload:(id)arg1;
- (void)statusItemViewDidEndZoomPan:(id)arg1;
- (void)statusItemViewDidBeginZoomPan:(id)arg1;
- (void)statusItemViewDidEndPreventingAdvancing:(id)arg1;
- (void)statusItemViewDidBeginPreventingAdvancing:(id)arg1;
- (void)statusItemViewDidEndUserInteraction:(id)arg1;
- (void)statusItemViewDidBeginUserInteraction:(id)arg1;
- (_Bool)canStatusItemViewReportFinishPresenting:(id)arg1;
- (void)statusItemViewDidFinishPresenting:(id)arg1;
- (void)statusItemViewDidUpdateProgress:(id)arg1;
- (void)mediaDownloadDidFail:(id)arg1;
- (id)statusViewOfClass:(Class)arg1;
- (id)dequeueStatusItemViewForStatusItem:(id)arg1;
- (void)recycleStatusItemView:(id)arg1;
- (void)setItemView:(id)arg1;
- (void)loadItemViewForStatusItem:(id)arg1;
- (void)handleMessageUpdated:(id)arg1;
- (void)handleMessageDeliveryStatusChanged:(id)arg1;
- (void)realoadWithMessage:(id)arg1;
- (void)reloadWithAd:(id)arg1;
- (void)reloadIfNeeded;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
- (void)showContent;
- (void)hideContent;
- (void)checkNeedsAdvanceToNextMessageIfNeeded;
@property(nonatomic, getter=isLeftGradientHidden) _Bool leftGradientHidden;
- (double)position;
- (double)loadTime;
- (double)presentationTime;
- (double)timeSpent;
- (double)playedTime;
- (double)pausedTime;
- (double)focusedTime;
@property(readonly, nonatomic, getter=isHandlingPanGesture) _Bool handlingPanGesture;
@property(nonatomic) double captionAlpha;
@property(nonatomic, getter=isCaptionExpanded) _Bool captionExpanded;
@property(readonly, nonatomic) _Bool canExpandCaption;
- (void)setReplySendingViewHidden:(_Bool)arg1;
- (void)rewind;
@property(readonly, nonatomic) double fullHeaderHeight;
@property(readonly, nonatomic) double footerHeight;
@property(readonly, nonatomic) double footerBaseHeight;
@property(nonatomic) struct CGAffineTransform footerArrowTransform;
@property(nonatomic) double footerArrowAlpha;
@property(nonatomic) double brightness;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

