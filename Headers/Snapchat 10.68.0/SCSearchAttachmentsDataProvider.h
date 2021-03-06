//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCEventAnnouncing-Protocol.h"
#import "SCSearchAttachmentsClipboardProviderListener-Protocol.h"

@class NSArray, NSString, NSURL, SCEventListenerAnnouncer, SCSearchAttachmentsClipboardProvider, SCSearchAttachmentsDataModel, SCSearchAttachmentsDataProviderListenerAnnouncer, SCUserSession, UIImage;

@interface SCSearchAttachmentsDataProvider : NSObject <SCSearchAttachmentsClipboardProviderListener, SCEventAnnouncing>
{
    SCUserSession *_userSession;
    SCSearchAttachmentsClipboardProvider *_clipboardProvider;
    SCSearchAttachmentsDataProviderListenerAnnouncer *_eventAnnouncer;
    SCSearchAttachmentsDataModel *_clipboardModel;
    SCEventListenerAnnouncer *_loggingAnnouncer;
    NSURL *_attachedURL;
    UIImage *_snapImage;
}

+ (id)announcerIdentifier;
@property(retain, nonatomic) UIImage *snapImage; // @synthesize snapImage=_snapImage;
@property(retain, nonatomic) NSURL *attachedURL; // @synthesize attachedURL=_attachedURL;
- (void).cxx_destruct;
- (void)_updateClipboardURL:(id)arg1 withTitle:(id)arg2;
- (void)_updateRecentAttachedURL:(id)arg1 withTitle:(id)arg2;
- (void)_downloadTitleForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_setRecentAttachedURL:(id)arg1;
- (void)_removeURL:(id)arg1;
- (void)attachmentFromClipboardDidUpdate:(id)arg1;
- (void)removeURL:(id)arg1;
@property(readonly, nonatomic) NSURL *removedClipboardURL;
- (void)setRecentAttachedURL:(id)arg1;
@property(readonly, nonatomic) NSArray *recentAddedAttachments;
@property(nonatomic) unsigned long long clipboardState;
@property(readonly, nonatomic) SCSearchAttachmentsDataModel *attachmentFromClipboard;
- (void)dealloc;
- (void)removeAttachmentsListener:(id)arg1;
- (void)addAttachmentsListener:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

