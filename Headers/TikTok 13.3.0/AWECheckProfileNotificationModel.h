//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSArray, NSNumber;

@interface AWECheckProfileNotificationModel : AWEBaseApiModel
{
    NSArray *_userInfoList;
    NSNumber *_countOfUser;
    NSNumber *_createTime;
}

+ (id)userInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSNumber *countOfUser; // @synthesize countOfUser=_countOfUser;
@property(retain, nonatomic) NSArray *userInfoList; // @synthesize userInfoList=_userInfoList;
- (void).cxx_destruct;

@end

