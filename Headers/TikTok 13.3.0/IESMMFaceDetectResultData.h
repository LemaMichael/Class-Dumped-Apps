//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMAlgorithmResultData.h"

@interface IESMMFaceDetectResultData : IESMMAlgorithmResultData
{
    double _yaw;
    double _pitch;
    double _roll;
    unsigned long long _action;
    double _originX;
    double _originY;
    double _width;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double originY; // @synthesize originY=_originY;
@property(nonatomic) double originX; // @synthesize originX=_originX;
@property(nonatomic) unsigned long long action; // @synthesize action=_action;
@property(nonatomic) double roll; // @synthesize roll=_roll;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;
@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
- (id)init;

@end

