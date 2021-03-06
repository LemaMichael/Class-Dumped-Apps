//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SCGalleryDebugSyncStatusChecker, UIButton, UITextView;
@protocol SCGalleryEntry, SCGallerySnap;

@interface SCGalleryDebugSyncStatusView : UIView
{
    UITextView *_textView;
    UIButton *_refreshButton;
    SCGalleryDebugSyncStatusChecker *_debugSyncStatusChecker;
    id <SCGalleryEntry> _galleryEntry;
    id <SCGallerySnap> _gallerySnap;
}

@property(retain, nonatomic) id <SCGallerySnap> gallerySnap; // @synthesize gallerySnap=_gallerySnap;
@property(retain, nonatomic) id <SCGalleryEntry> galleryEntry; // @synthesize galleryEntry=_galleryEntry;
@property(retain, nonatomic) SCGalleryDebugSyncStatusChecker *debugSyncStatusChecker; // @synthesize debugSyncStatusChecker=_debugSyncStatusChecker;
- (void).cxx_destruct;
- (void)_didPressRefreshButton;
- (void)reset;
- (void)toggle;
- (id)initWithFrame:(struct CGRect)arg1;

@end

