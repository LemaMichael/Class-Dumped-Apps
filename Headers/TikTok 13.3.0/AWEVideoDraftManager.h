//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEVideoDraftManager : NSObject
{
}

+ (_Bool)enableHQVFrameWithModel:(id)arg1;
+ (void)relatedUserAndDrafts:(id)arg1;
+ (id)argumentsForSQL;
+ (void)trackService:(id)arg1 model:(id)arg2 action:(id)arg3 error:(id)arg4;
+ (void)retrieveNewestDraftCoverWithCompletion:(CDUnknownBlockType)arg1;
+ (unsigned long long)draftCount;
+ (_Bool)hasDraft;
+ (void)markAllPublishBackupAsDraft;
+ (_Bool)hasPublishBackUp;
+ (void)deleteDraft:(id)arg1 error:(id *)arg2;
+ (void)deleteDraftWithID:(id)arg1 error:(id *)arg2;
+ (void)deleteDraftWithID:(id)arg1;
+ (void)setCacheDirPathWithID:(id)arg1;
+ (void)clearAllDraft;
+ (id)retrieveDrafts;
+ (id)retrieveWithDraftId:(id)arg1;
+ (void)clearAllEditBackUps;
+ (id)retrieveEditBackUps;
+ (id)__retrieveDrafts;
+ (void)saveInfoStickerPath:(id)arg1 draftID:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)__saveDraftWithPublishViewModel:(id)arg1 video:(id)arg2 backup:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)saveDraftWithPublishViewModel:(id)arg1 video:(id)arg2 backup:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)draftQueue;

@end
