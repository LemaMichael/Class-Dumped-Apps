//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTContactEntityModel.h"

#import "YTMutableEntity-Protocol.h"

@class NSData, NSDictionary, NSString, YTThumbnailDetailsModel;

@interface YTMutableContactEntityModel : YTContactEntityModel <YTMutableEntity>
{
}

- (void)parseAndExtractFieldsFromProtoIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setMetadata:(id)arg1;
- (void)setData:(id)arg1;
@property(nonatomic) _Bool suppressContactMenu; // @dynamic suppressContactMenu;
@property(retain, nonatomic) NSString *serializedContactInvitee; // @dynamic serializedContactInvitee;
@property(retain, nonatomic) NSString *externalChannelId; // @dynamic externalChannelId;
@property(retain, nonatomic) NSString *unblockToken; // @dynamic unblockToken;
@property(retain, nonatomic) NSString *blockToken; // @dynamic blockToken;
@property(retain, nonatomic) NSString *removeToken; // @dynamic removeToken;
@property(retain, nonatomic) NSString *reinviteToken; // @dynamic reinviteToken;
@property(retain, nonatomic) NSString *cancelInviteToken; // @dynamic cancelInviteToken;
@property(retain, nonatomic) NSString *rejectInviteToken; // @dynamic rejectInviteToken;
@property(retain, nonatomic) NSString *acceptInviteToken; // @dynamic acceptInviteToken;
@property(retain, nonatomic) NSString *inviteToken; // @dynamic inviteToken;
@property(retain, nonatomic) YTThumbnailDetailsModel *avatar; // @dynamic avatar;
@property(nonatomic) _Bool viewer; // @dynamic viewer;
@property(retain, nonatomic) NSData *name; // @dynamic name;
- (id)initWithEntityStore:(id)arg1 entityKey:(id)arg2;

// Remaining properties
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *entityKey;
@property(readonly, copy, nonatomic) NSData *entityVersion;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDictionary *metadata;
@property(readonly) Class superclass;

@end
