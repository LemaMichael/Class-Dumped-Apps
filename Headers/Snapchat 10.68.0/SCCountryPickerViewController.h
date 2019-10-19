//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, SCHeader, UITableView;
@protocol SCUnauthenticatedStyleHelper;

@interface SCCountryPickerViewController : UIViewController <SCHeaderDataSource, SCHeaderDelegate, UITableViewDataSource, UITableViewDelegate>
{
    id <SCUnauthenticatedStyleHelper> _styleHelper;
    SCHeader *_header;
    UITableView *_countryTableView;
    NSArray *_countryCodes;
    CDUnknownBlockType _countrySelectedBlock;
    CDUnknownBlockType _countryPickerExitedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType countryPickerExitedBlock; // @synthesize countryPickerExitedBlock=_countryPickerExitedBlock;
@property(copy, nonatomic) CDUnknownBlockType countrySelectedBlock; // @synthesize countrySelectedBlock=_countrySelectedBlock;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)backgroundColorForHeader;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (void)_initTableView;
- (void)_initHeader;
- (void)_initSubviews;
- (void)viewDidLoad;
- (id)initWithCountryCodes:(id)arg1 styleHelper:(id)arg2 countrySelected:(CDUnknownBlockType)arg3 countryPickerExited:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
