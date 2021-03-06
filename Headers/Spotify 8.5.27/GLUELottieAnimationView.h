//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LOTAnimationView.h"

#import "GLUEAnimationControlling-Protocol.h"
#import "GLUEAnimationLoading-Protocol.h"
#import "GLUEAnimationLottieStyling-Protocol.h"

@class NSMutableDictionary, NSString;

@interface GLUELottieAnimationView : LOTAnimationView <GLUEAnimationLoading, GLUEAnimationControlling, GLUEAnimationLottieStyling>
{
    NSMutableDictionary *_colorCallbackByPath;
}

@property(retain, nonatomic) NSMutableDictionary *colorCallbackByPath; // @synthesize colorCallbackByPath=_colorCallbackByPath;
- (void).cxx_destruct;
- (void)playToProgress:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setAnimationPath:(id)arg1;
- (void)setColor:(id)arg1 forPath:(struct NSString *)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) double animationDuration;
@property(nonatomic) double animationProgress;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAnimationPlaying;
@property(nonatomic) _Bool loopAnimation;
@property(readonly) Class superclass;

@end

