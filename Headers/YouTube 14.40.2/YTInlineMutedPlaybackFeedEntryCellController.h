//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTVideoCellController.h"

@class YTInlineMutedPlaybackContainerController;

@interface YTInlineMutedPlaybackFeedEntryCellController : YTVideoCellController
{
    YTInlineMutedPlaybackContainerController *_impContainerController;
}

- (void).cxx_destruct;
- (void)updateCellContainer:(id)arg1;
- (void)disableOnActive;
- (void)didSelectItem;
- (void)didClearDismissalState;
- (void)dismissedViewWillShow;
- (void)willRemoveEntry;
- (void)cellDidBecomeHiddenWithVisibilityEventType:(int)arg1;
- (void)cellWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (void)setCell:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

@end
