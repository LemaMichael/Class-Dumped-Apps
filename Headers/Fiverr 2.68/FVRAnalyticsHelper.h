//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FVRAnalyticsHelper : NSObject
{
}

+ (void)reportClickEventWithName:(id)arg1 screenName:(id)arg2;
+ (id)analiticClickEventAuxWithReferrerPageName:(id)arg1 screenName:(id)arg2;
+ (void)confirmationSnapshotEventWithTransaction:(id)arg1;
+ (void)customExtraCreateSubmitEventWithGigItem:(id)arg1 createdCustomExtra:(id)arg2 reletedGigId:(id)arg3 offerAmount:(id)arg4;
+ (void)customOfferCreateSubmitEventWithExtraFields:(id)arg1;
+ (void)customOfferCreateSubmitEventWithSource:(id)arg1 reletedGigId:(id)arg2 buyerId:(id)arg3 eventSource:(id)arg4 offerAmount:(id)arg5 deliveryTimeInDays:(id)arg6;
+ (id)createExtraFieldsForCustomOfferWithSource:(id)arg1 reletedGigId:(id)arg2 buyerId:(id)arg3 eventSource:(id)arg4 offerAmount:(id)arg5 deliveryTimeInDays:(id)arg6;
+ (void)requestedGigOffersOrderEventWithCustomOfferItem:(id)arg1 screenName:(id)arg2;
+ (void)gigShowOrderEventWithGigItem:(id)arg1 screenName:(id)arg2;
+ (void)gigGallerySwipeEventWithGigItem:(id)arg1;
+ (void)gigShowShowEventWithGigItem:(id)arg1 analyticsImpressionHelper:(id)arg2 extraFields:(id)arg3;
+ (void)paymentManagerOrderCompletedEventWithGigItem:(id)arg1 orderId:(id)arg2 paymentToken:(id)arg3;
+ (void)gigOrderConfirmationOrderClickEventWithGigItem:(id)arg1 gigCost:(id)arg2;
+ (void)conversationChatCustomOfferBannerClickEventWithCustomOfer:(id)arg1 isUserComeFromBuyerRequest:(_Bool)arg2;
+ (void)conversationChatCustomOfferBannerShowEventWithCustomOfer:(id)arg1 isUserComeFromBuyerRequest:(_Bool)arg2;
+ (id)gigIdDictionaryWithGigId:(id)arg1;
+ (id)orderIdDictionaryWithOrderId:(id)arg1;
+ (id)currentUserIdAnaliticsDictionaryWithSellerId:(id)arg1;
+ (id)currentUserIdAnaliticsDictionary;
+ (id)pageCTXDictionary:(id)arg1;

@end
