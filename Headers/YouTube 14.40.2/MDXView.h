//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MDXMiniBarHeightDelegate.h"
#import "MDXQueueViewObserver.h"

@class MDXMiniBarView, MDXQueueView, MDXSmartRemoteView, NSHashTable, NSString, UIPanGestureRecognizer;

@interface MDXView : UIView <MDXMiniBarHeightDelegate, MDXQueueViewObserver>
{
    NSHashTable *_viewObservers;
    double _subViewPanY;
    UIPanGestureRecognizer *_miniBarPanGestureRecognizer;
    UIPanGestureRecognizer *_queuePanGestureRecognizer;
    UIView *_contentView;
    UIView *_statusBarView;
    int _layout;
    MDXMiniBarView *_miniBarView;
    MDXQueueView *_queueView;
    MDXSmartRemoteView *_smartRemoteView;
    double _miniBarBottomOffset;
}

+ (double)layoutChangeDuration;
@property(nonatomic) double miniBarBottomOffset; // @synthesize miniBarBottomOffset=_miniBarBottomOffset;
@property(retain, nonatomic) MDXSmartRemoteView *smartRemoteView; // @synthesize smartRemoteView=_smartRemoteView;
@property(retain, nonatomic) MDXQueueView *queueView; // @synthesize queueView=_queueView;
@property(retain, nonatomic) MDXMiniBarView *miniBarView; // @synthesize miniBarView=_miniBarView;
@property(readonly, nonatomic) int layout; // @synthesize layout=_layout;
- (void).cxx_destruct;
- (void)panFromLayout:(int)arg1 withYDistance:(double)arg2 yVelocity:(double)arg3 panFinished:(_Bool)arg4;
- (void)setWatchViewHiddenPostAnimationForLayout:(int)arg1;
- (void)setWatchViewHiddenPreAnimationForLayout:(int)arg1;
- (void)setMiniBarHiddenPreAnimationForLayout:(int)arg1;
- (void)setMiniBarHiddenPostAnimationForLayout:(int)arg1;
- (void)setMiniBarAlphaForLayout:(int)arg1;
- (double)subViewPaddingYForCurrentLayout;
- (void)notifyObserversAboutChangeFromLayout:(int)arg1 toLayout:(int)arg2;
- (void)notifyObserversDidAnimateToLayout:(int)arg1;
- (void)animateToLayout:(int)arg1 withCurve:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didPanExpandedView:(id)arg1;
- (void)didPanMiniBar:(id)arg1;
- (double)miniBarTopOffset;
- (struct CGSize)smartRemoteLayoutSize;
- (struct CGSize)queueLayoutSize;
- (void)didTapHeader;
- (void)didChangeHeight:(double)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)hideMDXViewWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)expandSmartRemoteWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)collapseQueueWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)expandQueueWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)removeViewObserver:(id)arg1;
- (void)addViewObserver:(id)arg1;
- (void)animateToLayout:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)animateToLayout:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

