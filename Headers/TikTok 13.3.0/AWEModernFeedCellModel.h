//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEModernFeedSectionMeta, NSString;

@interface AWEModernFeedCellModel : NSObject
{
    NSString *_cellType;
    id _data;
    AWEModernFeedSectionMeta *_meta;
}

@property(retain, nonatomic) AWEModernFeedSectionMeta *meta; // @synthesize meta=_meta;
@property(retain, nonatomic) id data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *cellType; // @synthesize cellType=_cellType;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isStaticType;
- (id)initWithType:(id)arg1 data:(id)arg2;

@end
