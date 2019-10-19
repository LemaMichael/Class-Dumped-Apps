//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "DYARawDataProtocol-Protocol.h"
#import "MTLJSONSerializing-Protocol.h"

@class NSDictionary, NSString;

@interface DYAAwemeAccountModel : MTLModel <DYARawDataProtocol, MTLJSONSerializing>
{
    _Bool _isInDeactivateBufferPeriod;
    NSDictionary *rawData;
    NSString *_logID;
    NSString *_userID;
    NSString *_phoneNumber;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) _Bool isInDeactivateBufferPeriod; // @synthesize isInDeactivateBufferPeriod=_isInDeactivateBufferPeriod;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property(copy, nonatomic) NSDictionary *rawData; // @synthesize rawData;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
