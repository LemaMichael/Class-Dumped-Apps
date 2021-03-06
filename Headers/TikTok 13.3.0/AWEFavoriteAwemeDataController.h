//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEListDataController.h"

@class AWEAwemeModel, NSNumber;

@interface AWEFavoriteAwemeDataController : AWEListDataController
{
    long long _pageSize;
    NSNumber *_cursor;
    AWEAwemeModel *_justRemovedModel;
}

@property(retain, nonatomic) AWEAwemeModel *justRemovedModel; // @synthesize justRemovedModel=_justRemovedModel;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)addAwemeWithItemID:(id)arg1;
- (_Bool)removeWithItemID:(id)arg1;
- (void)loadMoreWithCompletion:(CDUnknownBlockType)arg1;
- (void)refreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)initFetchWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

