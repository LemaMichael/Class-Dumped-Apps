//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUCommerceStoreInfo-Protocol.h"

@class NSNumber, NSString, SOJUCommerceSnapCodeInfo, SOJUCommerceSnapCommercePolicy, SOJUCommerceStoreCategoryInfo, SOJUCommerceStorePixelInfo, SOJUCommerceStorePolicy;

@interface SOJUCommerceStoreInfo : NSObject <SOJUCommerceStoreInfo>
{
    NSString *_idValue;
    NSString *_name;
    NSString *_owner;
    NSString *_email;
    NSString *_phone;
    NSString *_iconUrl;
    SOJUCommerceStoreCategoryInfo *_categoryInfo;
    NSString *_snapchatAccount;
    SOJUCommerceStorePolicy *_storePolicy;
    NSString *_supportUrl;
    NSNumber *_isStoreVisible;
    NSString *_checkoutDisclaimerPolicyHtml;
    NSNumber *_doesShipToUserLocation;
    NSNumber *_shouldUseWebview;
    NSString *_snapcodeUrl;
    NSString *_soldBy;
    SOJUCommerceSnapCommercePolicy *_snapCommercePolicy;
    NSNumber *_isThirdPartyStore;
    NSString *_descriptionValue;
    SOJUCommerceSnapCodeInfo *_deeplinkSnapCodeInfo;
    SOJUCommerceStorePixelInfo *_storePixelInfo;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) SOJUCommerceStorePixelInfo *storePixelInfo; // @synthesize storePixelInfo=_storePixelInfo;
@property(readonly, copy, nonatomic) SOJUCommerceSnapCodeInfo *deeplinkSnapCodeInfo; // @synthesize deeplinkSnapCodeInfo=_deeplinkSnapCodeInfo;
@property(readonly, copy, nonatomic) NSString *descriptionValue; // @synthesize descriptionValue=_descriptionValue;
@property(readonly, copy, nonatomic) NSNumber *isThirdPartyStore; // @synthesize isThirdPartyStore=_isThirdPartyStore;
@property(readonly, copy, nonatomic) SOJUCommerceSnapCommercePolicy *snapCommercePolicy; // @synthesize snapCommercePolicy=_snapCommercePolicy;
@property(readonly, copy, nonatomic) NSString *soldBy; // @synthesize soldBy=_soldBy;
@property(readonly, copy, nonatomic) NSString *snapcodeUrl; // @synthesize snapcodeUrl=_snapcodeUrl;
@property(readonly, copy, nonatomic) NSNumber *shouldUseWebview; // @synthesize shouldUseWebview=_shouldUseWebview;
@property(readonly, copy, nonatomic) NSNumber *doesShipToUserLocation; // @synthesize doesShipToUserLocation=_doesShipToUserLocation;
@property(readonly, copy, nonatomic) NSString *checkoutDisclaimerPolicyHtml; // @synthesize checkoutDisclaimerPolicyHtml=_checkoutDisclaimerPolicyHtml;
@property(readonly, copy, nonatomic) NSNumber *isStoreVisible; // @synthesize isStoreVisible=_isStoreVisible;
@property(readonly, copy, nonatomic) NSString *supportUrl; // @synthesize supportUrl=_supportUrl;
@property(readonly, copy, nonatomic) SOJUCommerceStorePolicy *storePolicy; // @synthesize storePolicy=_storePolicy;
@property(readonly, copy, nonatomic) NSString *snapchatAccount; // @synthesize snapchatAccount=_snapchatAccount;
@property(readonly, copy, nonatomic) SOJUCommerceStoreCategoryInfo *categoryInfo; // @synthesize categoryInfo=_categoryInfo;
@property(readonly, copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(readonly, copy, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSString *owner; // @synthesize owner=_owner;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 name:(id)arg2 owner:(id)arg3 email:(id)arg4 phone:(id)arg5 iconUrl:(id)arg6 categoryInfo:(id)arg7 snapchatAccount:(id)arg8 storePolicy:(id)arg9 supportUrl:(id)arg10 isStoreVisible:(id)arg11 checkoutDisclaimerPolicyHtml:(id)arg12 doesShipToUserLocation:(id)arg13 shouldUseWebview:(id)arg14 snapcodeUrl:(id)arg15 soldBy:(id)arg16 snapCommercePolicy:(id)arg17 isThirdPartyStore:(id)arg18 descriptionValue:(id)arg19 deeplinkSnapCodeInfo:(id)arg20 storePixelInfo:(id)arg21;
- (_Bool)isSpectaclesStore;
- (_Bool)isValidModel;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)isThirdPartyStoreValue;
- (_Bool)shouldUseWebviewValue;
- (_Bool)doesShipToUserLocationValue;
- (_Bool)isStoreVisibleValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
