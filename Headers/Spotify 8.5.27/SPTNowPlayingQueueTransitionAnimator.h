//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView, UIViewController;

@interface SPTNowPlayingQueueTransitionAnimator : NSObject
{
    _Bool _isPresenting;
    UIViewController *_parentViewController;
    UIViewController *_playerViewController;
    UIViewController *_queueViewController;
    UIView *_animatingCoverArtView;
}

@property(retain, nonatomic) UIView *animatingCoverArtView; // @synthesize animatingCoverArtView=_animatingCoverArtView;
@property(nonatomic) _Bool isPresenting; // @synthesize isPresenting=_isPresenting;
@property(nonatomic) __weak UIViewController *queueViewController; // @synthesize queueViewController=_queueViewController;
@property(nonatomic) __weak UIViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void).cxx_destruct;
- (struct CGRect)queueCoverArtFrame;
- (struct CGSize)queueCoverArtSize;
- (id)queueTableView;
- (id)queueNavigationBarLeftButton;
- (id)queueNavigationBarButtonsView;
- (id)queueNavigationBarView;
- (id)queueCoverArtView;
- (id)nowPlayingNavigationBarButtonsView;
- (id)nowPlayingNavigationBarView;
- (id)nowPlayingCoverArtView;
- (void)animate:(CDUnknownBlockType)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startShowsFormatAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startAnimationWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPresenting:(_Bool)arg1 parentViewController:(id)arg2 playerViewController:(id)arg3 queueViewController:(id)arg4;

@end
