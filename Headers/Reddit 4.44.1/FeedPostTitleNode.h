//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseFeedDisplayNode.h"

#import "ASTextNodeDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"
#import "TemplateParserContext-Protocol.h"

@class AFNetworkImageNode, ASDisplayNode, ASTextNode, BaseButtonNode, FeedPostOptions, FeedPostTitleOptions, NSString, Post, PostMetaViewModel, RichTextLoader, UIView;
@protocol FeedPostTitleNodeDelegate;

@interface FeedPostTitleNode : BaseFeedDisplayNode <ASTextNodeDelegate, ObjectObserverProtocol, TemplateParserContext>
{
    id <FeedPostTitleNodeDelegate> _delegate;
    Post *_post;
    FeedPostOptions *_options;
    FeedPostTitleOptions *_titleOptions;
    PostMetaViewModel *_postMetaViewModel;
    AFNetworkImageNode *_subredditButtonNode;
    BaseButtonNode *_subscribeButtonNode;
    ASTextNode *_titleTextNode;
    ASTextNode *_detailsTextNode;
    ASTextNode *_iconsTextNode;
    BaseButtonNode *_overflowButtonNode;
    ASDisplayNode *_checkboxNode;
    RichTextLoader *_richTextLoader;
}

@property(retain, nonatomic) RichTextLoader *richTextLoader; // @synthesize richTextLoader=_richTextLoader;
@property(retain, nonatomic) ASDisplayNode *checkboxNode; // @synthesize checkboxNode=_checkboxNode;
@property(retain, nonatomic) BaseButtonNode *overflowButtonNode; // @synthesize overflowButtonNode=_overflowButtonNode;
@property(retain, nonatomic) ASTextNode *iconsTextNode; // @synthesize iconsTextNode=_iconsTextNode;
@property(retain, nonatomic) ASTextNode *detailsTextNode; // @synthesize detailsTextNode=_detailsTextNode;
@property(retain, nonatomic) ASTextNode *titleTextNode; // @synthesize titleTextNode=_titleTextNode;
@property(retain, nonatomic) BaseButtonNode *subscribeButtonNode; // @synthesize subscribeButtonNode=_subscribeButtonNode;
@property(retain, nonatomic) AFNetworkImageNode *subredditButtonNode; // @synthesize subredditButtonNode=_subredditButtonNode;
@property(retain, nonatomic) PostMetaViewModel *postMetaViewModel; // @synthesize postMetaViewModel=_postMetaViewModel;
@property(retain, nonatomic) FeedPostTitleOptions *titleOptions; // @synthesize titleOptions=_titleOptions;
@property(retain, nonatomic) FeedPostOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) Post *post; // @synthesize post=_post;
@property(nonatomic) __weak id <FeedPostTitleNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isSubscribed;
@property(readonly, nonatomic) _Bool shouldShowSubscribeButton;
@property(readonly, nonatomic) UIView *subscribeTooltipAnchorView;
@property(readonly, nonatomic) struct CGSize subredditIconSize;
- (id)pillForTemplateName:(id)arg1;
- (id)valueForTemplateName:(id)arg1;
- (void)updateContentViewsForData:(id)arg1;
- (void)updateSubscribeButtonAfterSubscriptionChanges:(_Bool)arg1;
- (void)subredditSubscriptionDidChange:(id)arg1;
- (void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4 textRange:(struct _NSRange)arg5;
- (_Bool)textNode:(id)arg1 shouldHighlightLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(struct CGPoint)arg4;
- (void)overflowButtonTapped:(id)arg1;
- (void)iconsTextNodeTapped:(id)arg1;
- (void)subscribeButtonTapped:(id)arg1;
- (void)subredditButtonTapped:(id)arg1;
- (void)configureBigSubscribeButton;
- (void)configureDefaultSubscribeButton;
- (void)configureSubscribeButton;
- (void)configureTextNodes;
- (void)configureSubredditIconNode;
- (void)configureNodes;
- (void)createOverflowButtonNode;
- (void)createIconTextNode;
- (void)createDetailsTextNode;
- (void)createTitleTextNode;
- (void)createSubredditButtonNodes;
- (void)createNodes;
- (id)regularLayoutSpecThatFit:(CDStruct_90e057aa)arg1;
- (id)compactLayoutSpecThatFit:(CDStruct_90e057aa)arg1;
- (id)layoutSpecThatFits:(CDStruct_90e057aa)arg1;
- (void)didLoad;
- (void)enableCheckBoxWithDelegate:(id)arg1 isSelected:(_Bool)arg2;
- (id)initWithPost:(id)arg1 postMetaViewModel:(id)arg2 options:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

