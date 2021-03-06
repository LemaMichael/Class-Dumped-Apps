//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEStudioProgressView.h"

@class NSMutableArray, UIImage, UIImageView, UILabel;

@interface HTSVideoProgressView : AWEStudioProgressView
{
    _Bool _showStandardDurationLocation;
    UILabel *_standardDurationLabel;
    NSMutableArray *_markedProgresses;
    NSMutableArray *_markedProgressViews;
    UIImage *_markImage;
    UIImageView *_standardDurationLocation;
    double _standardDuration;
}

+ (id)imageFromColor:(id)arg1;
@property(nonatomic) double standardDuration; // @synthesize standardDuration=_standardDuration;
@property(nonatomic) _Bool showStandardDurationLocation; // @synthesize showStandardDurationLocation=_showStandardDurationLocation;
@property(retain, nonatomic) UIImageView *standardDurationLocation; // @synthesize standardDurationLocation=_standardDurationLocation;
@property(retain, nonatomic) UIImage *markImage; // @synthesize markImage=_markImage;
@property(retain, nonatomic) NSMutableArray *markedProgressViews; // @synthesize markedProgressViews=_markedProgressViews;
@property(retain, nonatomic) NSMutableArray *markedProgresses; // @synthesize markedProgresses=_markedProgresses;
@property(nonatomic) __weak UILabel *standardDurationLabel; // @synthesize standardDurationLabel=_standardDurationLabel;
- (void).cxx_destruct;
- (void)awe_fadeShow:(_Bool)arg1 duration:(double)arg2;
- (void)addMarkedProgress:(id)arg1;
- (void)updateViewWithTimeSegments:(id)arg1 totalTime:(double)arg2;
- (void)setProgress:(float)arg1 duration:(double)arg2 animated:(_Bool)arg3;
- (void)updateStandardDurationIndicatorWithLongVideoEnabled:(_Bool)arg1 standardDuration:(double)arg2 maxDuration:(double)arg3;
- (void)loadStandardDurationIndicatorIfNeed;

@end

