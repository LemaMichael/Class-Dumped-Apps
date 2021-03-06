//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "SCPageNameLogging-Protocol.h"

@class NSString, SCAddFriendsCameraRollPickerDriver, SCGalleryPhotoLibraryFetcher, UIActivityIndicatorView, UILabel;
@protocol SCAddFriendsCameraRollPickerDriverDelegate, SCCurrentPageTracker, SCPageViewLogging;

@interface SCAddFriendsCameraRollPickerViewController : SIGSubscreenViewController <SCPageNameLogging>
{
    SCGalleryPhotoLibraryFetcher *_photoLibraryFetcher;
    id <SCPageViewLogging> _pageViewLogging;
    id <SCCurrentPageTracker> _currentPageTracker;
    _Bool _isPageSourceFromSettings;
    long long _previousStatusBarStyle;
    SCAddFriendsCameraRollPickerDriver *_cameraRollPickerDriver;
    NSString *_pageViewName;
    id <SCAddFriendsCameraRollPickerDriverDelegate> _pickerViewDelegate;
    UILabel *_loadingText;
    UIActivityIndicatorView *_loadingIndicator;
}

@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UILabel *loadingText; // @synthesize loadingText=_loadingText;
@property(retain, nonatomic) id <SCAddFriendsCameraRollPickerDriverDelegate> pickerViewDelegate; // @synthesize pickerViewDelegate=_pickerViewDelegate;
- (void).cxx_destruct;
- (id)_pagenameForPageView;
- (id)loadScrollView;
- (void)_updateWithPhotoAssets:(id)arg1;
- (void)_setupImageFetch;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithPageViewLogging:(id)arg1 currentPageTracker:(id)arg2 pageViewName:(id)arg3 isPageSourceFromSettings:(_Bool)arg4;
- (id)pageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

