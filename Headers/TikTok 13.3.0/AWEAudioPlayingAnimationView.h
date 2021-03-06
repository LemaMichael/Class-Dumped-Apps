//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface AWEAudioPlayingAnimationView : UIView
{
    _Bool _stop;
    NSMutableArray *_bars;
}

@property(nonatomic) _Bool stop; // @synthesize stop=_stop;
@property(retain, nonatomic) NSMutableArray *bars; // @synthesize bars=_bars;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)beginSecondStepAnimationForView:(id)arg1;
- (void)beginFirstStepAnimationForView:(id)arg1;
- (void)beginAnimation;
- (struct CGRect)secondStepAniamtionFrame:(struct CGRect)arg1;
- (struct CGRect)firstStepAnimationFrame:(struct CGRect)arg1;
- (id)originalBarFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2;

@end

