//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@protocol SCCreativePreviewScanResultProtocol;

@interface SCScanResultNavigationController : UINavigationController
{
    id <SCCreativePreviewScanResultProtocol> _creativePreviewDelegate;
}

@property(nonatomic) __weak id <SCCreativePreviewScanResultProtocol> creativePreviewDelegate; // @synthesize creativePreviewDelegate=_creativePreviewDelegate;
- (void).cxx_destruct;
- (_Bool)shouldDisplayStatusBar;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dismissPresentingCreativePreview;

@end

