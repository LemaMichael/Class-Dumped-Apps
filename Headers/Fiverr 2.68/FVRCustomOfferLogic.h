//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FVRGigService;

@interface FVRCustomOfferLogic : NSObject
{
    FVRGigService *_gigService;
}

+ (void)createCustomOfferWithGigItem:(id)arg1 customExtra:(id)arg2 contactId:(id)arg3 parentOrderId:(id)arg4 source:(id)arg5 reletedGigId:(id)arg6 successBlock:(CDUnknownBlockType)arg7 failureBlock:(CDUnknownBlockType)arg8;
+ (id)sharedInstance;
@property(retain, nonatomic) FVRGigService *gigService; // @synthesize gigService=_gigService;
- (void).cxx_destruct;
- (void)createCustomOfferWithOfferDescription:(id)arg1 contactId:(id)arg2 requestId:(id)arg3 source:(id)arg4 deleivertTimeByDaysInMinutes:(id)arg5 reletedGigItem:(id)arg6 offerPrice:(id)arg7 extraIds:(id)arg8 extraItems:(id)arg9 revisionNumber:(long long)arg10 parentOrderId:(id)arg11 skipRequirements:(_Bool)arg12 expairyInDays:(id)arg13 successBlock:(CDUnknownBlockType)arg14 failureBlock:(CDUnknownBlockType)arg15;
- (void)withdrawCustomWithOfferId:(id)arg1 type:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)declineCustomWithOfferId:(id)arg1 type:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

