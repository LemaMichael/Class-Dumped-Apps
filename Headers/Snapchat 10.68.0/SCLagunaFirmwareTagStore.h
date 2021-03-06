//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, SCSessionRequestManager;
@protocol SCLagunaFirmwareTagStoreDelegate;

@interface SCLagunaFirmwareTagStore : NSObject
{
    NSArray *_tags;
    SCSessionRequestManager *_requestManager;
    id <SCLagunaFirmwareTagStoreDelegate> _delegate;
}

@property(nonatomic) __weak id <SCLagunaFirmwareTagStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCSessionRequestManager *requestManager; // @synthesize requestManager=_requestManager;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (_Bool)deviceHasMinimumRequiredFirmware:(id)arg1;
- (_Bool)deviceHasLatestFirmware:(id)arg1;
- (id)minimumRequiredVersionForDevice:(id)arg1;
- (id)latestVersionForDevice:(id)arg1;
- (id)firmwareTagForDevice:(id)arg1;
- (_Bool)hasLatestFirmwareVersion;
- (void)fetchLatestFirmwareVersion;
- (id)_requestParams;
- (id)initWithRequestManager:(id)arg1 delegate:(id)arg2;

@end

