//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSSet, UIView, WAMessage, WASearchResultsMessageTableViewCellTextView, WASearchResultsMessageTableViewCellVisualMediaView, WASearchResultsNonvisualAttachmentView;
@protocol WASearchResultsMessageTableViewCellDelegate;

@interface WASearchResultsMessageTableViewCell : UITableViewCell
{
    WAMessage *_message;
    NSSet *_searchTokens;
    id <WASearchResultsMessageTableViewCellDelegate> _delegate;
    UIView *_containerView;
    UIView *_separatorView;
    WASearchResultsMessageTableViewCellTextView *_textView;
    WASearchResultsMessageTableViewCellVisualMediaView *_visualMediaView;
    WASearchResultsNonvisualAttachmentView *_nonvisualMediaView;
    long long _layoutType;
    long long _documentType;
}

+ (id)reuseIdentifierForMessage:(id)arg1 documentType:(long long)arg2;
@property(readonly, nonatomic) long long documentType; // @synthesize documentType=_documentType;
@property(readonly, nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) WASearchResultsNonvisualAttachmentView *nonvisualMediaView; // @synthesize nonvisualMediaView=_nonvisualMediaView;
@property(readonly, nonatomic) WASearchResultsMessageTableViewCellVisualMediaView *visualMediaView; // @synthesize visualMediaView=_visualMediaView;
@property(readonly, nonatomic) WASearchResultsMessageTableViewCellTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <WASearchResultsMessageTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSSet *searchTokens; // @synthesize searchTokens=_searchTokens;
@property(readonly, nonatomic) WAMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (_Bool)messageHasAudio;
- (_Bool)textViewShouldIncludeDate;
- (void)didTapAttachmentView:(id)arg1;
- (void)pausePlayingAudioIfNecessary;
@property(readonly, nonatomic) UIView *mediaView;
- (void)configureWithSearchResultMessage:(id)arg1 searchTokens:(id)arg2 documentType:(long long)arg3 topSeparatorColor:(id)arg4 width:(double)arg5;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

