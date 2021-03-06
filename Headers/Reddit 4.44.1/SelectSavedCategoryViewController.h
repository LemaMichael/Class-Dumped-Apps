//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTableViewController.h"

@class NSArray, SavedCategoryPresenter;

@interface SelectSavedCategoryViewController : BaseTableViewController
{
    SavedCategoryPresenter *_savedCategoryPresenter;
    NSArray *_categoryNames;
}

@property(retain, nonatomic) NSArray *categoryNames; // @synthesize categoryNames=_categoryNames;
@property(retain, nonatomic) SavedCategoryPresenter *savedCategoryPresenter; // @synthesize savedCategoryPresenter=_savedCategoryPresenter;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSavedCategoryPresenter:(id)arg1;

@end

