//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PDLClientVersion, PHTBreakpadDecorator;
@protocol GSCAccountId;

@interface SKTExperimentFlagsProvider : NSObject
{
    id <GSCAccountId> _accountID;
    PDLClientVersion *_clientVersion;
    PHTBreakpadDecorator *_breakpadDecorator;
    NSMutableDictionary *_flagsByClientID;
}

@property(readonly, nonatomic) NSMutableDictionary *flagsByClientID; // @synthesize flagsByClientID=_flagsByClientID;
@property(retain, nonatomic) PHTBreakpadDecorator *breakpadDecorator; // @synthesize breakpadDecorator=_breakpadDecorator;
@property(readonly, nonatomic) PDLClientVersion *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(readonly, nonatomic) id <GSCAccountId> accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
- (id)packageNameForClientID:(int)arg1;
- (long long)integerVersion;
- (id)phenotypeFlagsForClientID:(int)arg1;
- (void)updateOptionsWithExperimentSnapshot:(id)arg1;
- (id)initWithAccountID:(id)arg1 clientInfoProvider:(id)arg2;

@end

