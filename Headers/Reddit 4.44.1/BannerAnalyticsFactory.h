//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseAnalyticsEventFactory.h"

@interface BannerAnalyticsFactory : BaseAnalyticsEventFactory
{
}

+ (id)dismissEventWithSource:(id)arg1 bannerId:(id)arg2 buttonText:(id)arg3;
+ (id)clickEventWithSource:(id)arg1 bannerId:(id)arg2 buttonText:(id)arg3;
+ (id)viewEventWithSource:(id)arg1 bannerId:(id)arg2 buttonText:(id)arg3;

@end
