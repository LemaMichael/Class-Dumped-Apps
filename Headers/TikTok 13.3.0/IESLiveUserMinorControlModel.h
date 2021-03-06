//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString;

@interface IESLiveUserMinorControlModel : MTLModel <MTLJSONSerializing>
{
    _Bool _filterRiskContent;
    _Bool _enableTimeLock;
    _Bool _forbidLiveRoomCreate;
    _Bool _forbidWallet;
    long long _passwordStatus;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long passwordStatus; // @synthesize passwordStatus=_passwordStatus;
@property(nonatomic) _Bool forbidWallet; // @synthesize forbidWallet=_forbidWallet;
@property(nonatomic) _Bool forbidLiveRoomCreate; // @synthesize forbidLiveRoomCreate=_forbidLiveRoomCreate;
@property(nonatomic) _Bool enableTimeLock; // @synthesize enableTimeLock=_enableTimeLock;
@property(nonatomic) _Bool filterRiskContent; // @synthesize filterRiskContent=_filterRiskContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

