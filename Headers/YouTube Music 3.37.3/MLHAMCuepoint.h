//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLCuepoint-Protocol.h"

@class NSString;

@interface MLHAMCuepoint : NSObject <MLCuepoint>
{
    NSString *_cueContext;
    NSString *_cueIdentifier;
    long long _cuepointEvent;
    long long _cueType;
    double _cuepointStartTime;
    double _cuepointOffset;
    double _totalCueDuration;
}

+ (id)cuepointFromEmsgDict:(id)arg1 chunkStartTime:(CDStruct_1b6d18a9)arg2;
@property(readonly, nonatomic) double totalCueDuration; // @synthesize totalCueDuration=_totalCueDuration;
@property(readonly, nonatomic) double cuepointOffset; // @synthesize cuepointOffset=_cuepointOffset;
@property(readonly, nonatomic) double cuepointStartTime; // @synthesize cuepointStartTime=_cuepointStartTime;
@property(readonly, nonatomic) long long cueType; // @synthesize cueType=_cueType;
@property(readonly, nonatomic) long long cuepointEvent; // @synthesize cuepointEvent=_cuepointEvent;
@property(readonly, nonatomic) NSString *cueIdentifier; // @synthesize cueIdentifier=_cueIdentifier;
@property(readonly, nonatomic) NSString *cueContext; // @synthesize cueContext=_cueContext;
- (void).cxx_destruct;
- (_Bool)isDuplicate:(id)arg1;
@property(readonly, nonatomic) double remainingCueDuration;
@property(readonly, nonatomic) double cueStartTime;
- (void)setCuepointStartTime:(double)arg1;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 event:(id)arg3 cuepointStartTime:(double)arg4 cuepointOffset:(double)arg5 totalDuration:(double)arg6 context:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
