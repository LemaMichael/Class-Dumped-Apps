//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTViewControllerContainer-Protocol.h"

@class NSArray, UIViewController;

@protocol SPNavigationLikeController <SPTViewControllerContainer>
- (NSArray *)popToRootViewControllerAnimated:(_Bool)arg1;
- (NSArray *)popToViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (UIViewController *)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(UIViewController *)arg1 onTopOf:(UIViewController *)arg2 animated:(_Bool)arg3;
- (void)pushViewControllerOnTopOfTheNavigationStack:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(UIViewController *)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(NSArray *)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(NSArray *)arg1;
@end

