//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, SCOperaPlaylistItem, SCOperaPlaylistItemGroup;

@protocol SCOperaPlaylistAdInsertionProtocol <NSObject>
- (void)stopViewingOptOutInterstitialForPlaylistItemGroup:(SCOperaPlaylistItemGroup *)arg1;
- (void)stopViewingPlaylistItemGroup:(SCOperaPlaylistItemGroup *)arg1;
- (void)stopViewingPlaylistItem:(SCOperaPlaylistItem *)arg1 isViewingLongform:(_Bool)arg2;
- (void)startViewingPlaylistItem:(SCOperaPlaylistItem *)arg1 context:(NSDictionary *)arg2;
- (void)startViewingPlaylistItemGroup:(SCOperaPlaylistItemGroup *)arg1 previousItemGroup:(SCOperaPlaylistItemGroup *)arg2 currentItem:(SCOperaPlaylistItem *)arg3;
@end
