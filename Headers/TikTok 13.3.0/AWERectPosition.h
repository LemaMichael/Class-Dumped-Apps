//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@interface AWERectPosition : AWEBaseApiModel
{
    double _top;
    double _left;
    double _bottom;
    double _right;
    double _centerX;
    double _centerY;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) double centerY; // @synthesize centerY=_centerY;
@property(nonatomic) double centerX; // @synthesize centerX=_centerX;
@property(nonatomic) double right; // @synthesize right=_right;
@property(nonatomic) double bottom; // @synthesize bottom=_bottom;
@property(nonatomic) double left; // @synthesize left=_left;
@property(nonatomic) double top; // @synthesize top=_top;
- (struct CGRect)frameWithSize:(struct CGSize)arg1;

@end

