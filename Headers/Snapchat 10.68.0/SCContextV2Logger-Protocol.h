//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SCContextSnapViewMetrics;
@protocol SCContextDataProviding;

@protocol SCContextV2Logger <NSObject>
@property(readonly, nonatomic) long long sourceTypeForContextActions;
- (SCContextSnapViewMetrics *)snapViewMetrics;
- (void)trackAudioCallCreated;
- (void)trackVideoCallCreated;
- (void)trackAudioNoteSent;
- (void)trackVideoNoteSent;
- (void)trackStickerSent;
- (void)trackSavedMediaSent;
- (void)trackChatSent;
- (void)trackSnapSent;
- (void)logCardsDisappeared;
- (void)logCardsReappeared;
- (void)logContextMenuDismissedWithExitEvent:(long long)arg1;
- (void)logActionWithTypeString:(NSString *)arg1 cardType:(NSString *)arg2 cardId:(NSString *)arg3 contextInfoProvider:(id <SCContextDataProviding>)arg4;
- (void)logContextMenuPresentWithEntryEvent:(long long)arg1 menuType:(long long)arg2 ctaElementType:(NSString *)arg3 ctaElementIndex:(long long)arg4 ctaMaxElementIndex:(long long)arg5 contextInfoProvider:(id <SCContextDataProviding>)arg6;
- (void)setInviteId:(NSString *)arg1;
- (void)availableContextTypesUpdated:(NSString *)arg1;
- (void)ctaDidLoad;
- (void)logSnapViewedWithInfoProvider:(id <SCContextDataProviding>)arg1;
@end

