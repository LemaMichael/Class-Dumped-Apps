//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCNetworkImageServices, SCServicesExposer, SCUserSessionScope;

@interface SCDiscoverFeedCognacEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_discoverFeedCognacServicesExposer;
    SCNetworkImageServices *_networkImageServices;
}

@property(nonatomic) __weak SCNetworkImageServices *networkImageServices; // @synthesize networkImageServices=_networkImageServices;
@property(retain, nonatomic) SCServicesExposer *discoverFeedCognacServicesExposer; // @synthesize discoverFeedCognacServicesExposer=_discoverFeedCognacServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_discoverFeedGamesSectionDataProvider;
- (void)begin;

@end
