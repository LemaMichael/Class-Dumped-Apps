//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWESlidingViewControllerDelegate-Protocol.h"

@class AWEGalleryBaseViewController, AWESlidingTabbarView, AWESlidingViewController, NSString;
@protocol AWEUploadResourceViewControllerDelegate;

@interface AWEUploadResourceViewController : UIViewController <AWESlidingViewControllerDelegate>
{
    _Bool _isStoryMode;
    CDUnknownBlockType _selectOnePhotoBlock;
    id <AWEUploadResourceViewControllerDelegate> _delegate;
    AWEGalleryBaseViewController *_videoUploadViewController;
    AWEGalleryBaseViewController *_pictureUploadViewController;
    CDUnknownBlockType _selectVideoCompletionWithAssetModel;
    CDUnknownBlockType _photoSelectedCompletion;
    CDUnknownBlockType _selectedVideoCompletionWithHTSVideoData;
    AWESlidingTabbarView *_slidingTabView;
    AWESlidingViewController *_slidingViewController;
    long long _currentSelectedIndex;
}

@property(nonatomic) long long currentSelectedIndex; // @synthesize currentSelectedIndex=_currentSelectedIndex;
@property(retain, nonatomic) AWESlidingViewController *slidingViewController; // @synthesize slidingViewController=_slidingViewController;
@property(retain, nonatomic) AWESlidingTabbarView *slidingTabView; // @synthesize slidingTabView=_slidingTabView;
@property(copy, nonatomic) CDUnknownBlockType selectedVideoCompletionWithHTSVideoData; // @synthesize selectedVideoCompletionWithHTSVideoData=_selectedVideoCompletionWithHTSVideoData;
@property(copy, nonatomic) CDUnknownBlockType photoSelectedCompletion; // @synthesize photoSelectedCompletion=_photoSelectedCompletion;
@property(copy, nonatomic) CDUnknownBlockType selectVideoCompletionWithAssetModel; // @synthesize selectVideoCompletionWithAssetModel=_selectVideoCompletionWithAssetModel;
@property(retain, nonatomic) AWEGalleryBaseViewController *pictureUploadViewController; // @synthesize pictureUploadViewController=_pictureUploadViewController;
@property(retain, nonatomic) AWEGalleryBaseViewController *videoUploadViewController; // @synthesize videoUploadViewController=_videoUploadViewController;
@property(nonatomic) _Bool isStoryMode; // @synthesize isStoryMode=_isStoryMode;
@property(nonatomic) __weak id <AWEUploadResourceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType selectOnePhotoBlock; // @synthesize selectOnePhotoBlock=_selectOnePhotoBlock;
- (void).cxx_destruct;
- (void)slidingViewController:(id)arg1 didSelectIndex:(long long)arg2;
- (id)slidingViewController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfControllers:(id)arg1;
- (unsigned long long)currentSelectIndex;
- (void)setupUI;
- (void)viewDidLoad;
- (id)initWithSelectedVideoCompletionWithAssetModel:(CDUnknownBlockType)arg1 selectedVideoCompletionWithHTSVideoData:(CDUnknownBlockType)arg2 clickPhotoCompletion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

