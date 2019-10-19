//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasMetadataResolverFactory-Protocol.h"

@class NSString, SPTDataLoaderFactory;
@protocol SPTCanvasTrackChecker;

@interface SPTCanvasMetadataResolverFactoryImplementation : NSObject <SPTCanvasMetadataResolverFactory>
{
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTCanvasTrackChecker> _canvasTrackChecker;
}

@property(readonly, nonatomic) id <SPTCanvasTrackChecker> canvasTrackChecker; // @synthesize canvasTrackChecker=_canvasTrackChecker;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
- (void).cxx_destruct;
- (id)createResolverForTracks:(id)arg1;
- (id)initWithDataLoaderFactory:(id)arg1 canvasTrackChecker:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
