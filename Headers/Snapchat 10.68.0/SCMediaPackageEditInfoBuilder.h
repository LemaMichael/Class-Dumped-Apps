//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SOJUGallerySnapOverlay, SOJUSnapCreatorAttribution;

@interface SCMediaPackageEditInfoBuilder : NSObject
{
    SOJUGallerySnapOverlay *_overlay;
    double _timeScale;
    _Bool _isInfiniteDuration;
    SOJUSnapCreatorAttribution *_snapCreatorAttribution;
}

+ (id)mediaPackageEditInfoFromExistingMediaPackageEditInfo:(id)arg1;
+ (id)mediaPackageEditInfo;
- (void).cxx_destruct;
- (id)withSnapCreatorAttribution:(id)arg1;
- (id)withIsInfiniteDuration:(_Bool)arg1;
- (id)withTimeScale:(double)arg1;
- (id)withOverlay:(id)arg1;
- (id)build;

@end
