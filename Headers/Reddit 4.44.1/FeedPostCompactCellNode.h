//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseCollectionViewCellNode.h"

#import "ChainedCarouselDisplaying-Protocol.h"
#import "FeedPostCollectionViewItem-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"

@class ASDisplayNode, Carousel, CarouselContainerNode, FeedPostAwardsNode, FeedPostCommentBarNode, FeedPostCompactContentNode, FeedPostEventBarNode, FeedPostModerateBarNode, FeedPostOptions, FeedPostTitleNode, NSString, Post;
@protocol CarouselContainerNodeDelegate, FeedPostCellNodeDelegate><PillContainerNodeDelegate;

@interface FeedPostCompactCellNode : BaseCollectionViewCellNode <ObjectObserverProtocol, ChainedCarouselDisplaying, FeedPostCollectionViewItem>
{
    Carousel *_chainedCarousel;
    Post *_post;
    FeedPostTitleNode *_titleNode;
    id <FeedPostCellNodeDelegate><PillContainerNodeDelegate> _delegate;
    id <CarouselContainerNodeDelegate> _carouselContainerNodeDelegate;
    FeedPostOptions *_options;
    FeedPostAwardsNode *_awardsNode;
    FeedPostCompactContentNode *_contentNode;
    FeedPostCommentBarNode *_commentsBarNode;
    FeedPostModerateBarNode *_modBarNode;
    ASDisplayNode *_separator;
    ASDisplayNode *_chainedDiscoveryNodeSeparator;
    CarouselContainerNode *_chainedDiscoveryNode;
    FeedPostEventBarNode *_eventBarNode;
}

@property(retain, nonatomic) FeedPostEventBarNode *eventBarNode; // @synthesize eventBarNode=_eventBarNode;
@property(retain, nonatomic) CarouselContainerNode *chainedDiscoveryNode; // @synthesize chainedDiscoveryNode=_chainedDiscoveryNode;
@property(retain, nonatomic) ASDisplayNode *chainedDiscoveryNodeSeparator; // @synthesize chainedDiscoveryNodeSeparator=_chainedDiscoveryNodeSeparator;
@property(retain, nonatomic) ASDisplayNode *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) FeedPostModerateBarNode *modBarNode; // @synthesize modBarNode=_modBarNode;
@property(retain, nonatomic) FeedPostCommentBarNode *commentsBarNode; // @synthesize commentsBarNode=_commentsBarNode;
@property(retain, nonatomic) FeedPostCompactContentNode *contentNode; // @synthesize contentNode=_contentNode;
@property(retain, nonatomic) FeedPostAwardsNode *awardsNode; // @synthesize awardsNode=_awardsNode;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <CarouselContainerNodeDelegate> carouselContainerNodeDelegate; // @synthesize carouselContainerNodeDelegate=_carouselContainerNodeDelegate;
@property(nonatomic) __weak id <FeedPostCellNodeDelegate><PillContainerNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FeedPostTitleNode *titleNode; // @synthesize titleNode=_titleNode;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
@property(retain, nonatomic) Carousel *chainedCarousel; // @synthesize chainedCarousel=_chainedCarousel;
- (void).cxx_destruct;
- (void)didEnterAdViewableStateWithVisibilityContext:(id)arg1;
- (void)didExitVisibleStateWithVisibilityContext:(id)arg1;
- (void)didEnterVisibleStateWithVisibilityContext:(id)arg1;
- (void)didExitVisibleThresholdStateWithVisibilityContext:(id)arg1;
- (void)didExitFullyVisibleStateWithVisibilityContext:(id)arg1;
- (void)didEnterVisibleThresholdStateWithVisibilityContext:(id)arg1;
- (void)didEnterFullyVisibleStateWithVisibilityContext:(id)arg1;
- (void)beginVisibilityTracking;
- (void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)layoutDidFinish;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)hideCommentsBar;
- (void)createAwardsNodeIfNecessary;
- (id)initWithPost:(id)arg1 postMetaViewModel:(id)arg2 options:(id)arg3 carouselContainerNodeDelegate:(id)arg4 delegate:(id)arg5 visibilityTracker:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

