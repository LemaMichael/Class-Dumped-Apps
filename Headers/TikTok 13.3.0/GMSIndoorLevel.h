//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GMSIndoorLevel : NSObject
{
    struct IndoorID _indoorID;
    set_83b24b87 _enclosingBuildingIDs;
    int _elevation;
    int _relativeElevation;
    int _minRenderingZoom;
    NSString *_name;
    NSString *_shortName;
    NSDictionary *_requestParams;
    struct Rectangle2D _preferredViewport;
    struct Rectangle2D _approximateBounds;
}

+ (id)levelFromProto:(id)arg1 minRenderingZoom:(int)arg2 enclosingBuildingID:(const struct IndoorID *)arg3;
@property(readonly, nonatomic) NSDictionary *requestParams; // @synthesize requestParams=_requestParams;
@property(readonly, nonatomic) int minRenderingZoom; // @synthesize minRenderingZoom=_minRenderingZoom;
@property(nonatomic) struct Rectangle2D approximateBounds; // @synthesize approximateBounds=_approximateBounds;
@property(readonly, nonatomic) struct Rectangle2D preferredViewport; // @synthesize preferredViewport=_preferredViewport;
@property(readonly, nonatomic) int relativeElevation; // @synthesize relativeElevation=_relativeElevation;
@property(readonly, nonatomic) int elevation; // @synthesize elevation=_elevation;
@property(readonly, copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) const struct IndoorID *indoorID; // @synthesize indoorID=_indoorID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (STLRange_8f5356ef)enclosingBuildingIDs;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithIndoorID:(const struct IndoorID *)arg1 enclosingBuildingIDs:(set_83b24b87 *)arg2 name:(id)arg3 shortName:(id)arg4 elevation:(int)arg5 relativeElevation:(int)arg6 minRenderingZoom:(int)arg7 preferredViewport:(struct Rectangle2D)arg8;

@end
