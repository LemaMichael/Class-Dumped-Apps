//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@interface SCLSIDebugInfoVertex : SCComposerMarshallableObject
{
    double _x;
    double _y;
}

@property(nonatomic) double y; // @synthesize y=_y;
@property(nonatomic) double x; // @synthesize x=_x;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithX:(double)arg1 y:(double)arg2;

@end
