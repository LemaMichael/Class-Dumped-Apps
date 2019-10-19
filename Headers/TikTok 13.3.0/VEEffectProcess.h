//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEUnitObject.h"

#import "IESMMEngineBrushProtocol-Protocol.h"
#import "IESMMEngineStickerProtocol-Protocol.h"
#import "IESMMGestureProtocol-Protocol.h"
#import "IESMMHashProtocol-Protocol.h"
#import "VEProcessSampleDelegate-Protocol.h"

@class HTSFilterInterface, HTSGLCropFilter, HTSGLFilter, HTSGLFilterInput, HTSGLPicture, HTSGLTransformFilter, HTSRawDataOutputRender, HTSVideoData, IESGLAddEdgeFilter, IESGLEndingWaterMarkFilter, IESImageAnimationStickerFilter, IESMMEffectGroup, IESMMEffectStickerInfo, IESMMMVModel, IESMMStoryImageGroup, IESPhotoMovieTransManager, IESVideoAddEdgeData, IESVideoEngineEffectFilter, NSMutableArray, NSString, VEReverseUnit;
@protocol HTSGLInput;

@interface VEEffectProcess : VEUnitObject <VEProcessSampleDelegate, IESMMGestureProtocol, IESMMEngineStickerProtocol, IESMMEngineBrushProtocol, IESMMHashProtocol>
{
    _Bool _bUseFilter;
    _Bool _enablePhotoTransManager;
    _Bool _switchStatus;
    _Bool _enableEndingWaterMarkFilter;
    NSString *_route;
    HTSGLFilter *_waterMarkFilter;
    HTSGLFilterInput *_input;
    IESVideoEngineEffectFilter *_engineFilter;
    IESMMEffectStickerInfo *_globalEffectGroupInfo;
    IESMMEffectStickerInfo *_currentPerformEffectPath;
    IESMMMVModel *_mvModel;
    CDUnknownBlockType _imageBlock;
    IESVideoAddEdgeData *_edgeBeforeSticker;
    VEReverseUnit *_reverseUnit;
    HTSRawDataOutputRender *_dataOutput;
    HTSGLFilter *_filter;
    IESGLAddEdgeFilter *_addEdgeFilter;
    IESGLAddEdgeFilter *_beforeStickerAddEdgeFilter;
    HTSGLCropFilter *_cropFilter;
    HTSGLTransformFilter *_transformFilter;
    double _effectCompileCostTime;
    double _effectCompileProcessTime;
    NSMutableArray *_filterArray;
    unsigned long long _fillMode;
    IESImageAnimationStickerFilter *_stickerAnimationFilter;
    IESPhotoMovieTransManager *_photoTransManager;
    IESMMEffectGroup *_effectFilter;
    NSString *_colorFilterPath;
    IESGLEndingWaterMarkFilter *_endingWaterMarkFilter;
    IESMMStoryImageGroup *_storyImageFilter;
    HTSGLPicture *_storySourceImageFilter;
    HTSFilterInterface<HTSGLInput> *_lastFilter;
    long long _processScene;
    NSMutableArray *_brushIDArray;
    NSString *_letterInfo;
    HTSVideoData *_videoData;
    CDUnknownBlockType _stickerStatusBlock;
    struct CGSize _previewSize;
    struct CGSize _inputVideoSize;
    struct CGSize _outputVideoSize;
    struct CGSize _viewContainerSize;
    struct CGSize _storyFrameSize;
}

+ (id)effectProcessWithVideoData:(id)arg1;
+ (id)effectProcessWithVideoData:(id)arg1 mvModel:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType stickerStatusBlock; // @synthesize stickerStatusBlock=_stickerStatusBlock;
@property(retain, nonatomic) HTSVideoData *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) NSString *letterInfo; // @synthesize letterInfo=_letterInfo;
@property(retain, nonatomic) NSMutableArray *brushIDArray; // @synthesize brushIDArray=_brushIDArray;
@property(nonatomic) long long processScene; // @synthesize processScene=_processScene;
@property(nonatomic) struct CGSize storyFrameSize; // @synthesize storyFrameSize=_storyFrameSize;
@property(retain, nonatomic) HTSFilterInterface<HTSGLInput> *lastFilter; // @synthesize lastFilter=_lastFilter;
@property(retain, nonatomic) HTSGLPicture *storySourceImageFilter; // @synthesize storySourceImageFilter=_storySourceImageFilter;
@property(retain, nonatomic) IESMMStoryImageGroup *storyImageFilter; // @synthesize storyImageFilter=_storyImageFilter;
@property(nonatomic) _Bool enableEndingWaterMarkFilter; // @synthesize enableEndingWaterMarkFilter=_enableEndingWaterMarkFilter;
@property(retain, nonatomic) IESGLEndingWaterMarkFilter *endingWaterMarkFilter; // @synthesize endingWaterMarkFilter=_endingWaterMarkFilter;
@property(nonatomic) _Bool switchStatus; // @synthesize switchStatus=_switchStatus;
@property(copy, nonatomic) NSString *colorFilterPath; // @synthesize colorFilterPath=_colorFilterPath;
@property(retain, nonatomic) IESMMEffectGroup *effectFilter; // @synthesize effectFilter=_effectFilter;
@property(retain, nonatomic) IESPhotoMovieTransManager *photoTransManager; // @synthesize photoTransManager=_photoTransManager;
@property(nonatomic) _Bool enablePhotoTransManager; // @synthesize enablePhotoTransManager=_enablePhotoTransManager;
@property(retain, nonatomic) IESImageAnimationStickerFilter *stickerAnimationFilter; // @synthesize stickerAnimationFilter=_stickerAnimationFilter;
@property(nonatomic) unsigned long long fillMode; // @synthesize fillMode=_fillMode;
@property(nonatomic) struct CGSize viewContainerSize; // @synthesize viewContainerSize=_viewContainerSize;
@property(nonatomic) struct CGSize outputVideoSize; // @synthesize outputVideoSize=_outputVideoSize;
@property(nonatomic) struct CGSize inputVideoSize; // @synthesize inputVideoSize=_inputVideoSize;
@property(retain, nonatomic) NSMutableArray *filterArray; // @synthesize filterArray=_filterArray;
@property(nonatomic) double effectCompileProcessTime; // @synthesize effectCompileProcessTime=_effectCompileProcessTime;
@property(nonatomic) double effectCompileCostTime; // @synthesize effectCompileCostTime=_effectCompileCostTime;
@property(retain, nonatomic) HTSGLTransformFilter *transformFilter; // @synthesize transformFilter=_transformFilter;
@property(retain, nonatomic) HTSGLCropFilter *cropFilter; // @synthesize cropFilter=_cropFilter;
@property(retain, nonatomic) IESGLAddEdgeFilter *beforeStickerAddEdgeFilter; // @synthesize beforeStickerAddEdgeFilter=_beforeStickerAddEdgeFilter;
@property(retain, nonatomic) IESGLAddEdgeFilter *addEdgeFilter; // @synthesize addEdgeFilter=_addEdgeFilter;
@property(retain, nonatomic) HTSGLFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) HTSRawDataOutputRender *dataOutput; // @synthesize dataOutput=_dataOutput;
@property(retain, nonatomic) VEReverseUnit *reverseUnit; // @synthesize reverseUnit=_reverseUnit;
@property(retain, nonatomic) IESVideoAddEdgeData *edgeBeforeSticker; // @synthesize edgeBeforeSticker=_edgeBeforeSticker;
@property(copy, nonatomic) CDUnknownBlockType imageBlock; // @synthesize imageBlock=_imageBlock;
@property(retain, nonatomic) IESMMMVModel *mvModel; // @synthesize mvModel=_mvModel;
@property(retain, nonatomic) IESMMEffectStickerInfo *currentPerformEffectPath; // @synthesize currentPerformEffectPath=_currentPerformEffectPath;
@property(retain, nonatomic) IESMMEffectStickerInfo *globalEffectGroupInfo; // @synthesize globalEffectGroupInfo=_globalEffectGroupInfo;
@property(readonly, nonatomic) struct CGSize previewSize; // @synthesize previewSize=_previewSize;
@property(nonatomic) _Bool bUseFilter; // @synthesize bUseFilter=_bUseFilter;
@property(retain, nonatomic) IESVideoEngineEffectFilter *engineFilter; // @synthesize engineFilter=_engineFilter;
@property(retain, nonatomic) HTSGLFilterInput *input; // @synthesize input=_input;
@property(retain, nonatomic) HTSGLFilter *waterMarkFilter; // @synthesize waterMarkFilter=_waterMarkFilter;
@property(retain, nonatomic) NSString *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getMVExportData;
- (id)getProcessMD5;
- (long long)currentBrushNumber;
- (void)setBrushCanvasAlpha:(double)arg1;
- (void)setBrushSize:(double)arg1;
- (void)setBrushColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpah:(double)arg4;
- (void)removeLastBrush;
- (_Bool)brushStart;
- (_Bool)brushEnd;
- (_Bool)isAnimationSticker:(long long)arg1;
- (long long)addStickerbyUIImage:(id)arg1 letterInfo:(id)arg2;
- (struct CGSize)getNewFrameSize;
- (void)processStoryImageFilterWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)setStoryImageFilterForPreview:(id)arg1;
- (_Bool)handleTouchUp:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (_Bool)handleTouchEvent:(struct CGPoint)arg1;
- (_Bool)handleTouchDown:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (_Bool)handleScaleEvent:(double)arg1;
- (_Bool)handleRotationEvent:(double)arg1;
- (_Bool)handleLongPressEventWithLocation:(struct CGPoint)arg1;
- (_Bool)handlePanEventWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2;
- (void)resetTargetVideoSize;
- (void)setTargetVideoSize:(struct CGSize)arg1;
- (void)resetScene:(long long)arg1;
- (void)restoreFromVideoData:(id)arg1;
- (void)updatePreviewSizeByVideoSize:(struct CGSize)arg1;
- (void)setConfig:(id)arg1;
- (_Bool)processSampleData:(id)arg1;
- (void)processPixelBuf:(struct __CVBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2;
- (void)resetTargets;
- (void)resetFilters;
- (void)setEndingGaussIntensity:(double)arg1;
- (void)setEndingWaterMarkIntensity:(double)arg1;
- (void)setEndingWaterMark:(_Bool)arg1 waterImage:(id)arg2 gaussImage:(id)arg3;
- (void)setPhotoMovieTransShowDuration:(double)arg1;
- (void)switchPhotoMovieTransition:(long long)arg1;
- (void)stopChangeStickerDuration:(long long)arg1;
- (void)startChangeStickerDuration:(long long)arg1;
- (void)getSticker:(long long)arg1 props:(id)arg2;
- (void)setStickerAbove:(long long)arg1;
- (void)setSticker:(long long)arg1 startTime:(double)arg2 duration:(double)arg3;
- (void)setSticker:(long long)arg1 alpha:(double)arg2;
- (void)setSticker:(long long)arg1 pauseAnimation:(_Bool)arg2;
- (void)setStickerScale:(long long)arg1 scale:(double)arg2;
- (void)setSticker:(long long)arg1 offsetX:(double)arg2 offsetY:(double)arg3 angle:(double)arg4 scale:(double)arg5;
- (void)removeInfoSticker:(long long)arg1;
- (struct CGSize)getInfoStickerSize:(long long)arg1;
- (struct CGSize)getstickerEditBoxSize:(long long)arg1;
- (void)updateSticker:(long long)arg1;
- (long long)addSubtitleSticker;
- (long long)addInfoSticker:(id)arg1 withEffectInfo:(id)arg2 userInfo:(id)arg3;
- (void)setPreviewFillMode:(unsigned long long)arg1;
- (void)setPreviewSize:(struct CGSize)arg1;
- (void)removeStickerWithKey:(id)arg1;
- (void)addSticker:(id)arg1;
- (void)enableTransformFilter:(struct CGAffineTransform)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)enableAddEdgeFilter:(id)arg1;
- (void)setAddEdgeInfo:(id)arg1;
- (void)updateVideoSize;
- (void)enableCropFilter:(id)arg1;
- (void)setCropInfo:(id)arg1;
- (id)getCurrentComposerNodes;
- (float)getValueForComposerNode:(id)arg1 key:(id)arg2;
- (_Bool)updateComposerNode:(id)arg1 key:(id)arg2 value:(double)arg3;
- (_Bool)replaceComposerNodesWithNew:(id)arg1 old:(id)arg2;
- (_Bool)operateComposerNodes:(id)arg1 operation:(long long)arg2;
- (void)applyEffectWithInfo:(id)arg1 type:(long long)arg2;
- (void)applyEffectIntensity:(struct IESIndensityParam_t)arg1 type:(long long)arg2;
- (void)setEffectLoadStatusBlock:(CDUnknownBlockType)arg1;
- (void)stopEffectStartTime:(double)arg1;
- (void)startEffectWithPathId:(id)arg1 startTime:(double)arg2;
- (void)switchFilterWithPathOne:(id)arg1 PathTwo:(id)arg2 direction:(long long)arg3 progress:(double)arg4;
- (void)applyFilterWithPath:(id)arg1;
- (id)createOrGetEngineFilter;
- (id)createOrGetEffectFilter;
- (id)initWithMVModel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
