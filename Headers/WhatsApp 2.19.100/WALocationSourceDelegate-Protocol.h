//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, WALocationSource;

@protocol WALocationSourceDelegate <NSObject>
- (double)locationSourceDesiredAccuracy:(WALocationSource *)arg1;
- (void)locationSource:(WALocationSource *)arg1 locationDidChangeSignificantly:(NSArray *)arg2;
- (void)locationSource:(WALocationSource *)arg1 didChangeAuthorization:(int)arg2;
- (void)locationSource:(WALocationSource *)arg1 didUpdateLocations:(NSArray *)arg2;
- (void)locationSource:(WALocationSource *)arg1 didFailWithError:(NSError *)arg2;
@end
