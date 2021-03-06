//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEShareMessage-Protocol.h"

@class NSString;

@interface AWEShareServiceExtension : NSObject <AWEShareMessage>
{
}

- (void)_repostToFollowTarget:(id)arg1 targetID:(id)arg2;
- (void)_unfavoriteTarget:(id)arg1 targetID:(id)arg2;
- (void)_favoriteTarget:(id)arg1 targetID:(id)arg2;
- (void)_turnFriendVisibleToPrivateTarget:(id)arg1 targetID:(id)arg2;
- (void)_turnPrivateToFriendVisibleTarget:(id)arg1 targetID:(id)arg2;
- (void)_turnPrivateToPublicWithAweme:(id)arg1 targetID:(id)arg2;
- (void)_doActualPublicToPrivacyType:(unsigned long long)arg1 awemeModel:(id)arg2 successToast:(id)arg3 targetID:(id)arg4;
- (void)_turnPublicToPrivacyType:(unsigned long long)arg1 aweModel:(id)arg2 targetID:(id)arg3;
- (void)_switchVideoPrivacyWithTarget:(id)arg1 targetID:(id)arg2;
- (void)_livePhotoLocalSaveTarget:(id)arg1 targetID:(id)arg2;
- (void)_localSaveImage:(id)arg1;
- (void)_localSaveTarget:(id)arg1 targetID:(id)arg2 shareType:(long long)arg3;
- (void)_localSaveWithoutWatermarkTarget:(id)arg1 targetID:(id)arg2;
- (void)_shareAsGifTarget:(id)arg1 targetID:(id)arg2 shareType:(long long)arg3;
- (void)_reportTarget:(id)arg1 targetID:(id)arg2;
- (void)_showDeleteAdInfoModalWithDesc:(id)arg1;
- (void)_deleteTarget:(id)arg1 targetID:(id)arg2;
- (void)_reactTarget:(id)arg1 targetID:(id)arg2;
- (void)_musicallyDuetTarget:(id)arg1 targetID:(id)arg2;
- (void)fetchCommerceStickerInfoWithStickerID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_reuseStickerTarget:(id)arg1 targetID:(id)arg2;
- (void)_openDouPlusWithTargetID:(id)arg1;
- (void)_showAdMaterialPlanWithTitle:(id)arg1 description:(id)arg2 actionButtonTitle:(id)arg3;
- (void)_changeAdToPrivacyType:(unsigned long long)arg1 error:(id)arg2;
- (void)_topVideo:(id)arg1 top:(_Bool)arg2 targetID:(id)arg3;
- (void)openBusinessOpportunityWithTargetID:(id)arg1;
- (void)_donationShareOtherWithAweme:(id)arg1;
- (void)_donationShareMeWithAweme:(id)arg1;
- (void)shareFinishedWithType:(long long)arg1 succeed:(_Bool)arg2;
- (void)shareWithType:(long long)arg1 context:(id)arg2 targetType:(unsigned long long)arg3 targetID:(id)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

