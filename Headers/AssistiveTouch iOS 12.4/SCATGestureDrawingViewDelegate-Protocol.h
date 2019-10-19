//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCATGestureDrawingViewController;
@protocol SCATElement;

@protocol SCATGestureDrawingViewDelegate <NSObject>
- (void)drawingViewController:(SCATGestureDrawingViewController *)arg1 shouldResetScanningFromElement:(id <SCATElement>)arg2;
- (void)exitDrawingViewController:(SCATGestureDrawingViewController *)arg1;
- (_Bool)drawingViewController:(SCATGestureDrawingViewController *)arg1 moveFingersToPoints:(NSArray *)arg2;
- (void)touchUpForDrawingViewController:(SCATGestureDrawingViewController *)arg1;
- (void)touchDownForDrawingViewController:(SCATGestureDrawingViewController *)arg1;
@end
