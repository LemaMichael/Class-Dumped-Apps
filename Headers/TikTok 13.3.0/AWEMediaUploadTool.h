//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSDictionary, NSString, TTVideoUploadClient;

@interface AWEMediaUploadTool : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    _Bool _isMultiSelect;
    long long _maxSelectNumber;
    long long _source;
    NSDictionary *_configModel;
    TTVideoUploadClient *_videoUploadClient;
    CDUnknownBlockType _progressBlock;
    NSDictionary *_originParam;
    CDUnknownBlockType _completionBlock;
    unsigned long long _videoPlayURLRetryCount;
}

+ (id)sharedUploadMediaTool;
@property(nonatomic) unsigned long long videoPlayURLRetryCount; // @synthesize videoPlayURLRetryCount=_videoPlayURLRetryCount;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) NSDictionary *originParam; // @synthesize originParam=_originParam;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(retain, nonatomic) TTVideoUploadClient *videoUploadClient; // @synthesize videoUploadClient=_videoUploadClient;
@property(retain, nonatomic) NSDictionary *configModel; // @synthesize configModel=_configModel;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long maxSelectNumber; // @synthesize maxSelectNumber=_maxSelectNumber;
@property(nonatomic) _Bool isMultiSelect; // @synthesize isMultiSelect=_isMultiSelect;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imageSavedToPhotosAlbum:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)showImagePicker:(long long)arg1 videoType:(unsigned long long)arg2;
- (void)featchPlayURLWithVideoID:(id)arg1;
- (void)p_uploadVideoWithSelectVideo:(id)arg1;
- (void)p_uploadMultiImage;
- (void)p_uploadImageWithSelectImage:(id)arg1;
- (id)p_actionTitleWithParam:(id)arg1;
- (unsigned long long)p_actionTypeWithParam:(id)arg1;
- (void)reset;
- (void)p_actionHandlerWithSourceType:(unsigned long long)arg1 withParams:(id)arg2;
- (void)uploadMediaWithParams:(id)arg1 compeletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

