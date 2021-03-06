//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEAwemeModel, AWESecondKillAdModel, NSArray, NSNumber;

@interface AWESecondKillResponse : AWEBaseApiModel
{
    NSNumber *_result;
    AWESecondKillAdModel *_ad;
    NSArray *_awemeList;
    NSNumber *_delayTimeInterval;
}

+ (id)awemeListJSONTransformer;
+ (id)adJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) NSNumber *delayTimeInterval; // @synthesize delayTimeInterval=_delayTimeInterval;
@property(retain, nonatomic) NSArray *awemeList; // @synthesize awemeList=_awemeList;
@property(retain, nonatomic) AWESecondKillAdModel *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) NSNumber *result; // @synthesize result=_result;
- (void).cxx_destruct;
@property(readonly, nonatomic) AWEAwemeModel *aweme; // @dynamic aweme;

@end

