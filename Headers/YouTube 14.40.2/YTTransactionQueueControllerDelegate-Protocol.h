//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, SKPaymentTransaction, YTIAsyncActivityRenderer;

@protocol YTTransactionQueueControllerDelegate <NSObject>
- (void)transactionQueueControllerHandleIapDidSucceedForTransaction:(SKPaymentTransaction *)arg1;
- (void)transactionQueueControllerHandleIapDidFailWithError:(NSError *)arg1 forTransaction:(SKPaymentTransaction *)arg2;

@optional
- (void)transaction:(SKPaymentTransaction *)arg1 didFailWithError:(NSError *)arg2;
- (void)transactionQueueControllerWillSendHandleIapWithActivityIndicator:(YTIAsyncActivityRenderer *)arg1;
@end

