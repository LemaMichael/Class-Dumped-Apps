//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCUserSessionScoped-Protocol.h"

@class NSArray, NSNumber, NSString, SCBitmojiBuilderListenerAnnouncer, SCBitmojiBuilderService, SCCache, SCDisposableObserver, SCEncryptedCache;
@protocol SCBitmojiAvatarProvider, SCPerforming;

@interface SCBitmojiBuilderManager : NSObject <SCUserSessionScoped>
{
    id <SCPerforming> _performer;
    SCDisposableObserver *_avatarIdObserver;
    SCBitmojiBuilderListenerAnnouncer *_eventAnnouncer;
    NSNumber *_outfitVersion;
    SCCache *_assetCache;
    SCEncryptedCache *_avatarCache;
    id <SCBitmojiAvatarProvider> _bitmojiAvatarProvider;
    SCBitmojiBuilderService *_bitmojiBuilderService;
    NSArray *_outfitBrands;
    NSArray *_outfitTemplateIds;
}

@property(retain) NSArray *outfitTemplateIds; // @synthesize outfitTemplateIds=_outfitTemplateIds;
@property(retain) NSArray *outfitBrands; // @synthesize outfitBrands=_outfitBrands;
@property(retain, nonatomic) SCBitmojiBuilderService *bitmojiBuilderService; // @synthesize bitmojiBuilderService=_bitmojiBuilderService;
@property(retain, nonatomic) id <SCBitmojiAvatarProvider> bitmojiAvatarProvider; // @synthesize bitmojiAvatarProvider=_bitmojiAvatarProvider;
@property(retain, nonatomic) SCEncryptedCache *avatarCache; // @synthesize avatarCache=_avatarCache;
@property(retain, nonatomic) SCCache *assetCache; // @synthesize assetCache=_assetCache;
@property(retain) NSNumber *outfitVersion; // @synthesize outfitVersion=_outfitVersion;
@property(readonly, nonatomic) SCBitmojiBuilderListenerAnnouncer *eventAnnouncer; // @synthesize eventAnnouncer=_eventAnnouncer;
- (void).cxx_destruct;
- (void)_updateOutfitsWithSoju:(id)arg1;
- (void)_resetCache:(unsigned long long)arg1;
- (void)_bitmojiAvatarIdDidChange;
- (void)_outfitsVersionDidChange;
- (void)_fetchAvatarPreviewFromServer:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchAvatarPreviewFromCache:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchAssetFromServer:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_fetchAssetFromCache:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchAvatarPreview:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchAsset:(id)arg1 contexts:(id)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)getOutfitTemplateIds;
- (id)getOutfitPack;
- (_Bool)isOutfitPackFetched;
- (void)fetchOutfitPack;
- (void)invalidate;
- (id)initWithAssetCache:(id)arg1 avatarCache:(id)arg2 bitmojiAvatarProvider:(id)arg3 bitmojiBuilderService:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
