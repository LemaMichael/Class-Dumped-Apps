//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HMDStoreIMP;

@interface HMDRecordStore : NSObject
{
    id <HMDStoreIMP> _database;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shared;
+ (struct HMDRecordLocalIDRange)localIDRange:(id)arg1;
@property(retain, nonatomic) id <HMDStoreIMP> database; // @synthesize database=_database;
- (void).cxx_destruct;
- (_Bool)needMigrateHistoryData;
- (void)removeDeprecatedDatabaseAsyncAtFolder:(id)arg1;
- (_Bool)migrateHistoryDataSyncAtFolder:(id)arg1;
- (unsigned long long)dbFileSize;
- (void)deleteDatabaseIfHuge:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)cleanupRecordsWithRange:(struct HMDRecordLocalIDRange)arg1 andConditions:(id)arg2 storeClass:(Class)arg3;

@end

