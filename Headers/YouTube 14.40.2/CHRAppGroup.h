//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface CHRAppGroup : NSObject
{
    NSURL *_containerURLForCurrentAppGroup;
    unsigned long long _currentAppGroupType;
}

+ (id)userDefaultsForCommonAppGroup;
+ (id)containerURLForCommonAppGroup;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long currentAppGroupType; // @synthesize currentAppGroupType=_currentAppGroupType;
@property(retain, nonatomic) NSURL *containerURLForCurrentAppGroup; // @synthesize containerURLForCurrentAppGroup=_containerURLForCurrentAppGroup;
- (void).cxx_destruct;
- (id)appGroupIdentifierForType:(unsigned long long)arg1;
- (void)logSetupErrorIfNeeded;
- (void)determineAppGroup;
- (id)init;

@end

