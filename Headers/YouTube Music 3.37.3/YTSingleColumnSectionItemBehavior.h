//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSectionColumnBehavior-Protocol.h"

@class NSString, YTSectionController;

@interface YTSingleColumnSectionItemBehavior : NSObject <YTSectionColumnBehavior>
{
    id _entry;
    long long _index;
    YTSectionController *_sectionController;
}

- (void).cxx_destruct;
- (struct CGSize)columnSizeForIndex:(long long)arg1 entry:(id)arg2 collectionViewSize:(struct CGSize)arg3;
- (id)initWithSectionController:(id)arg1 singleColumnIndex:(long long)arg2 entry:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
