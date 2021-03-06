//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIRenderer;

@interface YTIInviteMorePanelRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentsArray; // @dynamic contentsArray;
@property(readonly, nonatomic) unsigned long long contentsArray_Count; // @dynamic contentsArray_Count;
@property(nonatomic) _Bool hasInviteButton; // @dynamic hasInviteButton;
@property(nonatomic) _Bool hasMaxContactsError; // @dynamic hasMaxContactsError;
@property(nonatomic) _Bool hasMaxContactsErrorConfirm; // @dynamic hasMaxContactsErrorConfirm;
@property(nonatomic) _Bool hasMaxSelectableContacts; // @dynamic hasMaxSelectableContacts;
@property(nonatomic) _Bool hasNewGroupInviteButton; // @dynamic hasNewGroupInviteButton;
@property(nonatomic) _Bool hasNoMoreContactsText; // @dynamic hasNoMoreContactsText;
@property(nonatomic) _Bool hasOnSuccessNavigation; // @dynamic hasOnSuccessNavigation;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIButtonSupportedRenderers *inviteButton; // @dynamic inviteButton;
@property(retain, nonatomic) NSMutableArray *linkSharingRenderersArray; // @dynamic linkSharingRenderersArray;
@property(readonly, nonatomic) unsigned long long linkSharingRenderersArray_Count; // @dynamic linkSharingRenderersArray_Count;
@property(retain, nonatomic) YTIFormattedString *maxContactsError; // @dynamic maxContactsError;
@property(retain, nonatomic) YTIFormattedString *maxContactsErrorConfirm; // @dynamic maxContactsErrorConfirm;
@property(nonatomic) int maxSelectableContacts; // @dynamic maxSelectableContacts;
@property(retain, nonatomic) YTIRenderer *newGroupInviteButton; // @dynamic newGroupInviteButton;
@property(retain, nonatomic) YTIFormattedString *noMoreContactsText; // @dynamic noMoreContactsText;
@property(retain, nonatomic) YTICommand *onSuccessNavigation; // @dynamic onSuccessNavigation;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

