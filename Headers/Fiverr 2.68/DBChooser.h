//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface DBChooser : NSObject
{
    NSString *_appKey;
    CDUnknownBlockType _completionBlock;
    UIView *_noDropboxInstalledView;
}

+ (id)dbc_appKeyFromInfoPlist;
+ (id)dbc_parseFilesJson:(id)arg1;
+ (id)dbc_dictionaryFromQueryString:(id)arg1;
+ (id)dbc_getLinkTypeString:(int)arg1;
+ (id)dbc_chooserURLForAppKey:(id)arg1 linkType:(int)arg2;
+ (id)defaultChooser;
- (void).cxx_destruct;
- (void)dbc_completedWithResult:(id)arg1;
- (void)dbc_openNoDropboxInstalledViewFromViewController:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (void)openChooserForLinkType:(int)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAppKey:(id)arg1;
- (id)init;

@end

