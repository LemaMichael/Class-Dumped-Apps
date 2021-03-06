//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUIReusableViewModelProtocol-Protocol.h"

@class COEntity, DisplayPageRequest, LolomoListViewModel, NFUIPrequerySearchItemEntity, NSDictionary, NSIndexPath, NSMutableDictionary, NSString, PlaybackRequest;

@interface NFUIPrequerySearchItemViewModel : NSObject <NFUIReusableViewModelProtocol>
{
    _Bool selected;
    _Bool shouldCacheSize;
    _Bool shouldCache;
    COEntity *entity;
    NSIndexPath *indexPath;
    PlaybackRequest *playbackRequest;
    NFUIPrequerySearchItemEntity *_internalItemEntity;
}

+ (id)newViewModelWithEntityId:(id)arg1;
@property(retain, nonatomic) NFUIPrequerySearchItemEntity *internalItemEntity; // @synthesize internalItemEntity=_internalItemEntity;
@property(nonatomic) _Bool shouldCache; // @synthesize shouldCache;
@property(nonatomic) _Bool shouldCacheSize; // @synthesize shouldCacheSize;
@property(nonatomic) _Bool selected; // @synthesize selected;
@property(copy, nonatomic) PlaybackRequest *playbackRequest;
@property(copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath;
@property(retain, nonatomic) COEntity *entity;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *loggingFocusedDictionary;
@property(readonly, nonatomic) NSMutableDictionary *loggingPresentedDictionary;
- (id)trackingInfo;
@property(readonly, copy, nonatomic) DisplayPageRequest *galleryDisplayPageRequest;
@property(readonly, copy, nonatomic) DisplayPageRequest *displayPageRequest;
@property(readonly, nonatomic) NSDictionary *suggestionDictionary;
@property(readonly, nonatomic) unsigned long long itemType;
@property(readonly, nonatomic) _Bool isValidItem;
@property(readonly, nonatomic) NSString *accessibilityIdentifier;
@property(readonly, nonatomic) NFUIPrequerySearchItemEntity *itemEntity;
- (id)initWithEntityId:(id)arg1;
- (id)initWithEntity:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isHorizontal;
@property(nonatomic) __weak LolomoListViewModel *listModel;
@property(nonatomic) __weak id superModel;
@property(readonly) Class superclass;

@end

