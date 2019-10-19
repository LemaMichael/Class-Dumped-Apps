//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCColorPickerDelegate-Protocol.h"
#import "SCDrawingDelegate-Protocol.h"

@class NSString, SCColorPicker, SCDrawingButton, SCDrawingView, SCGradientView, SCGrowingButton, UIImage, UIImageView, UIView;
@protocol SCBugReportDrawOnAttachmentViewControllerDelegate;

@interface SCBugReportDrawOnAttachmentViewController : UIViewController <SCColorPickerDelegate, SCDrawingDelegate>
{
    id <SCBugReportDrawOnAttachmentViewControllerDelegate> _delegate;
    UIImage *_originalImage;
    UIImageView *_originalImageView;
    SCDrawingView *_drawingView;
    SCGrowingButton *_xButton;
    UIView *_iconsContainerView;
    SCColorPicker *_colorPicker;
    SCDrawingButton *_drawingButton;
    SCGrowingButton *_trashButton;
    SCGradientView *_topGradient;
    SCGradientView *_bottomGradient;
    SCGrowingButton *_checkButton;
}

@property(retain, nonatomic) SCGrowingButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) SCGradientView *bottomGradient; // @synthesize bottomGradient=_bottomGradient;
@property(retain, nonatomic) SCGradientView *topGradient; // @synthesize topGradient=_topGradient;
@property(retain, nonatomic) SCGrowingButton *trashButton; // @synthesize trashButton=_trashButton;
@property(retain, nonatomic) SCDrawingView *drawingView; // @synthesize drawingView=_drawingView;
@property(retain, nonatomic) SCDrawingButton *drawingButton; // @synthesize drawingButton=_drawingButton;
@property(retain, nonatomic) SCColorPicker *colorPicker; // @synthesize colorPicker=_colorPicker;
@property(retain, nonatomic) UIView *iconsContainerView; // @synthesize iconsContainerView=_iconsContainerView;
@property(retain, nonatomic) SCGrowingButton *xButton; // @synthesize xButton=_xButton;
- (void).cxx_destruct;
- (void)colorChanged:(id)arg1;
- (void)setupGradients;
- (void)initColorPicker;
- (void)setActionButtonsForDrawingHidden:(_Bool)arg1;
- (void)didEndDrawingWithStrokeSize:(double)arg1 isResized:(_Bool)arg2;
- (void)didPinchBrush;
- (void)didStartDrawing;
- (void)didAlterDrawing;
- (void)drawingEnabled:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)layoutGrowingButton:(id)arg1 withButtonFrame:(struct CGRect)arg2;
- (struct CGRect)colorPickerFrame;
- (struct CGRect)drawingButtonFrame;
- (void)cancelButtonPressed;
- (void)deleteButtonPressed;
- (void)saveButtonPressed;
- (void)discardButtonPressed;
- (struct CGRect)checkButtonFrame;
- (struct CGRect)trashButtonFrame;
- (void)drawingPress:(id)arg1;
- (id)prepareEditImage;
- (void)dismissViewController:(_Bool)arg1;
- (void)setEditAttachmentDelegate:(id)arg1;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
