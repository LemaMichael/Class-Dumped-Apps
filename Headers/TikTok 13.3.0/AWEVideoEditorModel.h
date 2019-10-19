//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, NSValue;

@interface AWEVideoEditorModel : NSObject
{
    _Bool _enableCropMode;
    AVAsset *_avAsset;
    AVAsset *_scaledAsset;
    NSValue *_originSizeOfVideo;
    long long _rotateFactor;
    unsigned long long _cropMode;
    struct CGRect _cropFrameInPixelDivScale;
    struct CGRect _cropFrameInPoint;
}

@property(nonatomic) _Bool enableCropMode; // @synthesize enableCropMode=_enableCropMode;
@property(nonatomic) unsigned long long cropMode; // @synthesize cropMode=_cropMode;
@property(nonatomic) long long rotateFactor; // @synthesize rotateFactor=_rotateFactor;
@property(retain, nonatomic) NSValue *originSizeOfVideo; // @synthesize originSizeOfVideo=_originSizeOfVideo;
@property(retain, nonatomic) AVAsset *scaledAsset; // @synthesize scaledAsset=_scaledAsset;
@property(retain, nonatomic) AVAsset *avAsset; // @synthesize avAsset=_avAsset;
@property(nonatomic) struct CGRect cropFrameInPoint; // @synthesize cropFrameInPoint=_cropFrameInPoint;
@property(nonatomic) struct CGRect cropFrameInPixelDivScale; // @synthesize cropFrameInPixelDivScale=_cropFrameInPixelDivScale;
- (void).cxx_destruct;

@end
