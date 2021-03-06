//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTResponderEvent.h"

@class NSString, UIView, UIViewController, YTIDismissableClingRenderer;

@interface YTMClingTriggerResponderEvent : YTResponderEvent
{
    _Bool _suppressCling;
    UIViewController *_viewController;
    UIView *_targetView;
    long long _clingType;
    YTIDismissableClingRenderer *_clingRenderer;
}

+ (id)eventToSuppressClingOfType:(long long)arg1 firstResponder:(id)arg2;
+ (id)eventForClingFromRenderer:(id)arg1 fromViewController:(id)arg2 targetView:(id)arg3 firstResponder:(id)arg4;
+ (id)audioModelEnableClingFromViewController:(id)arg1 targetView:(id)arg2 firstResponder:(id)arg3;
+ (id)OMVPreferredClingFromViewController:(id)arg1 targetView:(id)arg2 firstResponder:(id)arg3;
+ (id)ATVPreferredClingFromViewController:(id)arg1 targetView:(id)arg2 firstResponder:(id)arg3;
+ (id)audioOnlyClingFromViewController:(id)arg1 targetView:(id)arg2 firstResponder:(id)arg3;
@property(readonly, nonatomic) YTIDismissableClingRenderer *clingRenderer; // @synthesize clingRenderer=_clingRenderer;
@property(readonly, nonatomic) _Bool suppressCling; // @synthesize suppressCling=_suppressCling;
@property(readonly, nonatomic) long long clingType; // @synthesize clingType=_clingType;
@property(nonatomic) __weak UIView *targetView; // @synthesize targetView=_targetView;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *clingTypeKey;
- (id)initWithType:(long long)arg1 viewController:(id)arg2 targetView:(id)arg3 clingRenderer:(id)arg4 suppressCling:(_Bool)arg5 firstResponder:(id)arg6;

@end

