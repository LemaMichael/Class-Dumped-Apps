//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAGenericMediaManager.h"

@class NSMutableArray, NSString, WAProductDescriptor;

@interface WAProductMediaManager : WAGenericMediaManager
{
    WAProductDescriptor *_productDescriptor;
    NSMutableArray *_imageLoaders;
    NSString *_contactName;
}

@property(readonly, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
- (void).cxx_destruct;
- (id)textAtIndexPath:(id)arg1;
- (id)accessibilityValueAtIndexPath:(id)arg1;
- (void)thumbnailAtIndexPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)thumbnailAtIndexPath:(id)arg1;
- (void)stopCachingAllThumbnails;
- (void)stopCachingThumbnailsAtIndexPaths:(id)arg1;
- (void)startCachingThumbnailsAtIndexPaths:(id)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (unsigned long long)numberOfItems;
- (unsigned long long)numberOfVideos;
- (unsigned long long)numberOfPhotos;
- (id)thumbnailForEnsemble:(id)arg1;
- (id)indexPathOfEnsemble:(id)arg1;
- (id)ensembleAtIndexPath:(id)arg1;
@property(readonly, nonatomic) NSString *productIdentifier;
@property(readonly, nonatomic) NSString *productName;
- (id)initWithProductDescriptor:(id)arg1 contactName:(id)arg2;

@end

