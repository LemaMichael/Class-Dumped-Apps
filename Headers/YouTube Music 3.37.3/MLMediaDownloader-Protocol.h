//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLVideo, NSString, UIApplication;
@protocol MLMediaDownloaderDelegate, MLPlayerConfig;

@protocol MLMediaDownloader <NSObject>
@property(readonly, nonatomic) _Bool restoringBackgroundTasks;
@property(readonly, nonatomic) double currentProgress;
@property(readonly, nonatomic) NSString *currentVideoID;
- (void)cancelDownloadWithVideoID:(NSString *)arg1;
- (void)cancelDownload;
- (void)application:(UIApplication *)arg1 handleEventsForBackgroundURLSession:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (_Bool)downloadVideo:(MLVideo *)arg1 withMaximumResolution:(int)arg2 audioQuality:(int)arg3 playerConfig:(id <MLPlayerConfig>)arg4 allowCellularAccess:(_Bool)arg5 refreshStreams:(_Bool)arg6 delegate:(id <MLMediaDownloaderDelegate>)arg7;
- (long long)estimatedTotalBytesForVideo:(MLVideo *)arg1 withMaximumResolution:(int)arg2 audioQuality:(int)arg3;
- (void)startBackgroundTaskRestorationWithDelegate:(id <MLMediaDownloaderDelegate>)arg1;
@end
