//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCCollectionViewListSectionExpansionModel : NSObject <NSCopying>
{
    _Bool _shouldHideShowLess;
    unsigned long long _maximumThreshold;
    unsigned long long _minimumThreshold;
    unsigned long long _incrementThreshold;
}

@property(readonly, nonatomic) _Bool shouldHideShowLess; // @synthesize shouldHideShowLess=_shouldHideShowLess;
@property(readonly, nonatomic) unsigned long long incrementThreshold; // @synthesize incrementThreshold=_incrementThreshold;
@property(readonly, nonatomic) unsigned long long minimumThreshold; // @synthesize minimumThreshold=_minimumThreshold;
@property(readonly, nonatomic) unsigned long long maximumThreshold; // @synthesize maximumThreshold=_maximumThreshold;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMaximumThreshold:(unsigned long long)arg1 minimumThreshold:(unsigned long long)arg2 incrementThreshold:(unsigned long long)arg3 shouldHideShowLess:(_Bool)arg4;

@end
