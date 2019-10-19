//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAPaymentHelper : NSObject
{
}

+ (void)checkBlockedStatusAndPromptUnblockForJID:(id)arg1 fromViewController:(id)arg2 userUnblockActionHandler:(CDUnknownBlockType)arg3 userCancelledHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)showUnblockPromptWithMessage:(id)arg1 fromViewController:(id)arg2 userUnblockActionHandler:(CDUnknownBlockType)arg3 userCancelledHandler:(CDUnknownBlockType)arg4;
+ (id)attributedPaymentPlaceholderText;
+ (id)collectRequestAcceptanceErrorStringForTransaction:(id)arg1;
+ (id)replyContextThumbnailImageByAddingPatternBackground:(id)arg1 imageSize:(struct CGSize)arg2 isFromMe:(_Bool)arg3;
+ (id)attributedPreviewStringForTransaction:(id)arg1;
+ (id)replyContextThumbnailImageForTransaction:(id)arg1;
+ (id)backgroundPatternImageForMessageFromMe:(_Bool)arg1;
+ (void)systemEventTransactionMetadataFrom:(id)arg1 paymentTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)systemEventTransactionMetadataForTransactionStatus:(id)arg1 transactionErrorCode:(id)arg2 previousStatus:(id)arg3;
+ (_Bool)openTransactionDetailsInPaymentSettingsForTransaction:(id)arg1;
+ (_Bool)openTransactionDetailsInPaymentSettingsForTransacionWithId:(id)arg1;
+ (_Bool)openTransactionDetailsInChatForMessageUniqueKey:(id)arg1;
+ (_Bool)openTransactionDetailsForMessageUniqueKey:(id)arg1 transactionId:(id)arg2;
+ (void)openTransactionDetailsForTransaction:(id)arg1;
- (void)checkBlockedStatusAndPromptUnblockForTransaction:(id)arg1 fromViewController:(id)arg2 userUnblockActionHandler:(CDUnknownBlockType)arg3 userCancelledHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;

@end
