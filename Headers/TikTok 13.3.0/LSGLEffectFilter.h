//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LSGLFilter.h"

@class LSLiveEffectProcessorInterface;

@interface LSGLEffectFilter : LSGLFilter
{
    _Bool _enableEffect;
    LSLiveEffectProcessorInterface *_processor;
}

@property(nonatomic) _Bool enableEffect; // @synthesize enableEffect=_enableEffect;
@property(retain, nonatomic) LSLiveEffectProcessorInterface *processor; // @synthesize processor=_processor;
- (void).cxx_destruct;
- (void)endProcessing;
- (void)startProcessing;
- (void)releaseFBO;
- (void)skipFrameProcess;
- (void)informTargetsAboutNewFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)dealloc;
- (void)initialProcessorWithConfig:(id)arg1;

@end
