//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCFideliusDatabase, SCQueuePerformer;

@interface SCTable : NSObject
{
    SCFideliusDatabase *_database;
    SCQueuePerformer *_performer;
}

@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) SCFideliusDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)updateParametersForObject:(id)arg1;
- (id)objectFromRow:(id)arg1;
- (_Bool)deleteObjectWithId:(id)arg1;
- (_Bool)replaceObject:(id)arg1;
- (_Bool)insertObject:(id)arg1;
- (id)objectWithId:(id)arg1;
- (unsigned long long)rowCount;
- (id)selectAll;
- (_Bool)dropIfExists;
- (_Bool)createIfNotExists;
- (id)tableName;
- (id)indexes;
- (id)tableSchema;
- (id)initWithDatabase:(id)arg1 performer:(id)arg2;

@end

