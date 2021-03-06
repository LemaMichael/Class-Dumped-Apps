//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSVastElementModel.h"

@class HTSVastViewableImpressionModel, NSArray, NSString;

@interface HTSVastAdVerificationModel : HTSVastElementModel
{
    NSString *_vendor;
    NSString *_verificationParameters;
    NSArray *_javaScriptResource;
    NSArray *_flashResource;
    NSArray *_verificationNotExecutedTracking;
    HTSVastViewableImpressionModel *_viewableImpression;
}

@property(retain, nonatomic) HTSVastViewableImpressionModel *viewableImpression; // @synthesize viewableImpression=_viewableImpression;
@property(copy, nonatomic) NSArray *verificationNotExecutedTracking; // @synthesize verificationNotExecutedTracking=_verificationNotExecutedTracking;
@property(copy, nonatomic) NSArray *flashResource; // @synthesize flashResource=_flashResource;
@property(copy, nonatomic) NSArray *javaScriptResource; // @synthesize javaScriptResource=_javaScriptResource;
@property(copy, nonatomic) NSString *verificationParameters; // @synthesize verificationParameters=_verificationParameters;
@property(copy, nonatomic) NSString *vendor; // @synthesize vendor=_vendor;
- (void).cxx_destruct;

@end

