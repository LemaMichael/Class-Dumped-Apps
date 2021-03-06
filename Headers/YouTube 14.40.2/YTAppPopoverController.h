//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIPopoverPresentationControllerDelegate.h"

@class GIMMe, NSString, UINavigationController, UIView, UIViewController, YTAppViewController;

@interface YTAppPopoverController : NSObject <UIPopoverPresentationControllerDelegate>
{
    YTAppViewController *_appViewController;
    UINavigationController *_popoverPresentedViewController;
    UIViewController *_popoverPreviousViewControllerForLogging;
    UIView *_popoverDimView;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)appViewController;
- (void)didTapPopoverDismiss;
- (void)didDismissPopover;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (id)popoverPresentedViewController;
- (_Bool)isPresentingAsPopoverViewController:(id)arg1;
- (void)dismissPopover;
- (void)presentPopoverWithViewController:(id)arg1 presentingViewController:(id)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4 arrowDirection:(unsigned long long)arg5 sourceView:(id)arg6 sourceRect:(struct CGRect)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

