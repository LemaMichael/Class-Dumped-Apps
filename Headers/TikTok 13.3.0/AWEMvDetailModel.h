//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEURLModel, NSString;

@interface AWEMvDetailModel : AWEBaseApiModel
{
    NSString *_mvID;
    NSString *_mvName;
    AWEURLModel *_iconURL;
    long long _userCount;
    NSString *_extra;
    NSString *_desc;
}

+ (id)placeholderModel;
+ (id)iconURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *extra; // @synthesize extra=_extra;
@property(nonatomic) long long userCount; // @synthesize userCount=_userCount;
@property(retain, nonatomic) AWEURLModel *iconURL; // @synthesize iconURL=_iconURL;
@property(copy, nonatomic) NSString *mvName; // @synthesize mvName=_mvName;
@property(copy, nonatomic) NSString *mvID; // @synthesize mvID=_mvID;
- (void).cxx_destruct;

@end
