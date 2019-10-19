//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAssetImageGenerator, BaseView, NSURL, SASliderThumb, UILabel;
@protocol SAVideoRangeSliderDelegate;

@interface SAVideoRangeSlider : UIView
{
    _Bool _currentlyScrubbing;
    _Bool _leftFocused;
    _Bool _rightFocused;
    _Bool _lockScrubPosition;
    id <SAVideoRangeSliderDelegate> _delegate;
    double _leftPosition;
    double _rightPosition;
    double _thumbPosition;
    UILabel *_bubleText;
    double _maxGap;
    double _minGap;
    AVAssetImageGenerator *_imageGenerator;
    UIView *_bgView;
    UIView *_trimmedLengthView;
    UIView *_playedLengthView;
    UIView *_centerView;
    NSURL *_videoUrl;
    SASliderThumb *_leftThumb;
    SASliderThumb *_rightThumb;
    UIView *_videoThumb;
    UIView *_scrubThumb;
    BaseView *_popoverBubble;
    double _frameWidth;
    double _frameHeight;
    double _thumbWidth;
    double _thumbHeight;
    double _bgViewHeight;
    double _durationSeconds;
    long long _scrubSide;
}

@property(nonatomic) _Bool lockScrubPosition; // @synthesize lockScrubPosition=_lockScrubPosition;
@property(nonatomic) long long scrubSide; // @synthesize scrubSide=_scrubSide;
@property(nonatomic) _Bool rightFocused; // @synthesize rightFocused=_rightFocused;
@property(nonatomic) _Bool leftFocused; // @synthesize leftFocused=_leftFocused;
@property(nonatomic) _Bool currentlyScrubbing; // @synthesize currentlyScrubbing=_currentlyScrubbing;
@property(readonly, nonatomic) double durationSeconds; // @synthesize durationSeconds=_durationSeconds;
@property(nonatomic) double bgViewHeight; // @synthesize bgViewHeight=_bgViewHeight;
@property(nonatomic) double thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(nonatomic) double thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(nonatomic) double frameHeight; // @synthesize frameHeight=_frameHeight;
@property(nonatomic) double frameWidth; // @synthesize frameWidth=_frameWidth;
@property(retain, nonatomic) BaseView *popoverBubble; // @synthesize popoverBubble=_popoverBubble;
@property(retain, nonatomic) UIView *scrubThumb; // @synthesize scrubThumb=_scrubThumb;
@property(retain, nonatomic) UIView *videoThumb; // @synthesize videoThumb=_videoThumb;
@property(retain, nonatomic) SASliderThumb *rightThumb; // @synthesize rightThumb=_rightThumb;
@property(retain, nonatomic) SASliderThumb *leftThumb; // @synthesize leftThumb=_leftThumb;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) UIView *playedLengthView; // @synthesize playedLengthView=_playedLengthView;
@property(retain, nonatomic) UIView *trimmedLengthView; // @synthesize trimmedLengthView=_trimmedLengthView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(nonatomic) double minGap; // @synthesize minGap=_minGap;
@property(nonatomic) double maxGap; // @synthesize maxGap=_maxGap;
@property(retain, nonatomic) UILabel *bubleText; // @synthesize bubleText=_bubleText;
@property(nonatomic) double thumbPosition; // @synthesize thumbPosition=_thumbPosition;
@property(nonatomic) double rightPosition; // @synthesize rightPosition=_rightPosition;
@property(nonatomic) double leftPosition; // @synthesize leftPosition=_leftPosition;
@property(nonatomic) __weak id <SAVideoRangeSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setBubbleText:(double)arg1;
- (void)hideBubble:(id)arg1;
- (double)thumbTimeInSeconds;
- (double)rightTimeInSeconds;
- (double)leftTimeInSeconds;
- (void)setScrubThumbPosition:(CDStruct_1b6d18a9)arg1;
- (void)layoutSubviews;
- (void)handleCenterPan:(id)arg1;
- (void)handleVideoThumbPan:(id)arg1;
- (void)handleRightPan:(id)arg1;
- (void)handleLeftPan:(id)arg1;
- (void)handleThumbGrab:(id)arg1 upsize:(_Bool)arg2;
- (void)trimFinished;
- (void)movedSeekBar;
- (void)movedScrubBar;
- (void)updateRightPosition:(double)arg1;
- (void)movedRightPosition;
- (void)movedLeftPosition;
- (void)setPopoverBubbleSize:(double)arg1 height:(double)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 videoUrl:(id)arg2;

@end
