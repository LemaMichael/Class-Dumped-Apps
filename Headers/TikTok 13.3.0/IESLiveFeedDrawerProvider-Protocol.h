//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSEventContext, NSString, UIView, UIViewController;
@protocol HTSLivePluginLayoutView;

@protocol IESLiveFeedDrawerProvider <NSObject>
@property(retain, nonatomic) UIViewController *viewController;
@property(retain, nonatomic) HTSEventContext *trackContext;
- (void)showEntranceGuide;
- (UIView<HTSLivePluginLayoutView> *)feedDrawerEntrance;
- (void)hideFeedDrawer;
- (void)showFeedDrawerFrom:(NSString *)arg1;
- (void)setEnableShowGesture:(_Bool)arg1;
- (void)addShowGestureForView:(UIView *)arg1;
@end
