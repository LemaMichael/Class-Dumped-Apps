//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIFont;

@interface AWENaviBarConfiguration : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_naviBarTitleColor;
    UIFont *_naviBarTitleFont;
    double _naviBarHeight;
    double _leftFixMargin;
    double _rightFixMargin;
    double _buttonHorizontalPadding;
    double _buttonHeight;
    double _buttonMinWidth;
    double _buttonMaxWidth;
    double _itemSpace;
}

+ (id)sharedConfiguration;
@property(nonatomic) double itemSpace; // @synthesize itemSpace=_itemSpace;
@property(nonatomic) double buttonMaxWidth; // @synthesize buttonMaxWidth=_buttonMaxWidth;
@property(nonatomic) double buttonMinWidth; // @synthesize buttonMinWidth=_buttonMinWidth;
@property(nonatomic) double buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(nonatomic) double buttonHorizontalPadding; // @synthesize buttonHorizontalPadding=_buttonHorizontalPadding;
@property(nonatomic) double rightFixMargin; // @synthesize rightFixMargin=_rightFixMargin;
@property(nonatomic) double leftFixMargin; // @synthesize leftFixMargin=_leftFixMargin;
@property(nonatomic) double naviBarHeight; // @synthesize naviBarHeight=_naviBarHeight;
@property(retain, nonatomic) UIFont *naviBarTitleFont; // @synthesize naviBarTitleFont=_naviBarTitleFont;
@property(retain, nonatomic) UIColor *naviBarTitleColor; // @synthesize naviBarTitleColor=_naviBarTitleColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) double rightContentTotalMargin;
@property(readonly, nonatomic) double leftContentTotalMargin;
- (id)imageForButtonPresetStyle:(struct NSString *)arg1 naviBarStyle:(unsigned long long)arg2;
- (id)immersiveImageForButtonPresetStyle:(struct NSString *)arg1;
- (id)constImageForButtonPresetStyle:(struct NSString *)arg1;
- (id)imageForButtonPresetStyle:(struct NSString *)arg1;
- (id)styleImageMap;
- (id)init;

@end

