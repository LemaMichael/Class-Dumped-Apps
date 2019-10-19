//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VerticalLineView.h"

#import "AttributedLabelRegularDelegate-Protocol.h"
#import "ObjectObserverProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AttributedLabelRegular, CheckboxButton, Comment, CommentAwardsView, NSString, RichTextLoader, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CommentHeaderViewDelegate;

@interface CommentHeaderView : VerticalLineView <UIGestureRecognizerDelegate, AttributedLabelRegularDelegate, ObjectObserverProtocol>
{
    _Bool _isInModQueue;
    _Bool _showSubredditName;
    id <CommentHeaderViewDelegate> _delegate;
    Comment *_comment;
    CheckboxButton *_bulkActionCheckbox;
    AttributedLabelRegular *_commentUserAndTimeLabel;
    AttributedLabelRegular *_iconsLabel;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_singleTapRecognizer;
    RichTextLoader *_richTextLoader;
    CommentAwardsView *_awardsSummaryView;
}

+ (struct CGSize)calculatedSizeWithData:(id)arg1;
@property(retain, nonatomic) CommentAwardsView *awardsSummaryView; // @synthesize awardsSummaryView=_awardsSummaryView;
@property(retain, nonatomic) RichTextLoader *richTextLoader; // @synthesize richTextLoader=_richTextLoader;
@property(retain, nonatomic) UITapGestureRecognizer *singleTapRecognizer; // @synthesize singleTapRecognizer=_singleTapRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) AttributedLabelRegular *iconsLabel; // @synthesize iconsLabel=_iconsLabel;
@property(retain, nonatomic) AttributedLabelRegular *commentUserAndTimeLabel; // @synthesize commentUserAndTimeLabel=_commentUserAndTimeLabel;
@property(nonatomic) _Bool showSubredditName; // @synthesize showSubredditName=_showSubredditName;
@property(nonatomic) _Bool isInModQueue; // @synthesize isInModQueue=_isInModQueue;
@property(retain, nonatomic) CheckboxButton *bulkActionCheckbox; // @synthesize bulkActionCheckbox=_bulkActionCheckbox;
@property(retain, nonatomic) Comment *comment; // @synthesize comment=_comment;
@property(nonatomic) __weak id <CommentHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapAwards:(id)arg1;
- (void)didSingleTapComment:(id)arg1;
- (void)didLongTapComment:(id)arg1;
- (void)attributedLabelRegularDidTapUnlinkedLabel:(id)arg1;
- (void)attributedLabelRegular:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)didInitializeTap:(id)arg1;
- (void)enableBulkActionsWithDelegate:(id)arg1;
- (void)configureIconStringLabel;
- (void)layoutSubviews;
- (void)updateLastVerticalLineColorForVoteState;
- (void)updateContentViewsForData:(id)arg1;
- (void)setShouldHighlightBackground:(_Bool)arg1;
- (void)configureWithData:(id)arg1 andDelegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
