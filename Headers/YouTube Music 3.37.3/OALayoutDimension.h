//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OALayoutAnchor.h"

@interface OALayoutDimension : OALayoutAnchor
{
}

- (void)addConstraint:(id)arg1 toView:(id)arg2;
- (id)constraintToAnchor:(id)arg1 relatedBy:(long long)arg2 multiplier:(double)arg3 constant:(double)arg4;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;
- (id)constraintLessThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintGreaterThanOrEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintEqualToAnchor:(id)arg1 multiplier:(double)arg2;
- (id)constraintLessThanOrEqualToConstant:(double)arg1;
- (id)constraintGreaterThanOrEqualToConstant:(double)arg1;
- (id)constraintEqualToConstant:(double)arg1;

@end

