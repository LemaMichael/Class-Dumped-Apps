//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Localizer, NSString;

@protocol LocalizerLoggerDelegate <NSObject>
- (void)localizer:(Localizer *)arg1 logError:(NSString *)arg2;
- (_Bool)enableLoggingInLocalizer:(Localizer *)arg1;

@optional
- (void)localizer:(Localizer *)arg1 logDebug:(NSString *)arg2;
- (void)localizer:(Localizer *)arg1 logInfo:(NSString *)arg2;
@end
