//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTCellController.h"

#import "YTUserDefaultsObserver.h"

@class NSString, YTIAutoNavToggleRenderer;

@interface YTAutoNavCellController : YTCellController <YTUserDefaultsObserver>
{
    id <YTServices> _services;
    id <MDXServices> _mdxServices;
    YTIAutoNavToggleRenderer *_autoNavToggleRenderer;
    _Bool _visibilityUpdated;
}

- (void).cxx_destruct;
- (void)didToggleAutoplay;
- (void)setCell:(id)arg1;
- (void)valueDidChangeForKey:(id)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

