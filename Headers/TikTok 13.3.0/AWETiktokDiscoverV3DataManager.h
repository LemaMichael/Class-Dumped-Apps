//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

@interface AWETiktokDiscoverV3DataManager : NSObject
{
    _Bool _hasMore;
    _Bool _isRequestOnAir;
    long long _cursor;
    NSMutableSet *_filterSet;
}

@property(nonatomic) _Bool isRequestOnAir; // @synthesize isRequestOnAir=_isRequestOnAir;
@property(retain, nonatomic) NSMutableSet *filterSet; // @synthesize filterSet=_filterSet;
@property(nonatomic) long long cursor; // @synthesize cursor=_cursor;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (id)removeInvalidModelInArray:(id)arg1;
- (void)_fetchDiscoverDataWithCursor:(unsigned long long)arg1 count:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

