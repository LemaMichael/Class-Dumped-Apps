//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableOrderedSet, NSNumber;

@interface AWESMSInviteListManager : NSObject
{
    _Bool _hasMore;
    NSArray *_datalist;
    NSNumber *_cursor;
    NSMutableOrderedSet *_uniqueDataSet;
}

@property(retain, nonatomic) NSMutableOrderedSet *uniqueDataSet; // @synthesize uniqueDataSet=_uniqueDataSet;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSArray *datalist; // @synthesize datalist=_datalist;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long currentSelectedCount;
- (void)unselectAll;
- (void)inviteSelectedUsers:(CDUnknownBlockType)arg1;
- (void)fetchData:(CDUnknownBlockType)arg1 shouldLoadMore:(_Bool)arg2;

@end
