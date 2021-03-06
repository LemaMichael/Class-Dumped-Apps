//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEStoryFontManager-Protocol.h"

@class AWEStoryFontModel, NSArray, NSString;

@interface AWEStoryFontManager : NSObject <AWEStoryFontManager>
{
    AWEStoryFontModel *_selectFont;
    NSArray *_stickerFonts;
}

+ (void)removeFileAtPath:(id)arg1;
+ (void)downloadFontWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)fontWithModel:(id)arg1 size:(double)arg2;
+ (id)stickerFonts;
+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *stickerFonts; // @synthesize stickerFonts=_stickerFonts;
@property(retain, nonatomic) AWEStoryFontModel *selectFont; // @synthesize selectFont=_selectFont;
- (void).cxx_destruct;
- (void)removeFileAtPath:(id)arg1;
- (void)updateLocalUrl:(id)arg1 url:(id)arg2;
- (id)loadFontFromData:(id)arg1 size:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchFontFile;
- (void)setupRootFolder;
- (void)downloadFontWithUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fontWithModel:(id)arg1 size:(double)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

