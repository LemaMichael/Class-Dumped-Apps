//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureMetadataOutputObjectsDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSString;
@protocol AWEQRCodeScanManagerDelegate, OS_dispatch_queue;

@interface AWEQRCodeScanManager : NSObject <AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _enableScan;
    _Bool _hasZoomed;
    id <AWEQRCodeScanManagerDelegate> _delegate;
    AVCaptureSession *_session;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    AVCaptureDeviceInput *_deviceInput;
    AVCaptureMetadataOutput *_metadataOutput;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedManager;
@property(nonatomic) _Bool hasZoomed; // @synthesize hasZoomed=_hasZoomed;
@property(nonatomic) _Bool enableScan; // @synthesize enableScan=_enableScan;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) AVCaptureMetadataOutput *metadataOutput; // @synthesize metadataOutput=_metadataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *deviceInput; // @synthesize deviceInput=_deviceInput;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) __weak id <AWEQRCodeScanManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playSoundName:(id)arg1;
- (void)cancelSampleBufferDelegate;
- (void)resetSampleBufferDelegate;
- (void)videoPreviewLayerRemoveFromSuperlayer;
- (void)addVideoPreviewLayerToView:(id)arg1;
- (void)stopRunning;
- (void)startRunning;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (void)setVideoScale:(double)arg1;
- (void)setupSessionPreset:(id)arg1 metadataObjectTypes:(id)arg2 currentController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
