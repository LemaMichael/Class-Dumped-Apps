//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASButtonNode, CarouselItem, DiscoveryFandomBannerNode, NSObject, NSString;

@protocol DiscoveryFandomBannerNodeDelegate <NSObject>
- (void)discoveryFandomBannerNode:(DiscoveryFandomBannerNode *)arg1 didTapOverflowButton:(ASButtonNode *)arg2 carouselItem:(CarouselItem *)arg3;
- (void)discoveryFandomBannerNode:(DiscoveryFandomBannerNode *)arg1 didTapTitleObject:(NSObject *)arg2 buttonIndex:(long long)arg3 carouselItem:(CarouselItem *)arg4;
- (void)discoveryFandomBannerNode:(DiscoveryFandomBannerNode *)arg1 didTapActionName:(NSString *)arg2 carouselItem:(CarouselItem *)arg3;
- (void)discoveryFandomBannerNode:(DiscoveryFandomBannerNode *)arg1 didTapCarouselItem:(CarouselItem *)arg2;
@end
