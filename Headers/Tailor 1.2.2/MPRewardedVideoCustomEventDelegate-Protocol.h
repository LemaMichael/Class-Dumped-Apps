//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPRewardedVideoCustomEvent, MPRewardedVideoReward, NSError, NSString;
@protocol MPMediationSettingsProtocol;

@protocol MPRewardedVideoCustomEventDelegate <NSObject>
- (void)trackClick;
- (void)trackImpression;
- (NSString *)customerIdForRewardedVideoCustomEvent:(MPRewardedVideoCustomEvent *)arg1;
- (void)rewardedVideoShouldRewardUserForCustomEvent:(MPRewardedVideoCustomEvent *)arg1 reward:(MPRewardedVideoReward *)arg2;
- (void)rewardedVideoDidReceiveTapEventForCustomEvent:(MPRewardedVideoCustomEvent *)arg1;
- (void)rewardedVideoWillLeaveApplicationForCustomEvent:(MPRewardedVideoCustomEvent *)arg1;
- (void)rewardedVideoDidDisappearForCustomEvent:(MPRewardedVideoCustomEvent *)arg1;
- (void)rewardedVideoWillDisappearForCustomEvent:(MPRewardedVideoCustomEvent *)arg1;
- (void)rewardedVideoDidAppearForCustomEvent:(MPRewardedVideoCustomEvent *)arg1;
- (void)rewardedVideoWillAppearForCustomEvent:(MPRewardedVideoCustomEvent *)arg1;
- (void)rewardedVideoDidFailToPlayForCustomEvent:(MPRewardedVideoCustomEvent *)arg1 error:(NSError *)arg2;
- (void)rewardedVideoDidExpireForCustomEvent:(MPRewardedVideoCustomEvent *)arg1;
- (void)rewardedVideoDidFailToLoadAdForCustomEvent:(MPRewardedVideoCustomEvent *)arg1 error:(NSError *)arg2;
- (void)rewardedVideoDidLoadAdForCustomEvent:(MPRewardedVideoCustomEvent *)arg1;
- (id <MPMediationSettingsProtocol>)instanceMediationSettingsForClass:(Class)arg1;
@end

