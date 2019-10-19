//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCEasyTipViewDelegate-Protocol.h"

@class NSString, NSTimer, TooltipModel;
@protocol AbstractTooltipView;

@interface TooltipManager : NSObject <RCEasyTipViewDelegate>
{
    TooltipModel *_queuedModel;
    NSTimer *_timer;
    id <AbstractTooltipView> _tooltipView;
}

+ (void)resetLoggedOutUXReminderTooltips;
+ (id)keyForType:(unsigned long long)arg1;
+ (_Bool)requiresLoginForType:(unsigned long long)arg1;
+ (id)defaultTextForType:(unsigned long long)arg1;
+ (_Bool)userHasSeenTooltipType:(unsigned long long)arg1;
+ (id)tooltipViewWithModel:(id)arg1;
+ (id)sharedManager;
@property(nonatomic) __weak id <AbstractTooltipView> tooltipView; // @synthesize tooltipView=_tooltipView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TooltipModel *queuedModel; // @synthesize queuedModel=_queuedModel;
- (void).cxx_destruct;
- (void)didDismissTip:(id)arg1;
- (void)willDismissTip:(id)arg1;
- (void)didShowTip:(id)arg1;
- (void)willShowTip:(id)arg1;
- (void)timerTriggered:(id)arg1;
- (void)showTooltipWithModel:(id)arg1;
- (void)showToolTipType:(unsigned long long)arg1 anchorView:(id)arg2 transitioning:(_Bool)arg3 arrowPosition:(long long)arg4 customText:(id)arg5 analyticsSource:(id)arg6 analyticsId:(id)arg7;
- (void)reset;
- (_Bool)isDisplaying;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
