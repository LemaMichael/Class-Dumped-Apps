//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCDraftProtocol-Protocol.h"

@class NSString;

@interface ACCDraftImpl : NSObject <ACCDraftProtocol>
{
}

- (id)draftIDKey;
- (void)clearAllDraft;
- (void)clearAllEditBackUps;
- (void)deleteDraftWithID:(id)arg1;
- (unsigned long long)draftCount;
- (_Bool)hasDraft;
- (void)markAllPublishBackupAsDraft;
- (_Bool)hasPublishBackUp;
- (void)setCacheDirPathWithID:(id)arg1;
- (void)retrieveNewestDraftCoverWithCompletion:(CDUnknownBlockType)arg1;
- (id)retrieveEditBackUps;
- (id)retrieveDrafts;
- (id)retrieveWithDraftId:(id)arg1;
- (void)saveInfoStickerPath:(id)arg1 draftID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveDraftWithPublishViewModel:(id)arg1 video:(id)arg2 backup:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
