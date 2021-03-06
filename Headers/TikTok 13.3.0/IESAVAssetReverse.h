//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESAssetReverseProtocol-Protocol.h"

@class AVAsset, NSString;

@interface IESAVAssetReverse : NSObject <IESAssetReverseProtocol>
{
    _Bool _shouldCancelReverse;
    AVAsset *_asset;
}

@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(nonatomic) _Bool shouldCancelReverse; // @synthesize shouldCancelReverse=_shouldCancelReverse;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)needVideoCompostion:(id)arg1;
- (id)videoCompsitionWithAsset:(id)arg1;
- (void)cancle;
- (id)p_getCompressionProps;
- (void)reverseAsset:(CDUnknownBlockType)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)appWillResignAction:(id)arg1;
- (id)initWithAVAsset:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

