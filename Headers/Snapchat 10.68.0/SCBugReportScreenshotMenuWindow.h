//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UIButton;
@protocol SCBugReportScreenshotMenuWindowDelegate;

@interface SCBugReportScreenshotMenuWindow : UIWindow
{
    UIButton *_takeButton;
    UIButton *_cancelButton;
    id <SCBugReportScreenshotMenuWindowDelegate> _delegate;
}

- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)takeButtonPressed;
- (void)cancelButtonPressed;
- (void)hide;
- (void)show;
- (void)setDelegate:(id)arg1;
- (id)init;

@end
