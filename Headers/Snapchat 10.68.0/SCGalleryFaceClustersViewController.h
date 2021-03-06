//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCGalleryCollectionViewCustomizing-Protocol.h"

@class NSArray, NSDictionary, NSString, SCQueuePerformer, SCUserSession, UICollectionView, UICollectionViewFlowLayout;

@interface SCGalleryFaceClustersViewController : UIViewController <SCGalleryCollectionViewCustomizing>
{
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    NSDictionary *_gallerySnapClusters;
    NSArray *_clusterIdsBySize;
    NSDictionary *_gallerySnapIdToGallerySnap;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
}

@property(retain, nonatomic) UICollectionViewFlowLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) NSDictionary *gallerySnapIdToGallerySnap; // @synthesize gallerySnapIdToGallerySnap=_gallerySnapIdToGallerySnap;
@property(retain, nonatomic) NSArray *clusterIdsBySize; // @synthesize clusterIdsBySize=_clusterIdsBySize;
@property(retain, nonatomic) NSDictionary *gallerySnapClusters; // @synthesize gallerySnapClusters=_gallerySnapClusters;
@property(retain, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)reloadCollectionView;
- (id)cellReuseIdentifierForSection:(long long)arg1;
- (void)registerSupplementaryViewsForCollectionView:(id)arg1;
- (void)registerCellsForCollectionView:(id)arg1;
- (void)setGallerySnapClusters:(id)arg1 reload:(_Bool)arg2;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 gallerySnapClusters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

