//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCStoriesSnapReadReceiptExperimentContext : SCExperimentContext
{
    _Bool _friendStoryEnabled;
    _Bool _includeViewStatusInStoryResponse;
    _Bool _measurementEnabled;
    NSString *_uploadingPolicy;
}

@property(readonly, nonatomic) NSString *uploadingPolicy; // @synthesize uploadingPolicy=_uploadingPolicy;
@property(readonly, nonatomic) _Bool measurementEnabled; // @synthesize measurementEnabled=_measurementEnabled;
@property(readonly, nonatomic) _Bool includeViewStatusInStoryResponse; // @synthesize includeViewStatusInStoryResponse=_includeViewStatusInStoryResponse;
@property(readonly, nonatomic) _Bool friendStoryEnabled; // @synthesize friendStoryEnabled=_friendStoryEnabled;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end
