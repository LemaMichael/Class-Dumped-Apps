//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString, NSValue;

@interface AWEStoryFontModel : MTLModel <MTLJSONSerializing>
{
    _Bool _hasBgColor;
    _Bool _hasShadeColor;
    _Bool _download;
    NSString *_title;
    NSString *_url;
    NSString *_localUrl;
    NSValue *_titleSize;
    NSValue *_collectionCellSize;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSValue *collectionCellSize; // @synthesize collectionCellSize=_collectionCellSize;
@property(retain, nonatomic) NSValue *titleSize; // @synthesize titleSize=_titleSize;
@property(nonatomic) _Bool download; // @synthesize download=_download;
@property(nonatomic) _Bool hasShadeColor; // @synthesize hasShadeColor=_hasShadeColor;
@property(nonatomic) _Bool hasBgColor; // @synthesize hasBgColor=_hasBgColor;
@property(retain, nonatomic) NSString *localUrl; // @synthesize localUrl=_localUrl;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

