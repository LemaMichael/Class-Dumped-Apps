//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SCLensSocialUnlockV2Flow;

@protocol SCLensSocialUnlockV2FlowDelegate <NSObject>
- (void)socialUnlockFlow:(id <SCLensSocialUnlockV2Flow>)arg1 willDismissContextCardsWithCompletion:(void (^)(void))arg2;
- (void)socialUnlockFlowDidDismissModalContent:(id <SCLensSocialUnlockV2Flow>)arg1;
- (void)socialUnlockFlowWillPresentModalContent:(id <SCLensSocialUnlockV2Flow>)arg1;
@end

