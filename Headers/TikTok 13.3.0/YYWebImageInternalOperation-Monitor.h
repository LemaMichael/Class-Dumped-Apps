//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YYWebImageInternalOperation.h"

@class NSURLRequest;

@interface YYWebImageInternalOperation (Monitor)
+ (void)load;
- (void)BDWebImage_didReceiveImageFromWeb:(id)arg1;
- (void)BDWebImageURLConnection:(id)arg1 didFailWithError:(id)arg2;
- (void)BDWebImageURLConnectionDidFinishLoading:(id)arg1;
- (void)BDWebImage_startRequest:(id)arg1;
- (void)bdwebimage_start;
- (double)bd_monitor_stop:(id)arg1;
- (void)bd_monitor_start:(id)arg1;
- (const void *)bd_computedKeyFromString:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) NSURLRequest *request; // @dynamic request;
@end
