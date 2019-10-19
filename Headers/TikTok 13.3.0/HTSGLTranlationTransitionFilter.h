//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilterTwoInput.h"

@interface HTSGLTranlationTransitionFilter : HTSGLFilterTwoInput
{
    int _texuture2OriginUniform;
    int _shadowColorUniform;
    int _shadowWidthUniform;
    int _brightnessUniform;
    double _progress;
    unsigned long long _direction;
    double _shadowRadiusInPixel;
    double _brightness;
    double _maxRenderSize;
    struct HTSGPUVector4 _shadowColor;
    struct CGPoint _nextImageOriginStart;
    struct CGPoint _nextImageOriginEnd;
}

@property(nonatomic) double maxRenderSize; // @synthesize maxRenderSize=_maxRenderSize;
@property(nonatomic) int brightnessUniform; // @synthesize brightnessUniform=_brightnessUniform;
@property(nonatomic) int shadowWidthUniform; // @synthesize shadowWidthUniform=_shadowWidthUniform;
@property(nonatomic) int shadowColorUniform; // @synthesize shadowColorUniform=_shadowColorUniform;
@property(nonatomic) int texuture2OriginUniform; // @synthesize texuture2OriginUniform=_texuture2OriginUniform;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(nonatomic) double shadowRadiusInPixel; // @synthesize shadowRadiusInPixel=_shadowRadiusInPixel;
@property(nonatomic) struct CGPoint nextImageOriginEnd; // @synthesize nextImageOriginEnd=_nextImageOriginEnd;
@property(nonatomic) struct CGPoint nextImageOriginStart; // @synthesize nextImageOriginStart=_nextImageOriginStart;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) struct HTSGPUVector4 shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (void)updateShadowWidth;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (void)updateNextImageOrigin;
- (id)init;

@end
