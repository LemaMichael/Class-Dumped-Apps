//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, UIColor;

@interface AWEBezierCircleView : UIView
{
    double _progressLineWidth;
    double _backgroundLineWidth;
    double _percentage;
    UIColor *_backgroundStrokeColor;
    UIColor *_progressStrokeColor;
    double _offset;
    double _step;
    CAShapeLayer *_backgroundLayer;
    CAShapeLayer *_progressLayer;
}

@property(retain, nonatomic) CAShapeLayer *progressLayer; // @synthesize progressLayer=_progressLayer;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) double step; // @synthesize step=_step;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIColor *progressStrokeColor; // @synthesize progressStrokeColor=_progressStrokeColor;
@property(retain, nonatomic) UIColor *backgroundStrokeColor; // @synthesize backgroundStrokeColor=_backgroundStrokeColor;
@property(nonatomic) double percentage; // @synthesize percentage=_percentage;
@property(nonatomic) double backgroundLineWidth; // @synthesize backgroundLineWidth=_backgroundLineWidth;
@property(nonatomic) double progressLineWidth; // @synthesize progressLineWidth=_progressLineWidth;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setProgressCircleLine;
- (void)setBackgroundCircleLine;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
