//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HUBComponentLayoutManager-Protocol.h"

@class SPTTheme;

@interface HUGSComponentLayoutManager : NSObject <HUBComponentLayoutManager>
{
    SPTTheme *_theme;
}

@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (_Bool)shouldStackComponentWithLayoutTraits:(id)arg1 belowComponentWithLayoutTraits:(id)arg2;
- (double)horizontalOffsetForComponentsWithLayoutTraits:(id)arg1 firstComponentLeadingHorizontalOffset:(double)arg2 lastComponentTrailingHorizontalOffset:(double)arg3;
- (double)horizontalMarginForComponentWithLayoutTraits:(id)arg1 precedingComponentLayoutTraits:(id)arg2;
- (double)verticalMarginForComponentWithLayoutTraits:(id)arg1 precedingComponentLayoutTraits:(id)arg2;
- (double)verticalMarginBetweenComponentWithLayoutTraits:(id)arg1 andHeaderComponentWithLayoutTraits:(id)arg2;
- (double)marginBetweenComponentWithLayoutTraits:(id)arg1 andContentEdge:(unsigned long long)arg2;
- (unsigned long long)containerAlignmentForComponentWithLayoutTraits:(id)arg1;
- (double)containerMaxWidthForComponentWithLayoutTraits:(id)arg1;
@property(readonly, nonatomic) double defaultComponentMargin;
- (id)initWithTheme:(id)arg1;

@end

