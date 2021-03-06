//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSString, UIColor, UIView;

@protocol IESLiveToastFactory <NSObject>
- (void)showTopCustomView:(UIView *)arg1 duration:(double)arg2;
- (void)showTopAttributedToast:(NSAttributedString *)arg1 duration:(double)arg2 discardable:(_Bool)arg3 priority:(unsigned long long)arg4 gradientFromColor:(UIColor *)arg5 gradientToColor:(UIColor *)arg6;
- (void)showTopToast:(NSString *)arg1 duration:(double)arg2 discardable:(_Bool)arg3 priority:(unsigned long long)arg4 gradientFromColor:(UIColor *)arg5 gradientToColor:(UIColor *)arg6;
- (void)showTopToast:(NSString *)arg1;
- (void)hideHUD;
- (void)showHUD:(NSString *)arg1 inView:(UIView *)arg2;
- (void)showHUD:(NSString *)arg1;
@end

