//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDLExperimentsService-Protocol.h"

@class NSString, PDLClientVersion, PDLPhenotypeFlagsImpl, PHTBreakpadDecorator;

@interface PDLExperimentsImpl : NSObject <PDLExperimentsService>
{
    PDLPhenotypeFlagsImpl *_flags;
    PDLClientVersion *_clientVersion;
    PHTBreakpadDecorator *_breakpadDecorator;
}

@property(retain, nonatomic) PHTBreakpadDecorator *breakpadDecorator; // @synthesize breakpadDecorator=_breakpadDecorator;
@property(readonly, nonatomic) PDLClientVersion *clientVersion; // @synthesize clientVersion=_clientVersion;
@property(retain, nonatomic) PDLPhenotypeFlagsImpl *flags; // @synthesize flags=_flags;
- (void).cxx_destruct;
- (long long)integerVersion;
- (id)initWithAccountID:(id)arg1 clientInfoProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
