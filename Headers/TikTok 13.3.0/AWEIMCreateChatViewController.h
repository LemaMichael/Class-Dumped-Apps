//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMListBaseViewController.h"

#import "BTDRouterViewControllerProtocol-Protocol.h"

@class NSString, UILabel;

@interface AWEIMCreateChatViewController : AWEIMListBaseViewController <BTDRouterViewControllerProtocol>
{
    UILabel *_completionLabel;
}

+ (void)__awe__codeRunnerRun_38;
@property(retain, nonatomic) UILabel *completionLabel; // @synthesize completionLabel=_completionLabel;
- (void).cxx_destruct;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (_Bool)canTapCellAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)functionArray;
- (void)tappedFeature:(id)arg1;
- (long long)currentFunctin;
- (void)changeToMultiselect:(_Bool)arg1;
- (void)p_switchToMultiSelect;
- (void)p_cancelMultiSelect;
- (void)p_didTapComplete;
- (void)updateMultiselectCount:(long long)arg1;
- (void)p_updateNavBar;
- (void)p_dismiss;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

