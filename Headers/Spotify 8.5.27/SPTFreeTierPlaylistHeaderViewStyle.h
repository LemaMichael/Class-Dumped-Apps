//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class NSString;

@interface SPTFreeTierPlaylistHeaderViewStyle : NSObject <GLUEStyle>
{
    double _filterbarHeight;
    double _filterBarBottomPadding;
    double _filterBarMinAlpha;
    double _filterbarMaxAlpha;
}

@property(nonatomic) double filterbarMaxAlpha; // @synthesize filterbarMaxAlpha=_filterbarMaxAlpha;
@property(nonatomic) double filterBarMinAlpha; // @synthesize filterBarMinAlpha=_filterBarMinAlpha;
@property(nonatomic) double filterBarBottomPadding; // @synthesize filterBarBottomPadding=_filterBarBottomPadding;
@property(nonatomic) double filterbarHeight; // @synthesize filterbarHeight=_filterbarHeight;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
