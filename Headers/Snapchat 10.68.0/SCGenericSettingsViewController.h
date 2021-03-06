//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "SCHeaderDataSource-Protocol.h"
#import "SCHeaderDelegate-Protocol.h"

@class NSString, SCHeader, UIView;

@interface SCGenericSettingsViewController : SCLeftSwipableViewController <SCHeaderDataSource, SCHeaderDelegate>
{
    unsigned long long _headerStyle;
    unsigned long long _headerCardViewStyle;
    SCHeader *_header;
    UIView *_containerView;
}

+ (id)createHeaderLabel:(id)arg1;
+ (id)createHeaderLabel:(id)arg1 labelColor:(id)arg2;
+ (id)addLabelToHeader:(id)arg1 labelText:(id)arg2 verticalPadding:(double)arg3;
+ (id)addLabelToHeader:(id)arg1 labelText:(id)arg2 verticalPadding:(double)arg3 labelColor:(id)arg4;
+ (id)addLabelToHeader:(id)arg1 labelText:(id)arg2;
+ (id)addLabelToHeaderInSection:(id)arg1 labelText:(id)arg2;
+ (id)viewForHeaderInSection:(id)arg1 labelColor:(id)arg2;
+ (id)viewForHeaderInSection:(id)arg1;
+ (double)heightForHeaderInSection:(id)arg1 labelText:(id)arg2;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (void)leftSwipeSucceed;
- (_Bool)inValidView:(id)arg1;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)saveSetting;
- (id)getTitle;
- (void)initHeader;
- (void)loadView;
- (id)initWithHeaderStyle:(unsigned long long)arg1 headerCardStyle:(unsigned long long)arg2;
- (id)initWithHeaderStyle:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

