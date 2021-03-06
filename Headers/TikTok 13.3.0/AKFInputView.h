//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AKFTextField, NSMutableArray, UIColor;
@protocol AKFCAShapeLayer;

@interface AKFInputView : UIView
{
    id <AKFCAShapeLayer> _backgroundLayer;
    id <AKFCAShapeLayer> _pickerIconLayer;
    NSMutableArray *_constraints;
    _Bool _needsUpdateBackground;
    UIView *_blurView;
    UIColor *_borderColor;
    long long _style;
    double _borderWidth;
    UIView *_contentView;
    double _cornerRadius;
    UIColor *_inputBackgroundColor;
    unsigned long long _roundedCorners;
    AKFTextField *_textField;
    UIColor *_inputColor;
    long long _type;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) UIColor *inputColor; // @synthesize inputColor=_inputColor;
@property(retain, nonatomic) AKFTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) unsigned long long roundedCorners; // @synthesize roundedCorners=_roundedCorners;
@property(copy, nonatomic) UIColor *inputBackgroundColor; // @synthesize inputBackgroundColor=_inputBackgroundColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
- (void).cxx_destruct;
- (void)_layoutPickerViewForBackgroundFrame:(struct CGRect)arg1;
- (void)_setNeedsUpdateBackground;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

