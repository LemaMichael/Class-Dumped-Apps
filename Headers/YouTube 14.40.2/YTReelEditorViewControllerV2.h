//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "YTReelCreationViewControllerTransition.h"
#import "YTTopController.h"

@class GIMMe, NSString, YTICommand;

@interface YTReelEditorViewControllerV2 : UIViewController <YTTopController, YTReelCreationViewControllerTransition>
{
    YTICommand *_model;
    GIMMe *_gimme;
    id <YTReelEditorViewControllerDelegate> _delegate;
    id <YTResponder> _parentResponder;
}

@property(nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTReelEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)transitionWillPresentViewController:(id)arg1 animated:(_Bool)arg2 transitionHost:(id)arg3;
- (void)transitionWillDismissViewController:(id)arg1 animated:(_Bool)arg2 transitionHost:(id)arg3;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

