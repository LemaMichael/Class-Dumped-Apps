//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTCollectionPlatformDataLoaderFieldsImplementation.h"

#import "SPTCollectionPlatformAlbumMetadataFields-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSString, NSURL;

@interface SPTCollectionPlatformAlbumMetadataFieldsImplementation : SPTCollectionPlatformDataLoaderFieldsImplementation <SPTCollectionPlatformAlbumMetadataFields>
{
    _Bool _isComplete;
    NSDate *_addTime;
    NSDictionary *_albumCovers;
    NSArray *_artists;
    NSURL *_collectionURL;
    unsigned long long _collectionAlbumTracksCount;
    unsigned long long _albumTracksCount;
    unsigned long long _year;
}

@property(nonatomic) unsigned long long year; // @synthesize year=_year;
@property(nonatomic) _Bool isComplete; // @synthesize isComplete=_isComplete;
@property(nonatomic) unsigned long long albumTracksCount; // @synthesize albumTracksCount=_albumTracksCount;
@property(nonatomic) unsigned long long collectionAlbumTracksCount; // @synthesize collectionAlbumTracksCount=_collectionAlbumTracksCount;
@property(retain, nonatomic) NSURL *collectionURL; // @synthesize collectionURL=_collectionURL;
@property(retain, nonatomic) NSArray *artists; // @synthesize artists=_artists;
@property(retain, nonatomic) NSDictionary *albumCovers; // @synthesize albumCovers=_albumCovers;
@property(retain, nonatomic) NSDate *addTime; // @synthesize addTime=_addTime;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, nonatomic) NSURL *URL;
@property(readonly, nonatomic) unsigned long long availableOfflineStatus;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly) Class superclass;

@end

