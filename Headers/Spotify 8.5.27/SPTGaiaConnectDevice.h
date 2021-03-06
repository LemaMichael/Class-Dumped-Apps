//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaDeviceProtocol-Protocol.h"

@class NSArray, NSString;

@interface SPTGaiaConnectDevice : NSObject <SPTGaiaDeviceProtocol>
{
    _Bool _isActive;
    _Bool _isBeingActivated;
    _Bool _requiresOnboarding;
    _Bool _isAttached;
    _Bool _isGroup;
    _Bool _isDisabled;
    _Bool _socialConnect;
    _Bool _isZeroconf;
    _Bool _supportsVolume;
    _Bool _supportsLogout;
    _Bool _supportsRename;
    _Bool _isAvailableOnLocalNetwork;
    _Bool _shuffleDevice;
    float _volume;
    NSString *_deviceId;
    NSString *_physicalDeviceId;
    NSString *_attachId;
    NSString *_name;
    NSString *_model;
    NSString *_brand;
    NSArray *_incarnations;
    NSArray *_capabilities;
    unsigned long long _deviceType;
    unsigned long long _deviceState;
    long long _volumeSteps;
}

@property(nonatomic) long long volumeSteps; // @synthesize volumeSteps=_volumeSteps;
@property(nonatomic, getter=isShuffleDevice) _Bool shuffleDevice; // @synthesize shuffleDevice=_shuffleDevice;
@property(nonatomic) unsigned long long deviceState; // @synthesize deviceState=_deviceState;
@property(nonatomic) unsigned long long deviceType; // @synthesize deviceType=_deviceType;
@property(copy, nonatomic) NSArray *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic) _Bool isAvailableOnLocalNetwork; // @synthesize isAvailableOnLocalNetwork=_isAvailableOnLocalNetwork;
@property(nonatomic) _Bool supportsRename; // @synthesize supportsRename=_supportsRename;
@property(nonatomic) _Bool supportsLogout; // @synthesize supportsLogout=_supportsLogout;
@property(nonatomic) _Bool supportsVolume; // @synthesize supportsVolume=_supportsVolume;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool isZeroconf; // @synthesize isZeroconf=_isZeroconf;
@property(nonatomic, getter=isSocialConnect) _Bool socialConnect; // @synthesize socialConnect=_socialConnect;
@property(nonatomic) _Bool isDisabled; // @synthesize isDisabled=_isDisabled;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(nonatomic) _Bool isAttached; // @synthesize isAttached=_isAttached;
@property(nonatomic) _Bool requiresOnboarding; // @synthesize requiresOnboarding=_requiresOnboarding;
@property(nonatomic) _Bool isBeingActivated; // @synthesize isBeingActivated=_isBeingActivated;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(copy, nonatomic) NSArray *incarnations; // @synthesize incarnations=_incarnations;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *attachId; // @synthesize attachId=_attachId;
@property(readonly, nonatomic) NSString *physicalDeviceId; // @synthesize physicalDeviceId=_physicalDeviceId;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
- (void).cxx_destruct;
- (void)updateVolumeToNewValue:(float)arg1;
- (void)updateVolumeAfterVolumeDecrease;
- (void)updateVolumeAfterVolumeIncrease;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 requiresOnboarding:(_Bool)arg2;
- (id)incarnationOfType:(unsigned long long)arg1;
- (id)deviceTypeString;
- (id)deviceTypeName;
- (id)specificNameWithSeparator:(id)arg1;
- (id)brandAndTypeStringWithSeparator:(id)arg1;
- (_Bool)isDiscoveredLocally;
- (_Bool)isAlwaysLocallyDiscoverable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

