//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HTSLiveLinkMicMethod, NSDictionary, NSString;

@protocol HTSLiveAnchorDoubleInteractionActions <NSObject>
- (void)trackWithEvent:(NSString *)arg1 extra:(NSDictionary *)arg2;
- (void)onOffScreenBannerShowStart;
- (void)onMediaInteractionSucceeded;
- (void)stopInteractiveMode;
- (void)receiveInvitation:(HTSLiveLinkMicMethod *)arg1;
- (void)replyInvitationWithAgree:(_Bool)arg1;
- (void)rejectPKInvitation:(unsigned long long)arg1;
@end

