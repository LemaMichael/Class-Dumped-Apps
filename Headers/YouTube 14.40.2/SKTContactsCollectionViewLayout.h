//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QTMCollectionViewFlowLayout.h"

@class NSMutableArray, NSMutableIndexSet;

@interface SKTContactsCollectionViewLayout : QTMCollectionViewFlowLayout
{
    _Bool _animateContactsAppearance;
    NSMutableArray *_deletedIndexPaths;
    NSMutableArray *_insertedIndexPaths;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
}

@property(retain, nonatomic) NSMutableIndexSet *insertedSections; // @synthesize insertedSections=_insertedSections;
@property(retain, nonatomic) NSMutableIndexSet *deletedSections; // @synthesize deletedSections=_deletedSections;
@property(retain, nonatomic) NSMutableArray *insertedIndexPaths; // @synthesize insertedIndexPaths=_insertedIndexPaths;
@property(retain, nonatomic) NSMutableArray *deletedIndexPaths; // @synthesize deletedIndexPaths=_deletedIndexPaths;
@property(nonatomic) _Bool animateContactsAppearance; // @synthesize animateContactsAppearance=_animateContactsAppearance;
- (void).cxx_destruct;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;

@end
