//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTPlayerTrack, UIView;

@protocol SPTNowPlayingScrollProvider <NSObject>
- (UIView *)componentViewForTrack:(SPTPlayerTrack *)arg1;
- (void)loadContentForTrack:(SPTPlayerTrack *)arg1;
- (_Bool)isEnabledForTrack:(SPTPlayerTrack *)arg1;
- (NSString *)identifier;

@optional
- (void)didBecomeFullyShownForTrack:(SPTPlayerTrack *)arg1;
- (double)preferredContentHeightForWidth:(double)arg1;
@end

