//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SPTShareData, SPTSharePlaylistHelper, SPTShareTrackHelper;
@protocol SPTPlayer, SPTShareDataProviderDelegate, SPTShareEntityData;

@interface SPTShareDataProvider : NSObject
{
    id <SPTShareDataProviderDelegate> _delegate;
    NSArray *_shareDestinations;
    id <SPTShareEntityData> _entityData;
    id <SPTPlayer> _player;
    SPTSharePlaylistHelper *_sharePlaylistHelper;
    SPTShareTrackHelper *_shareTrackHelper;
    SPTShareData *_shareData;
}

@property(retain, nonatomic) SPTShareData *shareData; // @synthesize shareData=_shareData;
@property(readonly, nonatomic) SPTShareTrackHelper *shareTrackHelper; // @synthesize shareTrackHelper=_shareTrackHelper;
@property(readonly, nonatomic) SPTSharePlaylistHelper *sharePlaylistHelper; // @synthesize sharePlaylistHelper=_sharePlaylistHelper;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTShareEntityData> entityData; // @synthesize entityData=_entityData;
@property(readonly, nonatomic) NSArray *shareDestinations; // @synthesize shareDestinations=_shareDestinations;
@property(nonatomic) __weak id <SPTShareDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleNormalizeCallback:(id)arg1;
- (void)fetchData;
- (id)initWithEntityData:(id)arg1 shareDestinations:(id)arg2 player:(id)arg3 sharePlaylistHelper:(id)arg4 shareTrackHelper:(id)arg5;

@end
