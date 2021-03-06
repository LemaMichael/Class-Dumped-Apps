//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ASCollectionNode.h"

#import "ASCollectionDataSource-Protocol.h"
#import "ASCollectionDelegate-Protocol.h"
#import "ELMDisplayNode-Protocol.h"
#import "ELMSnapHelperDelegate-Protocol.h"
#import "IGListAdapterDataSource-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class ELMBaseSnapHelper, ELMCollectionNodeSingleSectionController, ELMElement, IGListAdapter, NSMutableArray, NSString;
@protocol ELMContext, ELMController;

@interface ELMCollectionNode : ASCollectionNode <ASCollectionDataSource, ASCollectionDelegate, IGListAdapterDataSource, UIScrollViewDelegate, ELMSnapHelperDelegate, ELMDisplayNode>
{
    id <ELMContext> _context;
    ELMCollectionNodeSingleSectionController *_singleSectionController;
    IGListAdapter *_listAdapter;
    _Bool _hasSections;
    NSMutableArray *_pendingSectionNodes;
    ELMElement *_element;
    ELMBaseSnapHelper *_snapHelper;
}

+ (_Bool)canBeLayerBacked:(id)arg1 withContext:(id)arg2;
@property(retain, nonatomic) ELMBaseSnapHelper *snapHelper; // @synthesize snapHelper=_snapHelper;
@property(retain) ELMElement *element; // @synthesize element=_element;
- (void).cxx_destruct;
- (void)clearListAdapter;
-     // Error parsing type: r^{CollectionTypeSection=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}{RepeatedPtrField<youtube::elements::Element>=^{Arena}ii^{Rep}}}24@0:8Q16, name: sectionAtIndex:
- (void)snapHelperPageDidChange:(id)arg1;
- (struct CGSize)sizeForItem:(long long)arg1 inSection:(long long)arg2;
- (struct CGSize)snapHelper:(id)arg1 sizeForItemAtIndex:(long long)arg2;
- (long long)snapHelperNumberOfItems:(id)arg1;
- (double)snapHelperPageMargin:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (CDStruct_42a63532)collectionNode:(id)arg1 constrainedSizeForItemAtIndexPath:(id)arg2;
- (CDUnknownBlockType)collectionNode:(id)arg1 nodeBlockForItemAtIndexPath:(id)arg2;
- (long long)collectionNode:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionNode:(id)arg1;
- (void)insertYogaChild:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeYogaChild:(id)arg1;
- (void)addYogaChild:(id)arg1;
- (void)setYogaChildren:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
-     // Error parsing type: v24@0:8^{SenderState=^^?{ExtensionSet=^{Arena}SS(AllocatedData=^{KeyValue}^{map<int, google::protobuf_opensource::internal::ExtensionSet::Extension, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, google::protobuf_opensource::internal::ExtensionSet::Extension> > >})}{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>=Ai}}}16, name: buildSenderState:
- (void)applyViewProperties;
- (void)controllerDidApplyProperties;
- (_Bool)performAccessibilityCustomAction:(id)arg1;
- (_Bool)managesGestureHandling;
- (void)didLoad;
- (id)initWithElement:(id)arg1 context:(id)arg2;
- (id)initWithElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <ELMController> nodeController; // @dynamic nodeController;
@property(readonly) Class superclass;

@end

