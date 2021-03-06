//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ASConfiguration, NSDictionary;

@protocol ELMRuntimeConfig <NSObject>
- (_Bool)useYoga2;
- (_Bool)automaticallyWrapElementsAsCells;
- (NSDictionary *)objectPoolTargets;
- (ASConfiguration *)textureBaseConfiguration;
- (_Bool)isDevServerEnabled;
- (_Bool)isHotReloadEnabled;
- (_Bool)shouldLockComponent;
- (unsigned long long)maxConcurrentImageDownloads;
- (unsigned long long)imageCacheStrategy;
- (_Bool)useTextureImageDownloader;
- (unsigned long long)diskImageCacheBytes;

@optional
- (_Bool)useSynchronousObservationOfEntitiesStore;
- (unsigned long long)ekoRecycledBufferSize;
- (_Bool)useNonEntitiesStore;
- (_Bool)skipMaterializationLogging;
- (_Bool)skipZeroMeasure;
- (_Bool)useViewFlattening;
- (_Bool)useTextureSharedLocking;
- (_Bool)useLinkHighlighting;
- (_Bool)useELMViewAsCommandsElementsDataContainer;
- (_Bool)shouldSetMaximumLineHeightForTallCharacters;
- (_Bool)useRippleShouldProcessRippleWithScrollViewGestures;
- (_Bool)useElementsRipple;
- (_Bool)useRipple;
- (_Bool)useAutomaticLayerBacking;
@end

