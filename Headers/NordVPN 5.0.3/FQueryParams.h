//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;
@protocol FIndex, FNode;

@interface FQueryParams : NSObject <NSCopying>
{
    _Bool _limitSet;
    NSString *_viewFrom;
    id <FIndex> _index;
    long long _limit;
    id <FNode> _indexStartValue;
    NSString *_indexStartKey;
    id <FNode> _indexEndValue;
    NSString *_indexEndKey;
}

+ (id)fromQueryObject:(id)arg1;
+ (id)defaultInstance;
@property(retain, nonatomic) NSString *indexEndKey; // @synthesize indexEndKey=_indexEndKey;
@property(retain, nonatomic) id <FNode> indexEndValue; // @synthesize indexEndValue=_indexEndValue;
@property(retain, nonatomic) NSString *indexStartKey; // @synthesize indexStartKey=_indexStartKey;
@property(retain, nonatomic) id <FNode> indexStartValue; // @synthesize indexStartValue=_indexStartValue;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) id <FIndex> index; // @synthesize index=_index;
@property(retain, nonatomic) NSString *viewFrom; // @synthesize viewFrom=_viewFrom;
@property(nonatomic) _Bool limitSet; // @synthesize limitSet=_limitSet;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (_Bool)isDefault;
- (_Bool)loadsAllData;
- (_Bool)isValid;
- (id)nodeFilter;
- (_Bool)isViewFromLeft;
- (id)wireProtocolParams;
- (id)orderBy:(id)arg1;
- (id)endAt:(id)arg1;
- (id)endAt:(id)arg1 childKey:(id)arg2;
- (id)startAt:(id)arg1;
- (id)startAt:(id)arg1 childKey:(id)arg2;
- (id)limitToLast:(long long)arg1;
- (id)limitToFirst:(long long)arg1;
- (id)limitTo:(long long)arg1;
- (id)mutableCopy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)hasEnd;
- (_Bool)hasStart;
- (_Bool)hasAnchoredLimit;
- (id)init;

@end

