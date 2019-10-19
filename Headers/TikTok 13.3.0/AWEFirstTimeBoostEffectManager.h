//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "InstallAndDeviceIDMessage-Protocol.h"

@class AWEAwemeModel, IESEffectModel, NSArray, NSString;

@interface AWEFirstTimeBoostEffectManager : NSObject <InstallAndDeviceIDMessage>
{
    _Bool _observedAppsflyerVideoId;
    _Bool _emptyDeviceIDWhenFetchItemID;
    IESEffectModel *_downloadedEffect;
    NSArray *_downloadedEffects;
    AWEAwemeModel *_firstTimeBoostModel;
}

+ (void)downloadStickerWithStickerIDS:(id)arg1 toDownloadSticker:(id)arg2;
+ (void)requestFirstTimeBoostAwemeModelWithID:(id)arg1;
+ (void)requestAttributionItemID;
+ (_Bool)withinFirstInstallTwintyFourHours;
+ (_Bool)canDownloadFirstTimeBoostModel;
+ (void)downloadFirstTimeBoostEffectIfNeeded;
+ (void)cleanupAfterAppliedFirstTimeBoostEffect;
+ (id)sharedInstance;
@property(nonatomic) _Bool emptyDeviceIDWhenFetchItemID; // @synthesize emptyDeviceIDWhenFetchItemID=_emptyDeviceIDWhenFetchItemID;
@property(nonatomic) _Bool observedAppsflyerVideoId; // @synthesize observedAppsflyerVideoId=_observedAppsflyerVideoId;
@property(retain, nonatomic) AWEAwemeModel *firstTimeBoostModel; // @synthesize firstTimeBoostModel=_firstTimeBoostModel;
@property(retain, nonatomic) NSArray *downloadedEffects; // @synthesize downloadedEffects=_downloadedEffects;
@property(retain, nonatomic) IESEffectModel *downloadedEffect; // @synthesize downloadedEffect=_downloadedEffect;
- (void).cxx_destruct;
- (void)didUpdateDeviceIDFrom:(id)arg1 to:(id)arg2;
- (void)didUpdateInstallIDFrom:(id)arg1 to:(id)arg2;
@property(readonly, nonatomic) _Bool canApplyFirstTimeBoostModel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
