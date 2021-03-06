//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class NSString;

@interface SCContextCTATapActionMetrics : SCComposerMarshallableObject
{
    NSString *_ctaTapElementType;
    double _ctaTapElementIndex;
    double _ctaMaxElementIndex;
}

@property(nonatomic) double ctaMaxElementIndex; // @synthesize ctaMaxElementIndex=_ctaMaxElementIndex;
@property(nonatomic) double ctaTapElementIndex; // @synthesize ctaTapElementIndex=_ctaTapElementIndex;
@property(copy, nonatomic) NSString *ctaTapElementType; // @synthesize ctaTapElementType=_ctaTapElementType;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithCtaTapElementType:(id)arg1 ctaTapElementIndex:(double)arg2 ctaMaxElementIndex:(double)arg3;
- (id)toPresentationTriggerInfo;

@end

