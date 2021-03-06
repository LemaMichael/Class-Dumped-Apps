//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UILabel, UIPageControl, UIScrollView, UIView;
@protocol SCShakeAttachmentViewDelegate;

@interface SCShakeAttachmentViewProvider : NSObject <UIScrollViewDelegate>
{
    UIView *_attachmentsContentView;
    UIView *_addAttachmentView;
    NSMutableArray *_attachments;
    id <SCShakeAttachmentViewDelegate> _delegate;
    UIScrollView *_attachmentsScrollView;
    UIView *_outerBorderOutlineView;
    UIPageControl *_attachmentsPageControl;
    UILabel *_editAnnotateLabel;
}

@property(retain, nonatomic) UILabel *editAnnotateLabel; // @synthesize editAnnotateLabel=_editAnnotateLabel;
@property(retain, nonatomic) UIPageControl *attachmentsPageControl; // @synthesize attachmentsPageControl=_attachmentsPageControl;
@property(retain, nonatomic) UIView *outerBorderOutlineView; // @synthesize outerBorderOutlineView=_outerBorderOutlineView;
@property(retain, nonatomic) UIScrollView *attachmentsScrollView; // @synthesize attachmentsScrollView=_attachmentsScrollView;
@property(nonatomic) __weak id <SCShakeAttachmentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_nextAttachmentPageSingleTap:(id)arg1;
- (void)_addAttachmentSingleTap:(id)arg1;
- (void)_attachmentDidSingleTap:(id)arg1;
- (void)_updateAddAttachmentViewPosition;
- (id)_createAddAttachmentView;
- (id)_createAttachmentView:(id)arg1;
- (id)_getAttachmentLeftCoord:(long long)arg1;
- (void)_updateAttachmentContent;
- (void)deleteAttatchmentAtIndex:(long long)arg1;
- (void)updateAttachmentAtIndex:(long long)arg1 image:(id)arg2 type:(unsigned long long)arg3;
- (void)addAttachment:(id)arg1 type:(unsigned long long)arg2;
- (void)setScrollingEnabled:(_Bool)arg1;
- (void)setupPageControl;
- (void)setupEditAnnotateLabel;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

