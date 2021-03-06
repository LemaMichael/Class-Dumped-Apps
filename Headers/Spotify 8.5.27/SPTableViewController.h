//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, UITableView;

@interface SPTableViewController : SPViewController <UITableViewDelegate, UITableViewDataSource>
{
    long long _style;
    UITableView *_tableView;
    struct CGPoint _storedContentOffset;
}

+ (Class)tableViewClass;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(readonly, nonatomic) UITableView *tableView; // @dynamic tableView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1;
- (id)objectRepresentation;
- (_Bool)restoreWithObjectRepresentation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

