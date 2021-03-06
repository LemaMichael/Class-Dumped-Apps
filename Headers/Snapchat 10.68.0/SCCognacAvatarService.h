//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;
@protocol SCImageDownloading, SCLegacyItemDownloading;

@interface SCCognacAvatarService : NSObject
{
    id <SCImageDownloading> _imageDownloader;
    id <SCLegacyItemDownloading> _assetDownloader;
    SCLazy *_snapTokenProvider;
}

- (void).cxx_destruct;
- (void)bitmoji3DAvatarWithAvatarId:(id)arg1 obfuscatedIdentity:(_Bool)arg2 completionQueue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)animatedBitmojiAvatarWithAvatarId:(id)arg1 completionQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)bitmojiAvatarWithTemplateId:(id)arg1 avatarId:(id)arg2 friendAvatarId:(id)arg3 imageType:(unsigned long long)arg4 completionQueue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)initWithImageDownloader:(id)arg1 assetDownloader:(id)arg2 snapTokenProvider:(id)arg3;

@end

