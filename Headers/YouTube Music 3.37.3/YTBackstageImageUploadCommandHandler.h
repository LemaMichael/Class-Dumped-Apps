//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTBackstageImagePickerViewControllerDelegate-Protocol.h"
#import "YTBackstageImageUploadEventObserver-Protocol.h"
#import "YTCommandHandler-Protocol.h"

@class GIMMe, NSString, YTBackstageImagePickerViewController, YTBackstageImageUploadService, YTCommandRouter, YTIBackstageImageUploadEndpoint;
@protocol ELMContext, YTResponder;

@interface YTBackstageImageUploadCommandHandler : NSObject <YTBackstageImagePickerViewControllerDelegate, YTBackstageImageUploadEventObserver, YTCommandHandler>
{
    id <ELMContext> _elementsContext;
    YTCommandRouter *_commandRouter;
    id <YTResponder> _firstResponder;
    _Bool _imageIsCropped;
    GIMMe *_gimme;
    YTBackstageImageUploadService *_imageUploadService;
    YTIBackstageImageUploadEndpoint *_imageUploadCommand;
    YTBackstageImagePickerViewController *_imagePickerViewController;
}

@property(retain, nonatomic) YTBackstageImagePickerViewController *imagePickerViewController; // @synthesize imagePickerViewController=_imagePickerViewController;
@property(retain, nonatomic) YTIBackstageImageUploadEndpoint *imageUploadCommand; // @synthesize imageUploadCommand=_imageUploadCommand;
@property(retain, nonatomic) YTBackstageImageUploadService *imageUploadService; // @synthesize imageUploadService=_imageUploadService;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)elementsContext;
- (void)updateImageState:(int)arg1;
- (void)storeImageAsset:(id)arg1 withState:(int)arg2;
- (void)storeInitialAttachmentState;
- (void)resetImageAsset;
- (_Bool)shouldUsePreviewSelectTool;
- (void)imageUploadWithIdentifier:(id)arg1 didFailWithError:(id)arg2;
- (void)imageUploadWithIdentifier:(id)arg1 didSucceedWithBlobId:(id)arg2;
- (void)imageUploadWithIdentifier:(id)arg1 didStartWithAsset:(id)arg2;
- (void)didPickImageWithAsset:(id)arg1;
- (void)executeWithCommand:(id)arg1 entry:(id)arg2 fromView:(id)arg3 sender:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

