//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GRWKillSwitch : NSObject
{
}

+ (id)sharedInstance;
- (void)postNotificationForDisabledComponent:(unsigned long long)arg1;
- (id)killSwitchSharedDefaultsKeyForComponent:(unsigned long long)arg1;
- (id)killSwitchPrefixForComponent:(unsigned long long)arg1;
- (unsigned long long)componentForKillSwitch:(id)arg1;
- (id)components;
- (id)loadSignaturesForComponent:(unsigned long long)arg1;
- (void)saveSignatures:(id)arg1 forComponent:(unsigned long long)arg2;
- (id)deserializeSignatures:(id)arg1;
- (id)serializeSignatures:(id)arg1;
- (void)disableComponent:(unsigned long long)arg1;
- (_Bool)isComponentDisabled:(unsigned long long)arg1;
- (void)processSignatures:(id)arg1;

@end

