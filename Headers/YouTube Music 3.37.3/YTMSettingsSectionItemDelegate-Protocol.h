//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, YTISettingMenuItemSupportedRenderers, YTMSettingsSectionItem;

@protocol YTMSettingsSectionItemDelegate <NSObject>
- (void)item:(YTMSettingsSectionItem *)arg1 failedSelectingMenuItem:(YTISettingMenuItemSupportedRenderers *)arg2 withError:(NSError *)arg3;
- (void)item:(YTMSettingsSectionItem *)arg1 didSelectSettingMenuItem:(YTISettingMenuItemSupportedRenderers *)arg2;
- (void)item:(YTMSettingsSectionItem *)arg1 failedSettingAsynchronousBooleanValue:(_Bool)arg2 withError:(NSError *)arg3;
- (void)item:(YTMSettingsSectionItem *)arg1 didSetAsynchronousBooleanValue:(_Bool)arg2;
- (void)item:(YTMSettingsSectionItem *)arg1 willSetAsynchronousBooleanValue:(_Bool)arg2;
@end
