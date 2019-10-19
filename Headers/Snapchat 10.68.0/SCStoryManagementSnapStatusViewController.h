//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCStoryManagementSnapStatusViewDelegate-Protocol.h"

@class NSString, SCStoryManagementSnapStatusView;
@protocol SCStoryManagementSnapStatusViewControllerDelegate;

@interface SCStoryManagementSnapStatusViewController : UIViewController <SCStoryManagementSnapStatusViewDelegate>
{
    SCStoryManagementSnapStatusView *_statusView;
    id <SCStoryManagementSnapStatusViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCStoryManagementSnapStatusViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateViewForSnapInfoViewModel:(id)arg1;
- (void)setSnapInfoViewModel:(id)arg1;
- (void)storyManagementSnapStatusViewDidTapToRetryPosting:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
