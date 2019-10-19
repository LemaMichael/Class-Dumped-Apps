//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTEditSheetControllerResizable.h"

@class UIScrollView, UIView<YTEditSheetControllerResizable>;

@protocol YTEditSheetControllerContent <YTEditSheetControllerResizable>
- (UIScrollView *)contentScrollView;

@optional
@property(nonatomic) struct CGRect visibleRect;
@property(nonatomic) __weak id <YTEditSheetControllerState> stateDelegate;
- (_Bool)forceFullscreenEnabled;
- (double)minimumContentHeight;
- (UIView<YTEditSheetControllerResizable> *)contentHeaderView;
- (id <YTEditSheetControllerHeaderConfiguration>)contentHeaderConfiguration;
- (id <YTEditComponentStyle>)style;
- (_Bool)showsScrim;
@end
