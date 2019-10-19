//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEBubbleManager : NSObject
{
}

+ (id)sharedManager;
- (void)removeBubble:(id)arg1;
- (id)showBubble:(id)arg1 forView:(id)arg2 inDirection:(unsigned long long)arg3 isDarkBackGround:(_Bool)arg4;
- (id)showBubble:(id)arg1 forView:(id)arg2 anchorAdjustment:(struct CGPoint)arg3 inDirection:(unsigned long long)arg4 isDarkBackGround:(_Bool)arg5;
- (id)showBubble:(id)arg1 forView:(id)arg2 anchorAdjustment:(struct CGPoint)arg3 inDirection:(unsigned long long)arg4 isDarkBackGround:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (id)showBubble:(id)arg1 forView:(id)arg2 inContainerView:(id)arg3 anchorAdjustment:(struct CGPoint)arg4 inDirection:(unsigned long long)arg5 isDarkBackGround:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;
- (id)showBubbleWithCustomView:(id)arg1 contentInsets:(struct UIEdgeInsets)arg2 isDarkBackGround:(_Bool)arg3 forView:(id)arg4 inContainerView:(id)arg5 fromAnchor:(struct CGPoint)arg6 inDirection:(unsigned long long)arg7 anchorAdjustment:(struct CGPoint)arg8 withAnimations:(CDUnknownBlockType)arg9 completion:(CDUnknownBlockType)arg10;
- (id)showAttributedBubble:(id)arg1 withCustomImage:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3 textInsets:(struct UIEdgeInsets)arg4 fixedSize:(struct CGSize)arg5 needFixedWidth:(_Bool)arg6 forView:(id)arg7 inContainerView:(id)arg8 fromAnchor:(struct CGPoint)arg9 inDirection:(unsigned long long)arg10 anchorAdjustment:(struct CGPoint)arg11 withAnimations:(CDUnknownBlockType)arg12 completion:(CDUnknownBlockType)arg13;
- (id)showBubble:(id)arg1 withCustomImage:(id)arg2 imageInsets:(struct UIEdgeInsets)arg3 textInsets:(struct UIEdgeInsets)arg4 font:(id)arg5 fontColor:(id)arg6 fixedSize:(struct CGSize)arg7 forView:(id)arg8 inContainerView:(id)arg9 fromAnchor:(struct CGPoint)arg10 inDirection:(unsigned long long)arg11 anchorAdjustment:(struct CGPoint)arg12 withAnimations:(CDUnknownBlockType)arg13 completion:(CDUnknownBlockType)arg14;
- (id)showBubbleView:(id)arg1 forView:(id)arg2 inContainerView:(id)arg3 fromAnchor:(struct CGPoint)arg4 inDirection:(unsigned long long)arg5 withAnimations:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (id)showBubble:(id)arg1 forView:(id)arg2 fromAnchor:(struct CGPoint)arg3 anchorAdjustment:(struct CGPoint)arg4 cornerAdjustment:(struct CGPoint)arg5 fixedSize:(struct CGSize)arg6 inDirection:(unsigned long long)arg7 isDarkBackGround:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;
- (id)showBubble:(id)arg1 forView:(id)arg2 withIconView:(id)arg3 iconViewInsets:(struct UIEdgeInsets)arg4 fromAnchor:(struct CGPoint)arg5 anchorAdjustment:(struct CGPoint)arg6 cornerAdjustment:(struct CGPoint)arg7 fixedSize:(struct CGSize)arg8 inDirection:(unsigned long long)arg9 isDarkBackGround:(_Bool)arg10 completion:(CDUnknownBlockType)arg11;
- (id)showBubble:(id)arg1 forView:(id)arg2 inContainerView:(id)arg3 fromAnchor:(struct CGPoint)arg4 anchorAdjustment:(struct CGPoint)arg5 inDirection:(unsigned long long)arg6 withAnimations:(CDUnknownBlockType)arg7 isDarkBackGround:(_Bool)arg8 completion:(CDUnknownBlockType)arg9;

@end
