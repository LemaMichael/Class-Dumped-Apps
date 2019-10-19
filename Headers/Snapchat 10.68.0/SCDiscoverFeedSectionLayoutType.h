//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCDiscoverFeedSectionLayoutType : NSObject <NSCopying, NSCoding>
{
    unsigned long long _subtype;
    long long _verticalSection_gridStyle;
    long long _horizontalSection_itemStyle;
}

+ (id)verticalSectionWithGridStyle:(long long)arg1;
+ (id)horizontalSectionWithItemStyle:(long long)arg1;
- (void)matchVerticalSection:(CDUnknownBlockType)arg1 horizontalSection:(CDUnknownBlockType)arg2;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end
