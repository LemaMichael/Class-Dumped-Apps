//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6Apollo25ApolloTableViewController.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@interface _TtC6Apollo27SettingsAboutViewController : _TtC6Apollo25ApolloTableViewController <MFMailComposeViewControllerDelegate>
{
    // Error parsing type: , name: tableHeaderView
    // Error parsing type: , name: apolloIconImageView
    // Error parsing type: , name: informationLabel
    // Error parsing type: , name: firstView
}

- (void).cxx_destruct;
- (void)longPressedTableViewWithGestureRecognizer:(id)arg1;
- (void)shareBarButtonItemTapped:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)headerTapped:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;

@end

