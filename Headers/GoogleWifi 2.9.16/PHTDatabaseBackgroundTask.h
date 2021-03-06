//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHTPhenotypeDatabase;

@interface PHTDatabaseBackgroundTask : NSObject
{
    _Bool _finished;
    PHTPhenotypeDatabase *_database;
    unsigned long long _backgroundTaskID;
}

@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
@property(readonly, nonatomic) PHTPhenotypeDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)endBackgroundTask;
- (void)onBackgroundTaskExpiration;
- (void)finish;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1;

@end

