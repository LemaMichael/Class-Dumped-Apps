//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEIMMessage.h"

@class AWEURLModel, NSNumber, NSString, UIImage;

@interface AWEIMGiphyMessage : AWEIMMessage
{
    long long _width;
    long long _height;
    AWEURLModel *_giphyURL;
    long long _packageID;
    long long _version;
    long long _imageId;
    NSString *_type;
    NSString *_displayName;
    NSNumber *_originPackageID;
    unsigned long long _stickerType;
    UIImage *_forwardPreviewImage;
}

@property(retain, nonatomic) UIImage *forwardPreviewImage; // @synthesize forwardPreviewImage=_forwardPreviewImage;
@property(nonatomic) unsigned long long stickerType; // @synthesize stickerType=_stickerType;
@property(retain, nonatomic) NSNumber *originPackageID; // @synthesize originPackageID=_originPackageID;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) long long imageId; // @synthesize imageId=_imageId;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) long long packageID; // @synthesize packageID=_packageID;
@property(copy, nonatomic) AWEURLModel *giphyURL; // @synthesize giphyURL=_giphyURL;
@property(nonatomic) long long height; // @synthesize height=_height;
@property(nonatomic) long long width; // @synthesize width=_width;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)resizeGiphySize;
- (id)getContentDict;
- (id)initWithContentDict:(id)arg1;

@end
