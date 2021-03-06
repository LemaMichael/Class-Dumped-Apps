//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FVRBaseEventItem.h"

@class NSArray, NSDictionary, NSString;

@interface FVROrderRatingItem : FVRBaseEventItem
{
    _Bool _isSeller;
    _Bool _includeWorkInReview;
    int _value;
    NSString *_comment;
    NSString *_sellerResponse;
    NSArray *_questions;
    NSDictionary *_starValuations;
}

@property(retain, nonatomic) NSDictionary *starValuations; // @synthesize starValuations=_starValuations;
@property(retain, nonatomic) NSArray *questions; // @synthesize questions=_questions;
@property(retain, nonatomic) NSString *sellerResponse; // @synthesize sellerResponse=_sellerResponse;
@property(nonatomic) _Bool includeWorkInReview; // @synthesize includeWorkInReview=_includeWorkInReview;
@property(nonatomic) _Bool isSeller; // @synthesize isSeller=_isSeller;
@property(retain, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(nonatomic) int value; // @synthesize value=_value;
- (void).cxx_destruct;
- (id)initWithElement:(id)arg1;

@end

