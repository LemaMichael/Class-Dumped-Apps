//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class LSATouchProcessingController, NSError;

@protocol LSATouchProcessingDelegate <NSObject>
- (void)touchProcessingController:(LSATouchProcessingController *)arg1 didReceiveError:(NSError *)arg2;
- (void)touchProcessingControllerDidFinishInteraction:(LSATouchProcessingController *)arg1;
- (void)touchProcessingControllerDidProcessTouches:(LSATouchProcessingController *)arg1;
@end

