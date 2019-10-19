//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCFriendUnifiedProfileCognacNotificationActionHandlerDelegate-Protocol.h"
#import "SCFriendUnifiedProfileMessageNotificationActionHandlerDelegate-Protocol.h"
#import "SCRetentionPolicyDelegate-Protocol.h"

@class NSString, SCAddTempSnapchatterActionHandler, SCArroyoConversationIdsManager, SCBlockTempSnapchatterActionHandler, SCFeatureSettingsManager, SCFriendUnifiedProfileCognacNotificationActionHandler, SCFriendUnifiedProfileDataSource, SCFriendUnifiedProfileMessageNotificationActionHandler, SCFriendUnifiedProfileStoryNotificationsActionHandler, SCLazy, SCReportSnapchatterActionHandler, SCRetentionPolicyActionHandler, SCShareFriendActionManager, SCShareUsernameActionHandler, SCSnapchattersActionHandler, UIViewController;
@protocol SCChatConversationManager, SCFriendUnifiedActionMenuSettingsActionHandlerDelegate;

@interface SCFriendUnifiedActionMenuSettingsActionHandler : NSObject <SCFriendUnifiedProfileMessageNotificationActionHandlerDelegate, SCRetentionPolicyDelegate, SCFriendUnifiedProfileCognacNotificationActionHandlerDelegate, SCActionHandling>
{
    SCFriendUnifiedProfileDataSource *_dataSource;
    SCLazy *_friendsFeedDataAccess;
    SCArroyoConversationIdsManager *_arroyoConversationIdsManager;
    id <SCChatConversationManager> _conversationManager;
    SCLazy *_pinnedConversationsDataCoordinator;
    SCFriendUnifiedProfileMessageNotificationActionHandler *_messageNotificationActionHandler;
    SCReportSnapchatterActionHandler *_reportActionHandler;
    SCRetentionPolicyActionHandler *_retentionPolicyActionHandler;
    SCSnapchattersActionHandler *_addFriendsActionHandler;
    SCShareUsernameActionHandler *_shareUsernameActionHandler;
    SCShareFriendActionManager *_shareFriendActionManager;
    SCFriendUnifiedProfileStoryNotificationsActionHandler *_storyNotificationsActionHandler;
    SCAddTempSnapchatterActionHandler *_addTempSnapchatterActionHandler;
    SCBlockTempSnapchatterActionHandler *_blockTempSnapchatterActionHandler;
    SCReportSnapchatterActionHandler *_reportTempSnapchatterActionHandler;
    SCFriendUnifiedProfileCognacNotificationActionHandler *_cognacNotificationActionHandler;
    SCFeatureSettingsManager *_featureSettingsManager;
    UIViewController *_presentingViewController;
    id <SCFriendUnifiedActionMenuSettingsActionHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCFriendUnifiedActionMenuSettingsActionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)_didPinConversation:(id)arg1 success:(_Bool)arg2;
- (void)_handleTapPinOrUnpinConversation;
- (void)_handleTapStoryNotificationsActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (void)_clearConversation;
- (void)_handleTapClearConversation;
- (void)didChangeCognacNotificationStatus:(_Bool)arg1;
- (void)didStartChangeCognacNotificationStatus:(_Bool)arg1;
- (void)didChangeRetentionPolicyWithSuccess:(_Bool)arg1 retentionInMinutes:(unsigned long long)arg2;
- (void)didStartChangeRetentionPolicy;
- (void)messageNotificationActionHandler:(id)arg1 didChangeNotificationStatusWithSuccess:(_Bool)arg2 isDotNotDisturb:(_Bool)arg3;
- (void)messageNotificationActionHandler:(id)arg1 didStartChangeNotificationStatus:(_Bool)arg2;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithUserSession:(id)arg1 friendScoreCoordinator:(id)arg2 snapchattersDataMutator:(id)arg3 tempSnapchatterDataCoordinator:(id)arg4 userInfoProvider:(id)arg5 friendsFeedDataAccess:(id)arg6 conversationManager:(id)arg7 arroyoConversationIdsManager:(id)arg8 pinnedConversationsDataCoordinator:(id)arg9 dataSource:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
