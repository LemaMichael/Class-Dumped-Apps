//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HTSDraftFileManager : NSObject
{
    NSString *_draftDocPath;
    NSMutableDictionary *_urlDict;
    NSMutableDictionary *_draftManagerDic;
    NSObject<OS_dispatch_queue> *_operationQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSMutableDictionary *draftManagerDic; // @synthesize draftManagerDic=_draftManagerDic;
@property(retain, nonatomic) NSMutableDictionary *urlDict; // @synthesize urlDict=_urlDict;
@property(retain, nonatomic) NSString *draftDocPath; // @synthesize draftDocPath=_draftDocPath;
- (void).cxx_destruct;
- (void)dealloc;
- (void)SyncDraftDicToFile;
- (void)cleanFileWithoutUser;
- (void)deleteFileWithURL:(id)arg1;
- (void)addFileWithURL:(id)arg1;
- (id)init;

@end

