//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTInnerTubeCellController.h"

#import "YTFormattedStringLabelDelegate.h"

@class NSString, YTInteractionLoggingProxyButton;

@interface YTSlimVideoInformationCellController : YTInnerTubeCellController <YTFormattedStringLabelDelegate>
{
    YTInteractionLoggingProxyButton *_collapseButtonProxy;
    YTInteractionLoggingProxyButton *_expandButtonProxy;
    id <YTWatchUIStateResponderProvider> _watchUIStateResponderProvider;
    _Bool _hasOptimisticLikeStatus;
    int _previousLikeStatus;
    _Bool _visible;
    id <YTSlimVideoInformationCellControllerDelegate> _delegate;
}

@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) __weak id <YTSlimVideoInformationCellControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)formattedStringLabel:(id)arg1 didPressNavigationEndpoint:(id)arg2 linkText:(id)arg3;
- (void)formattedStringLabel:(id)arg1 didPressURL:(id)arg2;
- (void)didTapDisclosureTarget;
- (void)processUpdatedMetadataResponse:(id)arg1;
- (void)cellDidBecomeHiddenWithVisibilityEventType:(int)arg1;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1 safeAreaInsets:(struct UIEdgeInsets)arg2;
- (struct CGSize)cellSizeWithSize:(struct CGSize)arg1;
- (void)setCell:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

