//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableView.h>

#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol _WAChatListHeaderTableViewDelegate;

@interface _WAChatListHeaderTableView : UITableView <UITableViewDelegate>
{
    NSMutableArray *_headerActions;
    NSArray *_cells;
    id <_WAChatListHeaderTableViewDelegate> _actionDelegate;
}

@property(nonatomic) __weak id <_WAChatListHeaderTableViewDelegate> actionDelegate; // @synthesize actionDelegate=_actionDelegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateChatCounts;
- (void)fontSizeDidChange:(id)arg1;
- (void)didMoveToWindow;
- (double)preferredHeight;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

