//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMiniProfileRowController.h"

#import "SCMiniProfileGroupStoryIdentityCollectionViewCellDelegate-Protocol.h"

@class SCStoriesCustomStoryMetadata, SCUserSession;
@protocol SCMiniProfileGroupStoryIdentityRowControllerDelegate;

@interface SCMiniProfileGroupStoryIdentityRowController : SCMiniProfileRowController <SCMiniProfileGroupStoryIdentityCollectionViewCellDelegate>
{
    SCUserSession *_userSession;
    SCStoriesCustomStoryMetadata *_customStory;
    id <SCMiniProfileGroupStoryIdentityRowControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)groupStoryIdentityCollectionViewCell:(id)arg1 didTapThumbnailView:(id)arg2;
- (_Bool)shouldSelectCell;
- (void)willDisplayCell:(id)arg1;
- (double)cellHeight;
- (Class)cellClass;
- (id)initWithUserSession:(id)arg1 customStory:(id)arg2 delegate:(id)arg3;

@end

