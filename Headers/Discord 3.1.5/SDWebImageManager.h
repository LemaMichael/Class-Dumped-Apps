//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, SDImageCache;
@protocol OS_dispatch_semaphore, SDImageLoader, SDImageTransformer, SDWebImageCacheKeyFilter, SDWebImageCacheSerializer, SDWebImageManagerDelegate, SDWebImageOptionsProcessor;

@interface SDWebImageManager : NSObject
{
    id <SDWebImageManagerDelegate> _delegate;
    SDImageCache *_imageCache;
    id <SDImageLoader> _imageLoader;
    id <SDImageTransformer> _transformer;
    id <SDWebImageCacheKeyFilter> _cacheKeyFilter;
    id <SDWebImageCacheSerializer> _cacheSerializer;
    id <SDWebImageOptionsProcessor> _optionsProcessor;
    NSMutableSet *_failedURLs;
    NSObject<OS_dispatch_semaphore> *_failedURLsLock;
    NSMutableSet *_runningOperations;
    NSObject<OS_dispatch_semaphore> *_runningOperationsLock;
}

+ (id)sharedManager;
+ (void)setDefaultImageLoader:(id)arg1;
+ (id)defaultImageLoader;
+ (void)setDefaultImageCache:(id)arg1;
+ (id)defaultImageCache;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *runningOperationsLock; // @synthesize runningOperationsLock=_runningOperationsLock;
@property(retain, nonatomic) NSMutableSet *runningOperations; // @synthesize runningOperations=_runningOperations;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *failedURLsLock; // @synthesize failedURLsLock=_failedURLsLock;
@property(retain, nonatomic) NSMutableSet *failedURLs; // @synthesize failedURLs=_failedURLs;
@property(retain, nonatomic) id <SDWebImageOptionsProcessor> optionsProcessor; // @synthesize optionsProcessor=_optionsProcessor;
@property(retain, nonatomic) id <SDWebImageCacheSerializer> cacheSerializer; // @synthesize cacheSerializer=_cacheSerializer;
@property(retain, nonatomic) id <SDWebImageCacheKeyFilter> cacheKeyFilter; // @synthesize cacheKeyFilter=_cacheKeyFilter;
@property(retain, nonatomic) id <SDImageTransformer> transformer; // @synthesize transformer=_transformer;
@property(retain, nonatomic) id <SDImageLoader> imageLoader; // @synthesize imageLoader=_imageLoader;
@property(retain, nonatomic) SDImageCache *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) __weak id <SDWebImageManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)processedResultForURL:(id)arg1 options:(unsigned long long)arg2 context:(struct NSDictionary *)arg3;
- (_Bool)shouldBlockFailedURLWithURL:(id)arg1 error:(id)arg2;
- (void)callCompletionBlockForOperation:(id)arg1 completion:(CDUnknownBlockType)arg2 image:(id)arg3 data:(id)arg4 error:(id)arg5 cacheType:(long long)arg6 finished:(_Bool)arg7 url:(id)arg8;
- (void)callCompletionBlockForOperation:(id)arg1 completion:(CDUnknownBlockType)arg2 error:(id)arg3 url:(id)arg4;
- (void)safelyRemoveOperationFromRunning:(id)arg1;
- (void)callStoreCacheProcessForOperation:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 context:(struct NSDictionary *)arg4 downloadedImage:(id)arg5 downloadedData:(id)arg6 finished:(_Bool)arg7 progress:(CDUnknownBlockType)arg8 completed:(CDUnknownBlockType)arg9;
- (void)callDownloadProcessForOperation:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 context:(struct NSDictionary *)arg4 cachedImage:(id)arg5 cachedData:(id)arg6 cacheType:(long long)arg7 progress:(CDUnknownBlockType)arg8 completed:(CDUnknownBlockType)arg9;
- (void)callCacheProcessForOperation:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 context:(struct NSDictionary *)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
@property(readonly, nonatomic, getter=isRunning) _Bool running;
- (void)cancelAll;
- (id)loadImageWithURL:(id)arg1 options:(unsigned long long)arg2 context:(struct NSDictionary *)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (id)loadImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 completed:(CDUnknownBlockType)arg4;
- (id)cacheKeyForURL:(id)arg1 cacheKeyFilter:(id)arg2;
- (id)cacheKeyForURL:(id)arg1;
- (id)initWithCache:(id)arg1 loader:(id)arg2;
- (id)init;

@end
