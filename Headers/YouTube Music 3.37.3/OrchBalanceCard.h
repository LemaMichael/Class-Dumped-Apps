//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, OrchInfoMessage, OrchLink, OrchProgressBar, OrchUiFieldGrouping;

@interface OrchBalanceCard : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *accountDetailArray; // @dynamic accountDetailArray;
@property(readonly, nonatomic) unsigned long long accountDetailArray_Count; // @dynamic accountDetailArray_Count;
@property(retain, nonatomic) NSMutableArray *additionalInfoArray; // @dynamic additionalInfoArray;
@property(readonly, nonatomic) unsigned long long additionalInfoArray_Count; // @dynamic additionalInfoArray_Count;
@property(copy, nonatomic) NSString *balance; // @dynamic balance;
@property(copy, nonatomic) NSString *balanceHint; // @dynamic balanceHint;
@property(retain, nonatomic) OrchLink *callToAction; // @dynamic callToAction;
@property(retain, nonatomic) NSMutableArray *confirmationDialogArray; // @dynamic confirmationDialogArray;
@property(readonly, nonatomic) unsigned long long confirmationDialogArray_Count; // @dynamic confirmationDialogArray_Count;
@property(nonatomic) _Bool hasBalance; // @dynamic hasBalance;
@property(nonatomic) _Bool hasBalanceHint; // @dynamic hasBalanceHint;
@property(nonatomic) _Bool hasCallToAction; // @dynamic hasCallToAction;
@property(nonatomic) _Bool hasHintForBalance; // @dynamic hasHintForBalance;
@property(nonatomic) _Bool hasProgressBar; // @dynamic hasProgressBar;
@property(nonatomic) _Bool hasSubtitle; // @dynamic hasSubtitle;
@property(nonatomic) _Bool hasSubtitleLink; // @dynamic hasSubtitleLink;
@property(nonatomic) _Bool hasSubtitleUiFieldGrouping; // @dynamic hasSubtitleUiFieldGrouping;
@property(nonatomic) _Bool hasThresholdPaymentInfo; // @dynamic hasThresholdPaymentInfo;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasUiReference; // @dynamic hasUiReference;
@property(retain, nonatomic) OrchInfoMessage *hintForBalance; // @dynamic hintForBalance;
@property(retain, nonatomic) OrchProgressBar *progressBar; // @dynamic progressBar;
@property(retain, nonatomic) NSMutableArray *simpleFormArray; // @dynamic simpleFormArray;
@property(readonly, nonatomic) unsigned long long simpleFormArray_Count; // @dynamic simpleFormArray_Count;
@property(retain, nonatomic) OrchInfoMessage *subtitle; // @dynamic subtitle;
@property(retain, nonatomic) OrchLink *subtitleLink; // @dynamic subtitleLink;
@property(retain, nonatomic) OrchUiFieldGrouping *subtitleUiFieldGrouping; // @dynamic subtitleUiFieldGrouping;
@property(retain, nonatomic) OrchInfoMessage *thresholdPaymentInfo; // @dynamic thresholdPaymentInfo;
@property(retain, nonatomic) OrchInfoMessage *title; // @dynamic title;
@property(nonatomic) long long uiReference; // @dynamic uiReference;

@end
