//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MDDFileGroupFile, MDDInternalFileGroup, MDDPrimitiveDownloader, NSData, NSError, NSString;

@protocol MDDPrimitiveDownloaderDelegate <NSObject>
- (void)MDDPrimitiveDownloader:(MDDPrimitiveDownloader *)arg1 didDownloadData:(NSData *)arg2 forFileGroupFile:(MDDFileGroupFile *)arg3 fileGroup:(MDDInternalFileGroup *)arg4 fileGroupName:(NSString *)arg5 error:(NSError *)arg6;
@end

