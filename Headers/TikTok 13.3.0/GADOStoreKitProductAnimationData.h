//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADOAnimationData.h"

@class NSString;

@interface GADOStoreKitProductAnimationData : GADOAnimationData
{
    NSString *_productIdentifier;
    NSString *_dismissalNotificationRequestIdentifier;
    struct CGRect _initialStoreKitFrame;
    struct CGRect _finalStoreKitFrame;
}

@property(nonatomic) struct CGRect finalStoreKitFrame; // @synthesize finalStoreKitFrame=_finalStoreKitFrame;
@property(nonatomic) struct CGRect initialStoreKitFrame; // @synthesize initialStoreKitFrame=_initialStoreKitFrame;
@property(copy, nonatomic) NSString *dismissalNotificationRequestIdentifier; // @synthesize dismissalNotificationRequestIdentifier=_dismissalNotificationRequestIdentifier;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (void).cxx_destruct;
- (id)initWithAnimation:(id)arg1;

@end
