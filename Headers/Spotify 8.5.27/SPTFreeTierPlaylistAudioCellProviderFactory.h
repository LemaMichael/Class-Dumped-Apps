//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistCellProviderFactory-Protocol.h"

@class NSString, SPTFreeTierPlaylistAudioCellProvider;

@interface SPTFreeTierPlaylistAudioCellProviderFactory : NSObject <SPTFreeTierPlaylistCellProviderFactory>
{
    SPTFreeTierPlaylistAudioCellProvider *_cellProvider;
}

@property(retain, nonatomic) SPTFreeTierPlaylistAudioCellProvider *cellProvider; // @synthesize cellProvider=_cellProvider;
- (void).cxx_destruct;
- (id)reuseIdentifiers;
- (id)cellProviderForRowAtIndexPath:(id)arg1;
- (id)initWithCellConfigurator:(id)arg1 itemsViewModel:(id)arg2 playlistViewModel:(id)arg3 delegate:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

