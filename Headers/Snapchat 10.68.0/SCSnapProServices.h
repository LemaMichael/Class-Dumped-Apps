//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCLazy;

@interface SCSnapProServices : NSObject
{
    SCLazy *_managedProfilesProvider;
    SCLazy *_userProfileIdProvider;
}

@property(readonly, nonatomic) SCLazy *userProfileIdProvider; // @synthesize userProfileIdProvider=_userProfileIdProvider;
@property(readonly, nonatomic) SCLazy *managedProfilesProvider; // @synthesize managedProfilesProvider=_managedProfilesProvider;
- (void).cxx_destruct;
- (id)initWithManagedProfilesProvider:(id)arg1 userProfileIdProvider:(id)arg2;

@end
