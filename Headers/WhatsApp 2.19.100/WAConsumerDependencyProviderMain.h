//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WADependencyProviderMain-Protocol.h"

@interface WAConsumerDependencyProviderMain : NSObject <WADependencyProviderMain>
{
}

- (id)init;
- (void)addLabelsChecksumToResumeQuery:(id)arg1;
- (void)provideMessagesForLabel:(long long)arg1 offset:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)addLabelElementsToChatElement:(id)arg1 forChatSession:(id)arg2;
- (id)provideLabelIDsForMessage:(id)arg1;
- (void)addLabelsRowToGroupInfoView:(id)arg1 section:(id)arg2;
- (void)addLabelsRowToContactView:(id)arg1 section:(id)arg2;
- (void)addLabelDataChangeNotificationObserverForChatMessaagesViewController:(id)arg1;
- (id)provideStatusLabelStringForMessage:(id)arg1;
- (void)handleSetLabelsForMessage:(id)arg1 viewController:(id)arg2;
- (id)provideSMBLabelsForChatSession:(id)arg1;
- (void)handleAddSMBOptionsForChatSession:(id)arg1 chatSessionsViewController:(id)arg2 tableViewCell:(id)arg3 actionSheet:(id)arg4;
- (id)provideSMBChatListHeaderActions;
- (id)provideLabelsStorageHelper;
- (void)handleResetSMBRegistration;
- (id)provideChatViewControllerWithChatSession:(id)arg1;
- (id)provideWelcomeViewController;
- (id)provideProductCatalogManager;
- (id)provideSMBProductViewControllerWithProduct:(id)arg1 storeName:(id)arg2 session:(id)arg3;
- (id)provideSMBCatalogViewControllerWithSession:(id)arg1;
- (void)handleRemoveQuickReplyAttachmentMediaItemAtURL:(id)arg1;
- (id)provideQuickReplyHelperWithViewController:(id)arg1;
- (id)provideChatBarWithFrame:(struct CGRect)arg1 mode:(unsigned long long)arg2;
- (void)handleAddQuickReplyWithMessage:(id)arg1 viewController:(id)arg2;
- (id)provideSettingsViewController;
- (id)provideProfileViewControllerCustomizer;

@end

