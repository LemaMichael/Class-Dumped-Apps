//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BaseTableView, NSArray, NSString;
@protocol EmojiAutocompleteViewDelegate;

@interface EmojiAutocompleteView : BaseView <UITableViewDelegate, UITableViewDataSource>
{
    id <EmojiAutocompleteViewDelegate> _delegate;
    BaseTableView *_tableView;
    NSArray *_emojiSuggestions;
    NSString *_word;
    struct _NSRange _range;
}

@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *word; // @synthesize word=_word;
@property(copy, nonatomic) NSArray *emojiSuggestions; // @synthesize emojiSuggestions=_emojiSuggestions;
@property(retain, nonatomic) BaseTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <EmojiAutocompleteViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)topLine;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)closeSuggestions;
- (void)configureWithEmojisSuggestions:(id)arg1 usingWord:(id)arg2 range:(struct _NSRange)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

