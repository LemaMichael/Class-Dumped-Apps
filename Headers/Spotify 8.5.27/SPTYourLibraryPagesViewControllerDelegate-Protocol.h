//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SPTYourLibraryPagesViewController, UIViewController;

@protocol SPTYourLibraryPagesViewControllerDelegate <NSObject>
- (void)yourLibraryPagesViewController:(SPTYourLibraryPagesViewController *)arg1 didChangeActiveViewController:(UIViewController *)arg2;
- (void)yourLibraryPagesViewController:(SPTYourLibraryPagesViewController *)arg1 fromSection:(double)arg2 toSection:(double)arg3 fromPage:(double)arg4 toPage:(double)arg5;
@end
