//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AWEIMCompanyMenuModel : NSObject
{
    NSString *_companyUID;
    NSArray *_levelOneItems;
    NSArray *_levelTwoItemsList;
}

@property(copy, nonatomic) NSArray *levelTwoItemsList; // @synthesize levelTwoItemsList=_levelTwoItemsList;
@property(copy, nonatomic) NSArray *levelOneItems; // @synthesize levelOneItems=_levelOneItems;
@property(copy, nonatomic) NSString *companyUID; // @synthesize companyUID=_companyUID;
- (void).cxx_destruct;
- (id)initWithResponseModel:(id)arg1;

@end
