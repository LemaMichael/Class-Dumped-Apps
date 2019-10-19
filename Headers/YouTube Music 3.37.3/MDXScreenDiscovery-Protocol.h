//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;
@protocol MDXScreen, MDXScreenDiscoveryDelegate;

@protocol MDXScreenDiscovery <NSObject>
@property(readonly, nonatomic) NSArray *screens;
@property(nonatomic) __weak id <MDXScreenDiscoveryDelegate> delegate;
- (void)updateAvailabilityForScreen:(id <MDXScreen>)arg1 withAvailabilityBlock:(void (^)(_Bool))arg2;
- (void)stopDiscovery;
- (void)startDiscovery;
@end
