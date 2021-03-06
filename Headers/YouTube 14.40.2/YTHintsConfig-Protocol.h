//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIView;

@protocol YTHintsConfig <NSObject>
- (UIView *)tooltipContainerViewOverride;
- (double)minimumTooltipDuration;
- (void)didShowTooltipWithModel:(id <YTTooltipModel>)arg1;
- (_Bool)canShowTooltipWithModel:(id <YTTooltipModel>)arg1;

@optional
- (_Bool)skipObstructionCheck;
- (NSArray *)obstructedViewsClassBlacklist;
@end

