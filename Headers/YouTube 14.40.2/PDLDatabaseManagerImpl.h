//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PDLDatabaseManager.h"
#import "PDLDatabaseProvider.h"

@class FMDatabase, NSString;

@interface PDLDatabaseManagerImpl : NSObject <PDLDatabaseManager, PDLDatabaseProvider>
{
    FMDatabase *database;
    id <PDLContactsRepository> contactsRepository;
    id <PDLContactTokensRepository> contactTokensRepository;
}

@property(readonly, nonatomic) id <PDLContactTokensRepository> contactTokensRepository; // @synthesize contactTokensRepository;
@property(readonly, nonatomic) id <PDLContactsRepository> contactsRepository; // @synthesize contactsRepository;
@property(readonly, nonatomic) FMDatabase *database; // @synthesize database;
- (void).cxx_destruct;
- (_Bool)endTransaction;
- (_Bool)beginTransaction;
- (id)initWithDatabase:(id)arg1 metricsLogger:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

