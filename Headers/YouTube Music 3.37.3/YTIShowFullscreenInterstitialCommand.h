//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTELMCommandHandler-Protocol.h"

@class ELMPBElement, NSString, YTIElementLoggingContainer;

@interface YTIShowFullscreenInterstitialCommand : GPBMessage <YTELMCommandHandler>
{
}

+ (id)descriptor;
- (id)elementsContextForGimme:(id)arg1 responder:(id)arg2;
- (id)executeWithContext:(id)arg1 sender:(id)arg2 recognizer:(id)arg3 gimme:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) ELMPBElement *element; // @dynamic element;
@property(retain, nonatomic) YTIElementLoggingContainer *elementLoggingContainer; // @dynamic elementLoggingContainer;
@property(nonatomic) _Bool enableClientImpressionThrottling; // @dynamic enableClientImpressionThrottling;
@property(nonatomic) _Bool hasElement; // @dynamic hasElement;
@property(nonatomic) _Bool hasElementLoggingContainer; // @dynamic hasElementLoggingContainer;
@property(nonatomic) _Bool hasEnableClientImpressionThrottling; // @dynamic hasEnableClientImpressionThrottling;
@property(nonatomic) _Bool hasHideStatusBar; // @dynamic hasHideStatusBar;
@property(nonatomic) _Bool hasLockOrientationToPortrait; // @dynamic hasLockOrientationToPortrait;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hideStatusBar; // @dynamic hideStatusBar;
@property(nonatomic) _Bool lockOrientationToPortrait; // @dynamic lockOrientationToPortrait;
@property(readonly) Class superclass;

@end
