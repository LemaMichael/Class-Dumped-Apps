//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary;
@protocol SCPerforming;

@interface SCDownloadConsumptionRecorder : NSObject <NSCoding>
{
    id <SCPerforming> _queuePerformer;
    double _firstItemConsumedTimeAfterFlush;
    NSMutableDictionary *_records;
    NSMutableArray *_consumedRecords;
}

+ (id)path;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *consumedRecords; // @synthesize consumedRecords=_consumedRecords;
@property(retain, nonatomic) NSMutableDictionary *records; // @synthesize records=_records;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_flushConsumedRequest;
- (void)flushConsumedRequestEventIfNecessary;
- (void)consumeRecord:(id)arg1;
- (void)_pruneExpiredRecords;
- (void)pruneExpiredRecords;
- (void)removeRecord:(id)arg1;
- (id)recordForKey:(id)arg1;
- (void)clear;
- (void)addRecord:(id)arg1;
- (void)recordDownloadConsumptionForKey:(id)arg1;
- (_Bool)saveState;
- (void)applicationWillTerminate;
- (void)applicationDidEnterBackground:(id)arg1;
- (id)init;

@end
