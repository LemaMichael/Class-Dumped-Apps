//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SCMediaPackageEditInfo, SCMediaPackageManager;

@interface SCMediaPackageHandle : NSObject
{
    SCMediaPackageManager *_mediaPackageManager;
    NSString *_mediaPackageId;
    SCMediaPackageEditInfo *_editInfo;
}

@property(readonly, copy, nonatomic) SCMediaPackageEditInfo *editInfo; // @synthesize editInfo=_editInfo;
@property(readonly, copy, nonatomic) NSString *mediaPackageId; // @synthesize mediaPackageId=_mediaPackageId;
- (void).cxx_destruct;
- (void)unlock;
- (void)dealloc;
- (id)initWithMediaPackageId:(id)arg1 mediaPackageManager:(id)arg2;

@end
