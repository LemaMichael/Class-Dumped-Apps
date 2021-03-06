//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SCMapTimeAndWeatherView-Protocol.h"

@class NSDictionary, NSString, UIImage, UIImageView, UILabel;

@interface SCMapTimeAndWeatherView : UIView <SCMapTimeAndWeatherView>
{
    UILabel *_timeLabel;
    UIView *_line;
    UIView *_bottomContainer;
    UILabel *_temperatureLabel;
    UIImageView *_weatherImageView;
    NSDictionary *_textAttributes;
    _Bool _showsExtendedWeatherForLocalTime;
    NSString *_timeText;
    UIImage *_weatherImage;
    NSString *_temperatureText;
}

@property(nonatomic) _Bool showsExtendedWeatherForLocalTime; // @synthesize showsExtendedWeatherForLocalTime=_showsExtendedWeatherForLocalTime;
@property(readonly, copy, nonatomic) NSString *temperatureText; // @synthesize temperatureText=_temperatureText;
@property(readonly, nonatomic) UIImage *weatherImage; // @synthesize weatherImage=_weatherImage;
@property(readonly, copy, nonatomic) NSString *timeText; // @synthesize timeText=_timeText;
- (void).cxx_destruct;
- (void)setTimeAndWeatherLabelHidden:(_Bool)arg1;
- (void)setTimeText:(id)arg1 weatherImage:(id)arg2 temperatureText:(id)arg3 force:(_Bool)arg4;
- (void)setTimeText:(id)arg1 weatherImage:(id)arg2 temperatureText:(id)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

