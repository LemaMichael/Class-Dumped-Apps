//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPVASTLinearAd, NSArray, NSURL;

@interface MPVideoPlaybackCandidate : NSObject
{
    MPVASTLinearAd *_linearAd;
    NSArray *_errorURLs;
    NSArray *_impressionURLs;
    double _minimumViewabilityTimeInterval;
    double _minimumFractionOfVideoVisible;
    NSURL *_viewabilityTrackingURL;
}

@property(retain, nonatomic) NSURL *viewabilityTrackingURL; // @synthesize viewabilityTrackingURL=_viewabilityTrackingURL;
@property(nonatomic) double minimumFractionOfVideoVisible; // @synthesize minimumFractionOfVideoVisible=_minimumFractionOfVideoVisible;
@property(nonatomic) double minimumViewabilityTimeInterval; // @synthesize minimumViewabilityTimeInterval=_minimumViewabilityTimeInterval;
@property(retain, nonatomic) NSArray *impressionURLs; // @synthesize impressionURLs=_impressionURLs;
@property(retain, nonatomic) NSArray *errorURLs; // @synthesize errorURLs=_errorURLs;
@property(retain, nonatomic) MPVASTLinearAd *linearAd; // @synthesize linearAd=_linearAd;
- (void).cxx_destruct;

@end

